/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_conversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 17:29:37 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/03 17:33:42 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h> //DEBUG
#include "libftprintf.h"
#include "libft.h"

void	initialisation(t_state_machine *machine, int len)
{
	ft_bzero(machine->buffer, BUFFER_SIZE);
	machine->len = 0;
	machine->len_out += len;
	machine->state = LETTER;
	ft_bzero(&machine->option, sizeof(machine->option));
}

void	process_conversion(t_state_machine *machine, char **output)
{
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
	return (len);
}
