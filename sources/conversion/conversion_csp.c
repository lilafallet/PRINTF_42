/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_csp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:12:54 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/08 16:49:06 by lfallet          ###   ########.fr       */
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
	new_str = hub_strjoin_width_precision(convert_str, option, 1);
	option->len_conversion = ft_strlen((const char *)new_str);
	return (new_str);
}

char	*s_conv(char *str, t_option *option)
{
	char	*new_str;
	char	*str_out;

	if (option->flag & MOD_DOT)
		str_out = ft_strndup(str, option->precision);
	else
		str_out = ft_strdup(str);
	option->precision = 0;
	option->flag &= ~MOD_DOT;
	new_str = hub_strjoin_width_precision(str, option, ft_strlen(str_out));
	free(str_out);
	option->len_conversion = ft_strlen(new_str);
	return (new_str);
}

char	*p_conv(unsigned long p, t_option *option)
{
	char	*new_str;
	char	*number;

	number = ft_ultoa_base(p, 16);
	if (option->precision > ft_strlen(number)) //ATTENTION A TESTER SUR MAC
		option->precision -= ft_strlen(number);
	else
		option->precision = 0;
	new_str = (char *)malloc(sizeof(char) * (2 + option->precision + 1));
	if (new_str != NULL)
	{
		new_str[0] = '0';
		new_str[1] = 'X';
		ft_memset(new_str + 2, '0', option->precision);
		new_str[option->precision + 2] = '\0';
		option->precision = 0;
		option->flag &= ~MOD_DOT;
		memjoin_free(&new_str, number, 2, ft_strlen(number));
		option->len_conversion = ft_strlen(new_str);
	}
	free(number);
	return (new_str);
}
