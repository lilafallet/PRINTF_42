/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:18 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/08 16:33:11 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "libftprintf.h"
#include "libft.h"

void	initialisation(t_state_machine *machine)
{
	ft_bzero(machine->buffer, BUFFER_SIZE);
	machine->len = 0;
	machine->len_out += machine->option.len_conversion;
	machine->option.len_conversion = 0;
	machine->state = LETTER;
	ft_bzero(&machine->option, sizeof(machine->option));
}

char	*process_conversion(va_list *argptr, t_state_machine *machine)
{
	char	*new_str;

	new_str = NULL;
	if (machine->option.flag & CONV_C)
		new_str = c_conv(va_arg(*argptr, int), &machine->option);
	else if (machine->option.flag & CONV_S)
		new_str = s_conv(va_arg(*argptr, char *), &machine->option);
	else if (machine->option.flag & CONV_P)
		new_str = p_conv(va_arg(*argptr, unsigned long), &machine->option);
	else if ((machine->option.flag & CONV_D) || (machine->option.flag & CONV_I)
				|| (machine->option.flag & CONV_U)
				|| (machine->option.flag & CONV_XMIN)
				|| (machine->option.flag & CONV_XMAJ))
		new_str = diuxminxmaj_conv(va_arg(*argptr, long), &machine->option);
	return (new_str);
}
