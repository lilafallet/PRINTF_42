/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:26:59 by lfallet           #+#    #+#             */
/*   Updated: 2020/01/30 17:38:57 by lfallet          ###   ########.fr       */
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
	if (machine->flag & CONV_C)
		len = c_conv(va_arg(*argptr, int), machine->flag, &output);
	else if (machine->flag & CONV_S)
		len = s_conv(va_arg(*argptr, char *), machine->flag, &output);
	else if (machine->flag & CONV_P)
		len = p_conv(va_arg(*argptr, void *), machine->flag, &output);
	else if ((machine->flag & CONV_D) || (machine->flag & CONV_I))
		len = di_conv(va_arg(*argptr, int), machine->flag, &output);
	else if (machine->flag & CONV_U)
		len = u_conv(va_arg(*argptr, unsigned long), machine->flag, &output);
	else if ((machine->flag & CONV_XMIN) || (machine->flag & CONV_XMAJ))
		len = xminxmaj_conv(va_arg(*argptr, long), machine->flag, &output);
	memjoin_free(&machine->out, output, machine->len_out, len);
	machine->len_out += len;
	machine->state = LETTER;
	machine->flag = 0;
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
	write(1, machine.out, machine.len_out);
	free(machine.out);
	return (ret != FAILURE ? machine.len_out : FAILURE);
}
