/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_p_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:38:54 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/28 18:46:03 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	memjoin_free_option(char **dest, char *src, t_option *option)
{
	char	*str;
	size_t	len_str;

	str = NULL;
	len_str = option->len_dest + option->len_src;
	if (*dest != NULL && src != NULL)
	{
		str = (char *)malloc(sizeof(char) * (len_str + 1));
		if (str != NULL)
		{
			ft_memcpy(str, *dest, option->len_dest);
			if (ft_strncmp(src, "0X", 2) == SUCCESS)
				option->len_dest = (size_t)option->width;
			ft_memcpy(str + option->len_dest, src, option->len_src);
			str[len_str] = '\0';
		}
	}
	else if (*dest == NULL)
		str = ft_memdup(src, len_str);
	else if (src == NULL)
		str = ft_memdup(*dest, len_str);
	free(*dest);
	*dest = str;
}

void	initialisation_not_min(long *len_number, t_option *option, char *number)
{
	*len_number = (long)ft_strlen(number);
	option->len_dest = (size_t)option->width + (size_t)option->precision +
							(size_t)*len_number;
	option->len_src = 2;
}

static void	not_mod_minus_p(char **new_str, t_option *origin, t_option *option,
		char *number)
{
	size_t			i;
	long			len_number;
	static char		*str_zerox = "0X";

	initialisation_not_min(&len_number, option, number);
	if (origin->precision < origin->width || (option->precision == 0 &&
				option->flag & MOD_DOT))
	{
		ft_memset(*new_str, ' ', (size_t)option->width);
		memjoin_free_option(&(*new_str), str_zerox, option);
		i = (size_t)option->width + option->len_src;
	}
	else
	{
		memjoin_free_option(&(*new_str), str_zerox, option);
		i = 2;
	}
	ft_memset(*new_str + i, '0', (size_t)option->precision);
	memjoin_free(new_str, number, ((size_t)option->width +
					(size_t)option->precision + option->len_src),
					(size_t)len_number);
	ft_striter(*new_str, ft_tolower);
	option->len_conversion = ft_strlen(*new_str);
}

void	new_p_width(t_option *option, t_option *origin, long len_number)
{
	if (origin->width - 1 > len_number && origin->width >
			(origin->width - (len_number + 2)))
		option->width = origin->width - (len_number + 2);
	else
		option->width = 0;
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
		new_p_width(option, origin, len_number);
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
