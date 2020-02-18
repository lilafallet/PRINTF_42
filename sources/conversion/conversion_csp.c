/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_csp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:12:54 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/12 13:54:19 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>
#include <stdio.h>

char	*c_conv(int c, t_option *option)
{
	char	*new_str;
	char	*convert_str;

	convert_str = (char *)malloc(sizeof(char) * (2));
	if (convert_str == NULL)
		return (NULL);
	option->precision = 0;
	option->flag &= ~MOD_DOT;
	convert_str[0] = c;
	convert_str[1] = '\0';
	new_str = NULL;
	dprintf(2, "[C] %c, prec %zu, width %zu\n", c, option->precision, option->width);
	new_str = hub_strjoin_width_precision(convert_str, option, 1);
	option->len_conversion = option->width + option->precision + 1;
	return (new_str);
}

char	*s_conv(char *str, t_option *option)
{
	char			*new_str;
	char			*str_out;
	static char		*null = "(null)";
	size_t			len;

	dprintf(2, "prec1 %zu, width1 %zu\n", option->precision, option->width);
	if (str == NULL)
		str = null;
	if (option->flag & MOD_DOT)
		str_out = ft_strndup(str, option->precision);
	else
		str_out = ft_strdup(str);
	len = ft_strlen(str_out);
	if (option->width < (long)len)
		option->width = 0;
	option->precision = 0;
	option->flag &= ~MOD_DOT;
//	dprintf(2, "prec2 %zu, width2 %zu, len2 %zu\n", option->precision, option->width, len);
	new_str = hub_strjoin_width_precision(str, option, len);
	option->len_conversion = ft_strlen(new_str);
	free(str_out);
	return (new_str);
}

char	*p_conv(unsigned long p, t_option *option)
{
	char		*new_str;
	char		*number;
	t_option	cpy_option;
	size_t		len;

	cpy_option.flag = option->flag;
	cpy_option.precision = option->precision;
	cpy_option.width = option->width;
	number = ft_ultoa_base(p, 16);
	len = ft_strlen(number);
	//dprintf(2, "number = %s\n", number); //DEBUG
	if (option->width > (long)len && option->width > option->precision)
	{
		//dprintf(2, "HELLO 1\n"); //DEBUG
		if ((long)len > option->precision)
		{
			//dprintf(2, "HELLO 2\n"); //DEBUG
			if (option->width > ((long)len + 2))
				option->width = cpy_option.width - ((long)len + 2);
			else
				option->width = 0;
			option->precision = 0;
		}
		else if ((long)len < option->precision)
		{
			//dprintf(2, "HELLO 3\n"); //DEBUG
			option->width = cpy_option.width - (option->precision + 2);
			option->precision = cpy_option.precision - (long)len;
		}
	//dprintf(2, "option->precision2 = %lu, option->width = %lu, len = %lu\n",
			//option->precision, option->width, len); //DEBUG
	}
	else if (option->width < (long)len)
	{
		//dprintf(2, "HELLO 4\n"); //DEBUG
		option->width = 0;
		/*if (option->precision < (long)len)
		{
			dprintf(2, "HELLO 5\n"); //DEBUG*/
			option->precision = cpy_option.precision - (long)len;
		//}
		/*else*/ if (option->precision <= (long)len)
		{
			//dprintf(2, "HELLO 6\n"); //DEBUG
			option->precision = 0;
		}
		//dprintf(2, "option->precision3 = %lu, option->width3 = %lu, len3 = %lu\n",
			//option->precision, option->width, len); //DEBUG
	}
	//dprintf(2, "number2 = %s\n", number); //DEBUG
	//dprintf(2, "option->precision5 = %lu, option->width5 = %lu, len5 = %lu\n",
			//option->precision, option->width, len); //DEBUG
	if (option->precision == 0 && p == 0 && len == 1 && option->flag & MOD_DOT)
	{	
		option->width = cpy_option.width - 2;
		if (cpy_option.width != 0)
		{
			new_str = (char *)malloc(sizeof(char) * (cpy_option.width + 2));
			if (new_str == NULL)
			{
				option->len_conversion = 0;
				return (NULL);
			}
			new_str = strjoin_p_conversion(new_str, &cpy_option, option, "\0");
			return (new_str);
		}
		new_str = (char *)malloc(sizeof(char) * (2 + 1));
		if (new_str == NULL)
		{
			option->len_conversion = 0;
			return (NULL);
		}
		new_str[0] = '0';
		new_str[1] = 'x';
		new_str[2] = '\0';
		option->len_conversion = 2;
		return (new_str);
	}	
	else
		new_str = (char *)malloc(sizeof(char) * (option->precision +
												option->width + 2 + 1));
	if (new_str != NULL)
		new_str = strjoin_p_conversion(new_str, &cpy_option, option,
													number);
	/*if (option->precision < option->width)
		option->width = option->width - (ft_strlen(number) + 2);
	else
		option->width = 0;
	if (option->precision > (long)ft_strlen(number))
		option->precision -= ft_strlen(number);
	else
		option->precision = 0;
	new_str = (char *)malloc(sizeof(char) * (2 + option->precision +
				option->width + 1));
	if (new_str != NULL)
		new_str = strjoin_p_conversion(new_str, &cpy_option, option, number);*/
	free(number);
	return (new_str);
}
