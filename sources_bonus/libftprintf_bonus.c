/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 15:12:50 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/03 15:12:53 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_bonus.h"
#include <unistd.h>

void		preset_flag(t_state_machine *machine)
{
	if (machine->option.flag & MOD_MINUS)
		machine->option.flag &= ~MOD_ZERO;
	if (machine->option.flag & CONV_U && machine->option.flag & MOD_DOT)
		machine->option.flag &= ~MOD_ZERO;
	if ((machine->option.flag & MOD_DOT) && (machine->option.flag & CONV_D ||
			machine->option.flag & CONV_I))
		machine->option.flag &= ~MOD_ZERO;
}

static int	do_conv(va_list *argptr, t_state_machine *machine)
{
	char	*output;

	preset_flag(machine);
	memjoin_free(&machine->out, machine->buffer, machine->len_out,
					machine->len);
	machine->len_out += machine->len;
	output = process_conversion(argptr, machine);
	memjoin_free(&machine->out, output, machine->len_out,
					machine->option.len_conversion);
	free(output);
	initialisation(machine);
	return (0);
}

static int	parser(char *format, va_list *argptr, t_state_machine *machine)
{
	static	t_function	function[3] = {letter_function, flag_function,
										conversion_function};
	int					ret;

	ret = SUCCESS;
	if (format != NULL)
	{
		while (*format != '\0')
		{
			ret = function[machine->state](format, machine, argptr);
			if (ret == FAILURE)
				break ;
			format += ret;
			if (machine->state == DO_CONV)
				do_conv(argptr, machine);
		}
	}
	return (ret == FAILURE ? FAILURE : SUCCESS);
}

int			ft_printf(const char *format, ...)
{
	t_state_machine		machine;
	va_list				argptr;
	int					ret;
	ssize_t				ret_printf;

	ft_bzero(&machine, sizeof(machine));
	va_start(argptr, format);
	ret = parser((char *)format, &argptr, &machine);
	va_end(argptr);
	memjoin_free(&machine.out, machine.buffer, machine.len_out, machine.len);
	machine.len_out += machine.len;
	ret_printf = write(STDOUT_FILENO, machine.out, machine.len_out);
	free(machine.out);
	return (ret != FAILURE ? (int)ret_printf : FAILURE);
}
