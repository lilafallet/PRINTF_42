/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_precision_width.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:14:22 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/06 13:15:58 by lfallet          ###   ########.fr       */
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

char	*strjoin_all(char *str, size_t len_str, size_t nb_space,
						t_option *option)
{
	char	*new_str;
	char	character;

	new_str = (char *)malloc(sizeof(char) * (len_str + nb_space + 1));
	character = (option->flag & MOD_ZERO) ? '0' : ' ';
	if (new_str != NULL)
	{
		if (option->flag & MOD_MINUS)
		{
			ft_memcpy(new_str, str, len_str);
			ft_memset(new_str + len_str, character, nb_space);
		}
		else
		{
			ft_memset(new_str, character, nb_space);
			ft_memcpy(new_str + nb_space, str, len_str);
		}
		new_str[len_str + nb_space] = '\0';
	}
	return (new_str);
}

size_t	check_nb_space(size_t width, size_t precision, size_t len_str)
{
	if (width < len_str)
		return (0);
	return ((width != 0 && precision == 0) ? width - len_str :
				width - precision);
}

char	*strjoin_width_precision(char *str, t_option *option)
{
	char	*new_str;
	size_t	nb_space;
	size_t	len_str;

	new_str = NULL;
	nb_space = 0;
	len_str = ft_strlen(str);
	if (len_str == 1)
	{
		len_str = 1;
		nb_space = option->width - 1;
	}
	if (option->precision != 0 && len_str != 1)
		len_str = option->precision;
	if (option->width != 0 && nb_space != option->width - 1)
		nb_space = check_nb_space(option->width, option->precision,
									len_str);
	new_str = strjoin_all(str, len_str, nb_space, option);
	return (new_str);
}

char	*hub_strjoin_width_precision(char *str, t_option *option)
{
	char	*new_str;
	size_t	len_str;

	new_str = NULL;
	len_str = ft_strlen(str);
	if ((option->width == 0 && option->precision != 0) &&
			len_str < option->precision)
		return (str);
	new_str = strjoin_width_precision(str, option);
	return (new_str);
}
