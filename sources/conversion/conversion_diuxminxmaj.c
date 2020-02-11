/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_diuxminxmaj.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:08 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/10 20:54:11 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //DEBUG

char	*xminxmaj_conv(unsigned long x, t_option *option)
{
	char		*new_str;
	char		*number;
	t_option	cpy_option;

	x = (unsigned int)x;
	cpy_option.flag = option->flag;
	cpy_option.precision = option->precision;
	cpy_option.width = option->width;
	number = ft_ultoa_base(x, 16);
	if (option->precision < option->width)
		option->width = option->width - (option->precision);
	else
		option->width = 0;
	if (option->precision > ft_strlen(number))
		option->precision -= ft_strlen(number);
	else
		option->precision = 0;
	new_str = (char *)malloc(sizeof(char) * (option->precision +
												option->width + 1));
	if (new_str != NULL)
		new_str = strjoin_xminxmaj_conversion(new_str, &cpy_option, option,
												number);
	free(number);
	return (new_str);
}

char	*di_conv(long d, t_option *option)
{
	char	*new_str_negt;
	char	*new_str;
	char	*number;
	char	*number_negt;
	int		len_number;

	d = (int)d;
	if (d < 0)
	{
		number_negt = ft_ltoa_base_post(d, 10);
		len_number = ft_strlen(number_negt);
		if (option->width > 0)
			option->width--;
		new_str = hub_strjoin_width_precision(number_negt, option,
												len_number);
		new_str_negt = add_minus(new_str);
		free(new_str);
	}
	else
	{
		number = ft_ltoa_base(d, 10);
		len_number = ft_strlen(number);
		new_str = hub_strjoin_width_precision(number, option, len_number);
	}
	option->len_conversion = ft_strlen(d < 0 ? new_str_negt : new_str);
	free(d < 0 ? number_negt : number);
	return (d < 0 ? new_str_negt : new_str);
}

char	*u_conv(unsigned long u, t_option *option)
{
	char	*new_str;
	char	*number;
	int		len_number;

	number = ft_ultoa_base(u, 10);
	len_number = ft_strlen(number);
	new_str = hub_strjoin_width_precision(number, option, len_number);
	free(number);
	option->len_conversion = ft_strlen((const char *)new_str);
	return (new_str);	
}

char	*puxxmaj_conv(unsigned long nb, t_option *option)
{
	char	*output;

	output = NULL;
	if (option->flag & CONV_P)
		output = p_conv(nb, option);
	else if (option->flag & CONV_U)
		output = u_conv(nb, option);
	else if ((option->flag & CONV_XMIN) ||
				(option->flag & CONV_XMAJ))
		output = xminxmaj_conv(nb, option);
	return (output);
}
