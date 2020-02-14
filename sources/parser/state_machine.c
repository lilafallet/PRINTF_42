/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_machine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:44 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/13 21:33:06 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libftprintf.h"
#include "libft.h"
#include <stdio.h> //DEBUG

int	letter_function(char *str, t_state_machine *machine, va_list *argptr)
{
	(void)argptr;
	if (*str == '%')
		machine->state = FLAG;
	else
		fill_buffer(machine, *str);
	return (1);
}

int	get_size_of_nb(char *s)
{
	int		i;

	i = 0;
	while (ft_isdigit(s[i]) == TRUE)
		i++;
	return (i);
}

int	flag_function(char *str, t_state_machine *machine, va_list *argptr)
{
	int					what_flag;
	long				nb;

	dprintf(2, "PARSER prec1 %zu, width1 %zu\n", machine->option.precision, machine->option.width);
	dprintf(2, "str = %s\n", str); //DEBUG
	what_flag = is_flag(*str);
	if (what_flag != -1)
	{
		machine->option.flag |= 1 << what_flag;
		if (*str != '.')
			return (1);
		str++;
	}
	if (ft_isdigit(*str) || *str == STAR)
	{
		nb = *str == STAR ? va_arg(*argptr, int) : atoul(str);
		if (what_flag != -1)
			machine->option.precision = nb;
		else
			machine->option.width = nb;
		return (*str == STAR ? 1 : get_size_of_nb(str) + (what_flag != -1));
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
