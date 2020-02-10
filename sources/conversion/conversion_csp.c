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
	size_t	i;
	size_t	tmp_precision;
	size_t	tmp_width;

	printf("pointeur : %lu\n", p); //DEBUG
	i = 0;
	tmp_precision = option->precision;
	tmp_width = option->width;
	number = ft_ultoa_base(p, 16);
	printf("number = %s\n", number); //DEBUG
	if (option->precision < option->width)
		option->width = option->width - (option->precision + 2);
	else
		option->width = 0;
	if (option->precision > ft_strlen(number)) //ATTENTION A TESTER SUR MAC
		option->precision -= ft_strlen(number);
	else
		option->precision = 0;
	printf("precision = %lu\n", option->precision); //DEBUG
	printf("width = %lu\n", option->width); //DEBUG
	new_str = (char *)malloc(sizeof(char) * (2 + option->precision +
				option->width + 1));
	if (new_str != NULL)
	{
		if (tmp_precision < tmp_width)
		{
			ft_memset(new_str, ' ', option->width);
			new_str[option->width] = '0';
			new_str[option->width + 1] = 'X';
			i = option->width + 2;
		printf("size_t i1 = %lu\n", i); //DEBUG
		}
		else
		{
			new_str[0] = '0';
			new_str[1] = 'X';
			i = 2;
		printf("size_t i2 = %lu\n", i); //DEBUG
		}
		printf("option->width = %lu\n", option->width); //DEBUG
		printf("option->precision = %lu\n", option->precision); //DEBUG
		printf("size_t i3 = %lu\n", i); //DEBUG
		ft_memset(new_str + i, '0', option->precision);
		memjoin_free(&new_str, number, (option->width + option->precision + 2),
						ft_strlen(number));
		option->len_conversion = ft_strlen(new_str);
	}
	free(number);
	return (new_str);
}
