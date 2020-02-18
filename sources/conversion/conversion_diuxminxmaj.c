/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_diuxminxmaj.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:08 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/15 20:30:20 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //DEBUG

char	*xminxmaj_conv(unsigned long x, t_option *option)
{
	char		*new_str;
	char		*number;
	t_option	cpy_option;
	size_t		len;

	x = (unsigned int)x;
	cpy_option.flag = option->flag;
	cpy_option.precision = option->precision;
	cpy_option.width = option->width;
	number = ft_ultoa_base(x, 16);
	dprintf(2, "number1 = %s\n", number); //DEBUG
	len = ft_strlen(number);
	dprintf(2, "option->precision1 = %lu, option->width1 = %lu, len1 = %lu\n",
			option->precision, option->width, len); //DEBUG
	if (option->width > (long)len && option->width > option->precision)
	{
		dprintf(2, "HELLO 1\n"); //DEBUG
		if ((long)len > option->precision)
		{
			dprintf(2, "HELLO 2\n"); //DEBUG
			option->width = cpy_option.width - (long)len;
			option->precision = 0;
		}
		else if ((long)len < option->precision)
		{
			dprintf(2, "HELLO 3\n"); //DEBUG
			option->width = cpy_option.width - option->precision;
			option->precision = cpy_option.precision - (long)len;
		}
	dprintf(2, "option->precision2 = %lu, option->width = %lu, len = %lu\n",
			option->precision, option->width, len); //DEBUG
	}
	else if (option->width < (long)len)
	{
		dprintf(2, "HELLO 4\n"); //DEBUG
		option->width = 0;
		/*if (option->precision < (long)len)
		{
			dprintf(2, "HELLO 5\n"); //DEBUG*/
			option->precision = cpy_option.precision - (long)len;
		//}
		/*else*/ if (option->precision <= (long)len)
		{
			dprintf(2, "HELLO 6\n"); //DEBUG
			option->precision = 0;
		}
		dprintf(2, "option->precision3 = %lu, option->width3 = %lu, len3 = %lu\n",
			option->precision, option->width, len); //DEBUG
	}
	dprintf(2, "number2 = %s\n", number); //DEBUG
	dprintf(2, "option->precision5 = %lu, option->width5 = %lu, len5 = %lu\n",
			option->precision, option->width, len); //DEBUG
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
	char	*new_str;
	char	*number;
	char	*tmp_number;
	size_t	len;

	d = (int)d;
	number = NULL;
	len = 0;
	if (d < 0)
	{
		number = ft_ltoa_base_post(d, 10);
		if (option->width > 0)
			option->width--;
		len = ft_strlen(number);
	}
	else if (d == 0 && ((option->flag & MOD_DOT) == FALSE) &&
				((option->flag & MOD_ZERO) == FALSE))
	{
		number = ft_ltoa_base(d, 10);
		len = ft_strlen(number);
	}
	else if (d > 0)
	{
		number = ft_ltoa_base(d, 10);
		len = ft_strlen(number);
	}
	new_str = hub_strjoin_width_precision(number, option, len);
	free(number);
	if (d < 0)
	{
		tmp_number = new_str;
		new_str = add_minus(new_str);
		free(tmp_number);
	}
	option->len_conversion = ft_strlen(new_str);
	return (new_str);
}

char	*u_conv(unsigned long u, t_option *option)
{
	char	*new_str;
	char	*number;
	char	*tmp_number;
	size_t	len;

	number = NULL;
	len = 0;
	if (u < 0)
	{
		number = ft_ltoa_base_post(u, 10);
		if (option->width > 0)
			option->width--;
		len = ft_strlen(number);
	}
	else if (u == 0 && ((option->flag & MOD_DOT) == FALSE) &&
				((option->flag & MOD_ZERO) == FALSE))
	{
		number = ft_ltoa_base(u, 10);
		len = ft_strlen(number);
	}
	else if (u > 0)
	{
		number = ft_ltoa_base(u, 10);
		len = ft_strlen(number);
	}
	new_str = hub_strjoin_width_precision(number, option, len);
	free(number);
	if (u < 0)
	{
		tmp_number = new_str;
		new_str = add_minus(new_str);
		free(tmp_number);
	}
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
