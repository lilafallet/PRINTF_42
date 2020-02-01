/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_precision_width.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:04:23 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/01 18:08:22 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"
#include "libft.h"
#include <stdio.h> //DEBUG

int	len_width(int width)
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

void	strjoin_all(char **new_str, char *buffer, char *str, int len_str,
						int nb_space)
{
	size_t	i;
	size_t	index;

	i = 0;
	index = 0;
	while (i < ft_strlen(buffer))
	{
		(*new_str)[index] = buffer[i];
		printf("i = %zu\n", i); //DEBUG
		printf("index = %zu\n", i); //DEBUG
		index++;
		i++;
	}
	i = 0;
	if (nb_space != 0)
	{
		while (i < nb_space)
		{
			(*new_str)[index] = '_'; //SPACE
			index++;
			i++;
		}
	}
	i = 0;
	while (i < len_str)
	{
		(*new_str)[index] = str[i];
		index++;
		i++;
	}
	(*new_str)[index] = '\0';
	printf("new_str de len_str = %s\n\n", *new_str); //DEBUG
}

char	*strjoin_width_precision(char *buffer, char *str, int width,
									int precision)
{
	char	*new_str;
	int		nb_space;
	size_t	len_str;
	size_t	len_new_str;

	new_str = NULL;
	nb_space = 0;
	len_str = ft_strlen(str);
	printf("len buffer = %zu\n", ft_strlen(buffer)); //DEBUG
	printf("len str = %zu\n", len_str); //DEBUG
	if (precision != 0)
	{
		len_str = precision;
		printf("len_str si il y a une precision = %zu\n", len_str); //DEBUG
	}
	if (width != 0 && precision == 0)
	{
		nb_space = width - len_str;
		printf("nb space si width et pas de precision = %d\n", nb_space); //DEBUG
	}
	if (width != 0 && precision != 0)
	{
		nb_space = width - precision;
		printf("nb space si width et pas de precision = %d\n", nb_space); //DEBUG
	}
	printf("nb space = %d\n", nb_space); //DEBUG
	len_new_str = ft_strlen(buffer) + len_str + nb_space;
	printf("len_new_str = %zu\n", len_new_str); //DEBUG
	new_str = (char *)malloc(sizeof(char) * (len_new_str + 1));
	if (new_str != NULL)
		strjoin_all(&new_str, buffer, str, len_str, nb_space);
	return (new_str);
}

char	*hub_strjoin_width_precision(char *buffer, char *str, int width,
										int precision)
{
	//int width = machine->width
	//int precision = machine->precision
	/*char *str = argc (dans ce cas char * mais peut changer en fonction de la
					conversion en question*/
	//char *buffer = machine->buffer

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
