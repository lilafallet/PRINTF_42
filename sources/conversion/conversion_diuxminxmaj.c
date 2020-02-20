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
	len = ft_strlen(number);
	if (option->width > (long)len && option->width > option->precision)
	{
		if ((long)len > option->precision)
		{
			option->width = cpy_option.width - (long)len;
			option->precision = 0;
		}
		else if ((long)len < option->precision)
		{
			option->width = cpy_option.width - option->precision;
			option->precision = cpy_option.precision - (long)len;
		}
	}
	else if (option->width < (long)len)
	{
		option->width = 0;
		option->precision = cpy_option.precision - (long)len;
		if (option->precision <= (long)len)
			option->precision = 0;
	}
	if (option->precision == 0 && x == 0 && len == 1 && option->flag & MOD_DOT)
	{	
		if (cpy_option.width != 0)
		{
			new_str = (char *)malloc(sizeof(char) * (cpy_option.width + 1));
			if (new_str == NULL)
			{
				option->len_conversion = 0;
				return (NULL);
			}
		}
		option->len_conversion = cpy_option.width != 0 ? cpy_option.width : 0;		
		return (cpy_option.width != 0 ? ft_memset(new_str, ' ', cpy_option.width) :
				'\0');
	}
	else
		new_str = (char *)malloc(sizeof(char) * (option->precision +
					option->width + 1));
	if (new_str != NULL)
		new_str = strjoin_xminxmaj_conversion(new_str, &cpy_option, option,
				number);
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

char	*d_inferior_zero(long d, t_option *option)
{
	char	*new_str;
	char	*number;
	char	*tmp_number;
	size_t	len;

	number = ft_ltoa_base_post(d, 10);
	if (option->width > 0)
		option->width--;
	len = ft_strlen(number);
	new_str = hub_strjoin_width_precision(number, option, len);
	free(number);
	tmp_number = new_str;
	new_str = add_minus(new_str);
	free(tmp_number);
	return (new_str);
}

char	*d_superior_zero(t_option *option, long d)
{
	char	*new_str;
	char	*number;
	size_t	len;

	number = NULL;
	len = 0;
	if (option->precision >= option->width)
	{
		option->flag &= ~MOD_MINUS;
		option->flag |= MOD_ZERO;
	}
	if (d > 0 || (d == 0 && ((option->flag & MOD_DOT) == FALSE)))
	{
		number = ft_ltoa_base(d, 10);
		len = ft_strlen(number);
	}
	new_str = hub_strjoin_width_precision(number, option, len);
	free(number);
	return (new_str);
}

char	*di_conv(long d, t_option *option)
{
	char	*str_superior;
	char	*str_inferior;
	size_t	len_superior;
	size_t	len_inferior;

	len_superior = 0;
	len_inferior = 0;
	d = (int)d;
	if (d >= 0)
	{
		str_superior = d_superior_zero(option, d);
		len_superior = ft_strlen(str_superior);
		option->len_conversion = len_superior;
	}
	if (d < 0)
	{
		str_inferior = d_inferior_zero(d, option);
		len_inferior = ft_strlen(str_inferior);
		option->len_conversion = len_inferior;
	}
	return (d < 0 ? str_inferior : str_superior);
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
