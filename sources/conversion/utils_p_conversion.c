/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_p_conversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:12:54 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/26 13:25:22 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>

char	*p_is_zero(t_option *option, t_option *cpy_option)
{
	char		*str_pzero;
	const char	*pre_string = "0x";

	option->width = cpy_option->width - 2;
	if (cpy_option->width != 0)
	{
		str_pzero = (char *)malloc(sizeof(char) * (cpy_option->width + 2));
		if (str_pzero == NULL)
		{
			option->len_conversion = 0;
			return (NULL);
		}
		str_pzero = strjoin_p_conversion(str_pzero, cpy_option, option, "\0");
		return (str_pzero);
	}
	str_pzero = (char *)malloc(sizeof(char) * (2 + 1));
	if (str_pzero == NULL)
	{
		option->len_conversion = 0;
		return (NULL);
	}
	option->len_conversion = 2;
	return (ft_strdup(pre_string));
}

void	get_p_width(t_option *option, long len)
{
	if (option->width > len && option->width > option->precision)
	{
		if (len > option->precision)
			option->width = option->width > (len + 2) ?
				option->width - (len + 2) : 0;
		else
			option->width = option->width - (option->precision + 2);
	}
	else
		option->width = 0;
}
