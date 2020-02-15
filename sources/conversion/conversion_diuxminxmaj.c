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

	x = (unsigned int)x;
	cpy_option.flag = option->flag;
	cpy_option.precision = option->precision;
	cpy_option.width = option->width;
	number = ft_ultoa_base(x, 16);
	dprintf(2, "option->precision = %ld, option->width = %ld\n", option->precision, option->width); //DEBUG
	dprintf(2, "number = %s, len_number = %lu\n", number, ft_strlen(number)); //DEBUG
	if (option->flag & MOD_DOT && option->width != 0)
	{
		dprintf(2, "HEY\n"); //debug
		option->width = cpy_option.width - option->precision;
		if (option->flag & MOD_MINUS && (option->flag & MOD_DOT) == FALSE)
			option->precision = cpy_option.width - option->width - ft_strlen(number);
		if (ft_strlen(number) == 1)
		{
			dprintf(2, "ca passe la ?"); //DEBUG
			option->precision = option->width + ft_strlen(number);
		}
		else
			option->precision = option->width;
	}
	if (option->precision < option->width && option->width >
			(long)ft_strlen(number) && (option->flag & MOD_DOT) == FALSE)
	{
		dprintf(2, "HEY1\n"); //debug
		option->width = option->width - ft_strlen(number);
		if (option->precision > (long)ft_strlen(number))
		{
			dprintf(2, "HEY2\n"); //debug
			option->precision = option->width - (long)ft_strlen(number);
		}
	}
	if ((cpy_option.width > option->precision) &&
				(option->width > option->precision) && 
				(option->flag & MOD_DOT))
	{
		option->width = ft_strlen(number);
		dprintf(2, "HEY3\n"); //debug
	}
	if (cpy_option.width < (long)ft_strlen(number))
	{
		dprintf(2, "HEY4\n"); //debug
		option->width = 0;
	}
	if (option->precision > option->width && option->flag & MOD_DOT)
	{
		if (option->precision < (long)ft_strlen(number))
		{
			option->precision = 0;
			dprintf(2, "HEY5\n"); //debug
		}
		/*else
		{
			dprintf(2, "HEY6\n"); //debug
			option->precision = option->precision - ft_strlen(number);
		}*/
	}
	dprintf(2, "option->precision1 = %ld, option->width1 = %ld\n", option->precision, option->width); //DEBUG
	new_str = (char *)malloc(sizeof(char) * (option->precision +
												option->width + 1));
	if (new_str != NULL)
	{
		new_str = strjoin_xminxmaj_conversion(new_str, &cpy_option, option,
												number);
		dprintf(2, "HELLO\n"); //debug
	}
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
