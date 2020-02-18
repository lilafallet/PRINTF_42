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

	if (origin->precision < origin->width)
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

	i = 0;
	dprintf(2, "origin->precision = %ld, origin->width = %ld\n", origin->precision, origin->width); //DEBUG
	dprintf(2, "option->precision = %ld, option->width = %ld\n", option->precision, option->width); //DEBUG
	if ((option->flag & MOD_MINUS) == FALSE)
	{
		if (origin->precision < origin->width ||
				option->precision == option->width)
		{	
			dprintf(2, "est ce que ca passe ?\n"); //DEBUG
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
		dprintf(2, "new_str = [%s]\n", new_str); //DEBUG
		memjoin_free(&new_str, number, (option->width + option->precision),
						ft_strlen(number));
		dprintf(2, "new_str1 = [%s]\n", new_str); //DEBUG
	}
	else
	{
		ft_memset(new_str, '0', option->precision);
		ft_memcpy(new_str + option->precision, number, ft_strlen(number));
		ft_memset(new_str + option->precision + ft_strlen(number), ' ',
					option->width);
	}
	new_str[option->precision + option->width + ft_strlen(number)] = '\0';
	if (new_str != NULL)
	{
		if (option->flag & CONV_XMIN)
			ft_striter(new_str, ft_tolower);
		dprintf(2, "new_str2 = [%s]\n", new_str); //DEBUG
		if (ft_strlen(new_str) != 0)
			option->len_conversion = ft_strlen(new_str);
		else
			option->len_conversion = 1;
		dprintf(2, "len_new_str = %d\n", option->len_conversion); //DEBUG
	}
	return (new_str);
}
