/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_pxminxmaj.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:38:54 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/15 20:02:59 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

char	*strjoin_p_conversion(char *new_str, t_option *origin, t_option *option,
		char *number)
{
	size_t	i;
	char	*str_width;

	if ((option->flag & MOD_MINUS) == FALSE)
	{
		if (origin->precision < origin->width || (option->precision == 0 && 
					option->flag & MOD_DOT))
		{
			ft_memset(new_str, ' ', option->width);
			new_str[option->width] = '0';
			new_str[option->width + 1] = 'X';
			i = option->width + 2;
		}
		else
		{
			new_str[0] = '0';
			new_str[1] = 'X';
			i = 2;
		}
		ft_memset(new_str + i, '0', option->precision);
		memjoin_free(&new_str, number, (option->width + option->precision + 2),
				ft_strlen(number));
	}
	if (option->flag & MOD_MINUS)
	{
		new_str[0] = '0';
		new_str[1] = 'X';
		if (origin->width - 1 > (long)ft_strlen(number) && origin->width >
				(origin->width - ((long)ft_strlen(number) + 2)))
		{
			option->width = origin->width - (ft_strlen(number) + 2);
		}
		else
		{
			option->width = 0;
		}
		memjoin_free(&new_str, number, 2, ft_strlen(number));
		str_width = (char *)malloc(sizeof(char) * (option->width + 1));
		if (new_str == NULL)
			return (NULL);
		ft_memset(str_width, ' ', option->width);
		memjoin_free(&new_str, str_width, 2 + ft_strlen(number), option->width);
		new_str[2 + option->width + ft_strlen(number)] =
					'\0';
	}
	if (new_str != NULL)
	{
		ft_striter(new_str, ft_tolower);
		option->len_conversion = ft_strlen(new_str);
	}
	return (new_str);
}

char	*strjoin_xminxmaj_conversion(char *new_str, t_option *origin,
		t_option *option, char *number)
{
	size_t	i;
	char	*str_width;
	i = 0;
	if ((option->flag & MOD_MINUS) == FALSE)
	{
		if (origin->precision < origin->width ||
				option->precision == option->width)
		{	
			if (option->precision == 0 && option->width ==
					(long)ft_strlen(number))
				ft_memset(new_str, ' ', option->width);
			else
				ft_memset(new_str, (option->flag & MOD_ZERO) &&
						option->precision < option->width ? '0' : ' ',
						option->width);
			i = option->width;
		}
		ft_memset(new_str + i, '0', option->precision);
		memjoin_free(&new_str, number, (option->width + option->precision),
				ft_strlen(number));
		new_str[option->precision + option->width + ft_strlen(number)] = '\0';
	}
	else
	{
		str_width = (char *)malloc(sizeof(char) * (option->width + 1));
		if (str_width == NULL)
			return (NULL);
		ft_memset(new_str, '0', option->precision);
		memjoin_free(&new_str, number, option->precision, ft_strlen(number));
		ft_memset(str_width, ' ', option->width);
		memjoin_free(&new_str, str_width, option->precision + ft_strlen(number),
						option->width);
		new_str[option->precision + option->width + ft_strlen(number)] = '\0';
	}
	if (new_str != NULL)
	{
		if (option->flag & CONV_XMIN)
			ft_striter(new_str, ft_tolower);
		if (ft_strlen(new_str) != 0)
			option->len_conversion = ft_strlen(new_str);
		else
			option->len_conversion = 1;
	}
	return (new_str);
}
