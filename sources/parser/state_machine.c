/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_machine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:44 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/12 14:05:46 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libftprintf.h"
#include "libft.h"

int	letter_function(char *str, t_state_machine *machine, va_list *argptr)
{
	(void)argptr;
	if (*str == '%')
		machine->state = FLAG;
	else
		fill_buffer(machine, *str);
	return (1);
}

int	flag_function(char *str, t_state_machine *machine, va_list *argptr)
{
	int					what_flag;
	unsigned long		nb;

	what_flag = is_flag(*str);
	if (what_flag != -1)
	{
		machine->option.flag |= 1 << what_flag;
		if (*str != '.')
			return (1);
		str++;
	}
	if ((*str >= '1' && *str <= '9') || *str == STAR)
	{
		nb = *str == STAR ? va_arg(*argptr, unsigned long) : atoul(str);
		if (what_flag != -1)
			machine->option.precision = nb;
		else
			machine->option.width = nb;
		return (len_width(nb) + (what_flag != -1));
	}
	else if (what_flag != -1)
		return (1);
	machine->state = CONVERSION;
	return (0);
}

int	conversion_function(char *str, t_state_machine *machine, va_list *argptr)
{
	int		what_conv;

	(void)argptr;
	machine->state = DO_CONV;
	if ((what_conv = is_conversion(*str)) != -1)
		machine->option.flag |= (1 << what_conv) << 8;
	else
	{
		machine->char_error = *str;
		machine->option.flag |= (1 << (NB_CONV)) << 8;
	}
	return (1);
}
