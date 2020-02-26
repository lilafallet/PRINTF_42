/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_pux.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:08 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/26 12:17:09 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //DEBUG

char	*xminxmaj_conv(unsigned long x, t_option *option)
{
	char		*new_str;
	char		*number;
	t_option	cpy_option;
	long		len;
	char		*str_zero;

	x = (unsigned int)x;
	dprintf(2, "precision = %lu\n", option->precision); //DEBUG
	dprintf(2, "width = %lu\n", option->width); //DEBUG
	cpy_option.width = option->width;
	cpy_option.precision = option->precision;
	number = ft_ultoa_base(x, 16);
	len = (long)ft_strlen(number);
	new_str = NULL;
	str_zero = NULL;
	get_width_x(option, len);
	get_precision_x(&cpy_option, option, len);
	dprintf(2, "precision after = %lu\n", option->precision); //DEBUG
	dprintf(2, "width after = %lu\n", option->width); //DEBUG
	if (((cpy_option.precision == 0 && option->width == 0) || (cpy_option.precision == 0 && option->width == len) || (cpy_option.precision == 0 && option->width > cpy_option.precision)) && x == 0 && len == 1 && option->flag & MOD_DOT)
	{
		dprintf(2, "CA RENTRE LA ?\n"); //DEBUG --> PAS DE 0
		str_zero = x_is_zero(option, &cpy_option); 
	}
	else
		new_str = (char *)malloc(sizeof(char) * (option->precision +
					option->width + 1));
	if (new_str != NULL)
	{
		dprintf(2, "CA RENTRE ICI ?\n"); //DEBUG
		new_str = strjoin_xminxmaj_conversion(new_str, &cpy_option, option,
				number);
	}
	free(number);
	return (str_zero == NULL ? new_str : str_zero);
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

char	*u_conv(unsigned long u, t_option *option)
{
	char	*new_str;
	char	*number;
	size_t	len;

	number = NULL;
	len = 0;
	u = (unsigned int)u;
	if (u > 0 || (u == 0 && ((option->flag & MOD_DOT) == FALSE)))
	{
		number = ft_ultoa_base(u, 10);
		len = ft_strlen(number);
	}
	new_str = hub_strjoin_width_precision(number, option, len);
	free(number);
	option->len_conversion = ft_strlen(new_str);
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