/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_machine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:44 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/15 13:48:50 by lfallet          ###   ########.fr       */
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
	if (*s == '*')
		return (1);
	while (ft_isdigit(s[i]) == TRUE)
		i++;
	return (i);
}

int	precision_width(char *str, t_state_machine *machine,
		va_list *argptr, int is_precision)
{
	long				nb;

	nb = *str == STAR ? va_arg(*argptr, int) : atoul(str);
	if (nb < 0)
	{
		nb = -nb;
		machine->option.flag |= MOD_MINUS;
		if (is_precision == TRUE)
		{
			machine->option.precision = 0;
			machine->option.flag &= ~MOD_DOT;
			return (2);
		}
	}
	if (is_precision == TRUE)
		machine->option.precision = nb;
	else
		machine->option.width = nb;
	return (get_size_of_nb(str) + is_precision);
}

int	is_number(char *str)
{
	return (ft_isdigit(str[0]) || str[0] == '*');
}

int	flag_function(char *str, t_state_machine *machine, va_list *argptr)
{
	int					what_flag;

	what_flag = is_flag(*str);
	if (what_flag != -1)
	{
		machine->option.flag |= 1 << what_flag;
		if (*str != '.' || (*str == '.' && is_number(str + 1) == FALSE))
			return (1);
		str++;
	}
	if (is_number(str) == TRUE)
		return (precision_width(str, machine, argptr, what_flag != -1));
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
