/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_precision_width.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:14:22 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/15 14:58:22 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdio.h> //DEBUG

int		len_width(int width)
{
	int	i;

	i = 0;
	while (width > 0)
	{
		width = width / 10;
		i++;
	}
	return (i);
}

char	*strjoin_all(char *str, long len_str, t_option *option)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * (len_str + option->precision
				+ option->width + 1));
	if (new_str != NULL)
	{
		if (option->flag & MOD_MINUS)
		{
			//dprintf(2, "HELLO 4\n"); //DEBUG
			ft_memset(new_str, '0', option->precision);
			ft_memcpy(new_str + option->precision, str, len_str);
			ft_memset(new_str + option->precision + len_str, ' ',
						option->width);
		}
		else
		{
			//dprintf(2, "HELLO 3\n"); //DEBUG
			ft_memset(new_str, option->flag & MOD_ZERO ? '0' : ' ',
						option->width);
			ft_memset(new_str + option->width, option->flag & CONV_C ?
						' ' : '0', option->precision);
			ft_memcpy(new_str + option->width + option->precision, str,
						len_str);
		}
		new_str[len_str + option->precision + option->width] = '\0';
	}
	return (new_str);
}

char	*strjoin_width_precision(char *str, t_option *option, long len_str)
{
	if (option->precision > len_str)
		option->precision -= len_str;
	else
	{
		option->precision = 0;
		option->flag &= ~MOD_DOT;
	}
	if (option->width > option->precision + len_str)
		option->width = option->width - (option->precision + len_str);
	else
		option->width = 0;
	return (strjoin_all(str, len_str, option));
}

char	*hub_strjoin_width_precision(char *str, t_option *option,
										long len_str)
{
	char	*new_str;

	new_str = NULL;
	if (option->width == 0 && option->precision != 0 &&
			option->precision < len_str &&
			(((option->flag & CONV_D) == FALSE) ||
			((option->flag & CONV_I) == FALSE)))
	{
		new_str = (char *)malloc(sizeof(char) * (len_str + 1));
		if (new_str != NULL)
		{
			ft_memcpy(new_str, str, len_str);
			new_str[len_str] = '\0';
		}
	}
	else
		new_str = strjoin_width_precision(str, option, len_str);
	return (new_str);
}
