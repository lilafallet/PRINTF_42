/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_precision_width.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:14:22 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/05 14:14:24 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

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

void	strjoin_all(char **new_str, char *str, size_t len_str, size_t nb_space)
{
	size_t	i;
	size_t	index;

	i = 0;
	index = 0;
	if (nb_space != 0)
	{
		while (i < nb_space)
		{
			(*new_str)[index++] = ' ';
			i++;
		}
	}
	i = 0;
	while (i < len_str)
		(*new_str)[index++] = str[i++];
	(*new_str)[index] = '\0';
}

size_t	check_nb_space(size_t width, size_t precision, size_t len_str)
{
	if (width < len_str)
		return (0);
	return ((width != 0 && precision == 0) ? width - len_str :
				width - precision);
}

char	*strjoin_width_precision(char *str, int width, size_t precision)
{
	char	*new_str;
	size_t	nb_space;
	size_t	len_str;
	size_t	len_new_str;

	new_str = NULL;
	nb_space = 0;
	len_str = ft_strlen(str);
	if (precision != 0)
		len_str = precision;
	if (width != 0)
		nb_space = check_nb_space(width, precision, len_str);
	len_new_str = len_str + nb_space;
	new_str = (char *)malloc(sizeof(char) * (len_new_str + 1));
	if (new_str != NULL)
		strjoin_all(&new_str, str, len_str, nb_space);
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
	new_str = strjoin_width_precision(str, option->width, option->precision);
	return (new_str);
}
