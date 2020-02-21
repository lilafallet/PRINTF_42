/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_p_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:38:54 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/15 20:02:59 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void	not_mod_minus_p(char **new_str, t_option *origin , t_option *option,
							char *number)
{
	size_t	i;
	long len_number;
	static char 	*str_zerox = "0X";

	len_number = (long)ft_strlen(number); 
	if (origin->precision < origin->width || (option->precision == 0 && 
				option->flag & MOD_DOT))
	{
		ft_memset(*new_str, ' ', option->width);
		memjoin_free(&(*new_str), str_zerox, option->width, 2);
		i = option->width + 2;
	}
	else
	{
		memjoin_free(&(*new_str), str_zerox, 0, 2);
		i = 2;
	}
	ft_memset(*new_str + i, '0', option->precision);
	memjoin_free(&(*new_str), number, (option->width + option->precision + 2),
					len_number);
	ft_striter(*new_str, ft_tolower);
	option->len_conversion = ft_strlen(*new_str);
}

char	*strjoin_p_conversion(char *new_str, t_option *origin, t_option *option,
		char *number)
{
	static char 	*str_zerox = "0X";
	char	*str_width;
	long	len_number;

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
		memjoin_free(&new_str, number, 2, len_number);
		str_width = (char *)malloc(sizeof(char) * (option->width + 1));
		ft_memset(str_width, ' ', option->width);
		memjoin_free(&new_str, str_width, 2 + len_number, option->width);
		new_str[2 + option->width + len_number] = '\0';
		ft_striter(new_str, ft_tolower);
		option->len_conversion = ft_strlen(new_str);
	}
	return (new_str);
}


