/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_p_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:38:54 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/28 17:54:34 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static void	not_mod_minus_p(char **new_str, t_option *origin, t_option *option,
							char *number)
{
	size_t			i;
	long			len_number;
	static char		*str_zerox = "0X";

	len_number = (long)ft_strlen(number);
	option->len_dest = option->width + option->precision + len_number;
	option->len_src = 2;
	//dprintf(2,"len number == %lu\n", len_number); //DEBUG
	//dprintf(2,"precision == %lu\n", option->precision); //DEBUG
	//dprintf(2,"width == %lu\n", option->width); //DEBUG
//	dprintf(2,"origin precision == %lu\n", origin->precision); //DEBUG
	//dprintf(2,"origin width == %lu\n", origin->width); //DEBUG
	if (origin->precision < origin->width || (option->precision == 0 &&
			option->flag & MOD_DOT))
	{
		//dprintf(2, "OU LA\n"); //DEBUG
		ft_memset(*new_str, ' ', (size_t)option->width);
		memjoin_free_option(&(*new_str), str_zerox, option);
		i = (size_t)option->width + option->len_src;
	}
	else
	{
		//dprintf(2, "CA VA LA\n"); //DEBUG
		memjoin_free_option(&(*new_str), str_zerox, option);
		i = 2;
	}
	ft_memset(*new_str + i, '0', (size_t)option->precision);
	memjoin_free(new_str, number, (option->width + option->precision + option->len_src), len_number);
	ft_striter(*new_str, ft_tolower);
	option->len_conversion = ft_strlen(*new_str);
}

char	*strjoin_p_conversion(char *new_str, t_option *origin, t_option *option,
		char *number)
{
	static char		*str_zerox = "0X";
	char			*str_width;
	long			len_number;

	len_number = (long)ft_strlen(number);
	if ((option->flag & MOD_MINUS) == FALSE)
		not_mod_minus_p(&new_str, origin, option, number);
	else
	{
		memjoin_free(&new_str, str_zerox, 0, 2);
		if (origin->width - 1 > len_number && origin->width >
				(origin->width - (len_number + 2)))
			option->width = origin->width - (len_number + 2);
		else
			option->width = 0;
		memjoin_free(&new_str, number, 2, (size_t)len_number);
		str_width = (char *)malloc(sizeof(char) * (size_t)(option->width + 1));
		ft_memset(str_width, ' ', (size_t)option->width);
		memjoin_free(&new_str, str_width, 2 + (size_t)len_number,
				(size_t)option->width);
		new_str[2 + option->width + len_number] = '\0';
		ft_striter(new_str, ft_tolower);
		option->len_conversion = ft_strlen(new_str);
	}
	return (new_str);
}
