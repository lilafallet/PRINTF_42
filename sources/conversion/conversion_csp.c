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
	new_str = hub_strjoin_width_precision(str, option, len);
	option->len_conversion = ft_strlen(new_str);
	free(str_out);
	return (new_str);
}

char	*p_is_zero(t_option *option, t_option *cpy_option)
{
	char	*str_pzero;
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

char	*p_conv(unsigned long p, t_option *option)
{
	char		*new_str;
	char		*number;
	t_option	cpy_option;
	long		len;

	cpy_option.flag = option->flag;
	cpy_option.precision = option->precision;
	cpy_option.width = option->width;
	number = ft_ultoa_base(p, 16);
	len = (long)ft_strlen(number);
	get_p_width(option, len);
	option->precision = option->precision <= len ? 0 : option->precision - len;
	if (option->precision == 0 && p == 0 && len == 1 && option->flag & MOD_DOT)
	{
		free(number);
		new_str = p_is_zero(option, &cpy_option);
		return (new_str);
	}
	new_str = (char *)malloc(sizeof(char) * (option->precision +
				option->width + 2 + 1));
	if (new_str != NULL)
		new_str = strjoin_p_conversion(new_str, &cpy_option, option, number);
	free(number);
	return (new_str);
}
