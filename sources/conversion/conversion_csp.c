/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_csp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:12:54 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/12 12:09:09 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>
#include <stdio.h>

char	*c_conv(int c, t_option *option)
{
	char	*new_str;
	char	*convert_str;

	if (c == 0)
	{
		convert_str = (char *)malloc(sizeof(char) * 1);
		if (convert_str == NULL)
			return (NULL);
		convert_str[0] = '\0';
		if (option->width == 0 && option->precision != 0)
		{
			option->precision = 0;
			option->flag &= ~MOD_DOT;
		}
	}
	else
	{
		convert_str = (char *)malloc(sizeof(char) * (2));
		if (convert_str == NULL)
			return (NULL);
		option->precision = 0;
		option->flag &= ~MOD_DOT;
		convert_str[0] = c;
		convert_str[1] = '\0';
	}
	new_str = hub_strjoin_width_precision(convert_str, option, 1);
	option->len_conversion = ft_strlen((const char *)new_str);
	return (new_str);
}

char	*s_conv(char *str, t_option *option)
{
	char			*new_str;
	char			*str_out;
	static char		*null = "(null)";

	if (str == NULL)
	{
		str = null;
		//if (option->width != 0)
			//option->width = option->width - option->precision;
		//option->precision = 0;
		//option->flag &= ~MOD_DOT;
	}
	if (option->flag & MOD_DOT)
		str_out = ft_strndup(str, option->precision);
	else
		str_out = ft_strdup(str);
	option->precision = 0;
	option->flag &= ~MOD_DOT;
	new_str = hub_strjoin_width_precision(str, option, ft_strlen(str_out));
	option->len_conversion = ft_strlen(new_str);
	return (new_str);
}

char	*p_conv(unsigned long p, t_option *option)
{
	char		*new_str;
	char		*number;
	t_option	cpy_option;

	cpy_option.flag = option->flag;
	cpy_option.precision = option->precision;
	cpy_option.width = option->width;
	number = ft_ultoa_base(p, 16);
	if (option->precision < option->width)
		option->width = option->width - (option->precision + 2);
	else
		option->width = 0;
	if (option->precision > ft_strlen(number))
		option->precision -= ft_strlen(number);
	else
		option->precision = 0;
	new_str = (char *)malloc(sizeof(char) * (2 + option->precision +
				option->width + 1));
	if (new_str != NULL)
		new_str = strjoin_p_conversion(new_str, &cpy_option, option, number);
	free(number);
	return (new_str);
}
