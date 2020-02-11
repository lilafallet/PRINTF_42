/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_machine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:44 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/06 17:11:39 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libftprintf.h"
#include "libft.h"

int	letter_function(char *str, t_state_machine *machine)
{
	if (*str == '%')
		machine->state = FLAG;
	else
		fill_buffer(machine, *str);
	return (1);
}

int	flag_function(char *str, t_state_machine *machine)
{
	int			what_flag;
	int			nb;

	what_flag = is_flag(*str);
	if (what_flag != -1)
	{
		machine->option.flag |= 1 << what_flag;
		if (*str != '.')
			return (1);
		str++;
	}
	if (*str >= '1' && *str <= '9')
	{
		nb = ft_atoi((const char *)str);
		if (what_flag != -1)
			machine->option.precision = nb;
		else
			machine->option.width = nb;
		return (len_width(nb) + (what_flag != -1));
	}
	machine->state = CONVERSION;
	return (0);
}

int	conversion_function(char *str, t_state_machine *machine)
{
	int		what_conv;

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
