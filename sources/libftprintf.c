/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:26:59 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/03 17:22:15 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h> //DEBUG
#include "libftprintf.h"
#include "libft.h"

int		it_is_csp(int flag)
{
	return ((flag & CONV_C) || (flag & CONV_S) || (flag & CONV_P));
}

void	preset_flag(t_state_machine *machine)
{
	if ((machine->option.flag & MOD_MINUS)
		|| it_is_csp(machine->option.flag) == TRUE)
		machine->option.flag &= ~MOD_ZERO;
}

void	initialisation(t_state_machine *machine, int len)
{
	ft_bzero(machine->buffer, BUFFER_SIZE);
	machine->len = 0;
	machine->len_out += len;
	machine->state = LETTER;
	ft_bzero(&machine->option, sizeof(machine->option));
}

int		do_conv(va_list *argptr, t_state_machine *machine)
{
	char	*output;
	int		len;

	output = NULL;
	len = 0;
	preset_flag(machine);
	if (machine->option.flag & CONV_C)
		len = c_conv(va_arg(*argptr, int), &machine->option, &output);
	else if (machine->option.flag & CONV_S)
		len = s_conv(va_arg(*argptr, char *), &machine->option, &output,
						machine);
	else if (machine->option.flag & CONV_P)
		len = p_conv(va_arg(*argptr, void *), &machine->option, &output);
	else if ((machine->option.flag & CONV_D) || (machine->option.flag & CONV_I)
				|| (machine->option.flag & CONV_U)
				|| (machine->option.flag & CONV_XMIN)
				|| (machine->option.flag & CONV_XMAJ))
		len = diuxminxmaj_conv(va_arg(*argptr, long), &machine->option,
								&output);
	memjoin_free(&machine->out, machine->buffer, machine->len_out,
					machine->len);
	machine->len_out += machine->len;
	memjoin_free(&machine->out, output, machine->len_out, len);
	initialisation(machine, len);
	return (0);
}

int		parser(char *format, va_list *argptr, t_state_machine *machine)
{
	static	t_function	function[4] = {letter_function, flag_function,
										conversion_function,
										error_function};
	int					ret;

	ret = SUCCESS;
	if (format != NULL)
	{
		while (*format != '\0')
		{
			ret = function[machine->state](format, machine);
			if (ret == FAILURE)
				break ;
			format += ret;
			if (machine->state == DO_CONV)
				do_conv(argptr, machine);
		}
	}
	return (ret == FAILURE ? FAILURE : SUCCESS);
}

int		ft_printf(const char *format, ...)
{
	t_state_machine		machine;
	va_list				argptr;
	int					ret;

	ft_bzero(&machine, sizeof(machine));
	va_start(argptr, format);
	ret = parser((char *)format, &argptr, &machine);
	va_end(argptr);
	memjoin_free(&machine.out, machine.buffer, machine.len_out, machine.len);
	machine.len_out += machine.len;
	printf("REAL MY PRINTF\n"); //DEBUG
	write(1, machine.out, machine.len_out);
	free(machine.out);
	return (ret != FAILURE ? machine.len_out : FAILURE);
}
