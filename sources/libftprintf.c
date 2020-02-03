/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:26:59 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/03 14:35:18 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h> //DEBUG
#include "libftprintf.h"
#include "libft.h"

int	do_conv(va_list *argptr, t_state_machine *machine)
{
	char	*output;
	int		len;

	output = NULL;
	len = 0;
	//preset_flag()
	if (machine->option.flag & CONV_C)
		len = c_conv(va_arg(*argptr, int), &machine->option, &output);
	else if (machine->option.flag & CONV_S)
		len = s_conv(va_arg(*argptr, char *), &machine->option, &output, machine);
	else if (machine->option.flag & CONV_P)
		len = p_conv(va_arg(*argptr, void *), &machine->option, &output);
	else if ((machine->option.flag & CONV_D) || (machine->option.flag & CONV_I) ||
				(machine->option.flag & CONV_U) || (machine->option.flag & CONV_XMIN) ||
				(machine->option.flag & CONV_XMAJ))
		len = diuxminxmaj_conv(va_arg(*argptr, long), &machine->option, &output);
	printf("OUTPUT: %s\n", output); //DEBUG
	printf("REAL LEN : %d\n", len); //DEBUG
	printf("machine->out = %s\n", machine->out); //DEBUG
	printf("machine->buffer = %s\n", machine->buffer); //DEBUG
	printf("machine->len_out = %d\n", machine->len_out); //DEBUG
	printf("len = %d\n", len); //DEBUG
	memjoin_free(&machine->out, machine->buffer, machine->len_out, len);
	printf("&machine->out = %s\n", machine->out); //DEBUG
	machine->len_out += machine->len;
	printf("machine->len_out += machine->len = %d\n",
				machine->len_out += machine->len); //DEBUG
	printf("machine->out = %s\n", machine->out); //DEBUG
	printf("output = %s\n", output); //DEBUG
	printf("machine->len_out = %d\n", machine->len_out); //DEBUG
	printf("len = %d\n", len); //DEBUG
	memjoin_free(&machine->out, output, machine->len_out, len);
	printf("&machine->out = %s\n", machine->out); //DEBUG
	ft_bzero(machine->buffer, BUFFER_SIZE);
	machine->len = 0;
	machine->len_out += len;
	printf("machine->len_out += len = %d\n", machine->len_out += len); //DEBUG
	machine->state = LETTER;
	ft_bzero(&machine->option, sizeof(machine->option));
	return (0);
}

int	parser(char *format, va_list *argptr, t_state_machine *machine)
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

int	ft_printf(const char *format, ...)
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
