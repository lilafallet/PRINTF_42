/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_precision_width.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:04:23 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/01 18:59:09 by lfallet          ###   ########.fr       */
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

void	strjoin_all(char **new_str, char *buffer, char *str, size_t len_str,
						size_t nb_space)
{
	size_t	i;
	size_t	index;

	i = 0;
	index = 0;
	while (i < ft_strlen(buffer))
		(*new_str)[index++] = buffer[i++];
	i = 0;
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
	return ((width != 0 && precision == 0) ? width - len_str :
				width - precision);
}

char	*strjoin_width_precision(char *buffer, char *str, int width,
									size_t precision)
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
	if ((width != 0 && precision == 0) || (width != 0 && precision != 0))
		nb_space = check_nb_space(width, precision, len_str);
	len_new_str = ft_strlen(buffer) + len_str + nb_space;
	new_str = (char *)malloc(sizeof(char) * (len_new_str + 1));
	if (new_str != NULL)
		strjoin_all(&new_str, buffer, str, len_str, nb_space);
	return (new_str);
}

char	*hub_strjoin_width_precision(char *buffer, char *str, int width,
										size_t precision)
{
	char	*new_str;
	size_t	len_buffer;
	size_t	len_str;

	new_str = NULL;
	len_str = ft_strlen(str);
	len_buffer = ft_strlen(buffer);
	if ((width == 0 && precision != 0) && len_str < precision)
	{
		new_str = ft_strjoin(buffer, str);
		return (new_str);
	}
	new_str = strjoin_width_precision(buffer, str, width, precision);
	return (new_str);
}
