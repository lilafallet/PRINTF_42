/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_x_conversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:08 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/15 20:30:20 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //DEBUG

void	get_width_x(t_option *option, long len)
{
	if (option->width > len && option->width > option->precision)
	{
		if (len > option->precision)
			option->width -= len;
		else
			option->width -= option->precision;
	}
	else
		option->width = 0;
}

void	get_precision_x(t_option *cpy_option, t_option *option, long len)
{
	if ((cpy_option->width > len && len < option->precision) ||
			(cpy_option->width < option->precision && option->precision > len))
		option->precision -= len;
	else
		option->precision = 0;
}

char	*x_is_zero(t_option *option, t_option *cpy_option)
{
	char	*new_str;

	new_str = NULL;
	if (cpy_option->width != 0)
	{
		new_str = (char *)malloc(sizeof(char) * (cpy_option->width + 1));
		if (new_str == NULL)
		{
			option->len_conversion = 0;
			return (NULL);
		}
	}
	option->len_conversion = cpy_option->width != 0 ? cpy_option->width : 0;		
	return (cpy_option->width != 0 ? ft_memset(new_str, ' ', cpy_option->width)
				: '\0');
}
