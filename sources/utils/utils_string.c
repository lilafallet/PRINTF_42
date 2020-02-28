/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:35:50 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/28 17:55:51 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdio.h> //DEBUG

static void	*ft_memdup(void *s, size_t len)
{
	void	*ptr;

	ptr = NULL;
	if (s != NULL)
	{
		ptr = malloc(len + 1);
		ptr = ft_memcpy(ptr, s, len);
		((char *)ptr)[len] = '\0';
	}
	return (ptr);
}

void	memjoin_free(char **dest, char *src, size_t len_dest, size_t len_src)
{
	char	*str;
	size_t	len_str;

	str = NULL;
	len_str = len_dest + len_src;
	//dprintf(2, "source = %s\n", src); //DEBUG
	//dprintf(2, "len_dest = %lu\n", len_dest); //DEBUG
	//dprintf(2, "len_src = %lu\n", len_src); //DEBUG
	//dprintf(2, "len_str = %lu\n", len_str); //DEBUG
	if (*dest != NULL && src != NULL)
	{
		str = (char *)malloc(sizeof(char) * (len_str + 1));
		if (str != NULL)
		{
			//dprintf(2, "CA PASSE OU ?\n"); //DEBUG
			ft_memcpy(str, *dest, len_dest);
			if (ft_strncmp(src, "0X", 2) == SUCCESS)
			{
				//dprintf(2, "RENTRE PLEAAAAAASE\n"); //DEBUG
				len_dest = 0;
			}
			ft_memcpy(str + len_dest, src, len_src);
			str[len_str] = '\0';
			//dprintf(2, "nouvelle str = %s\n", str); //DEBUG
		}
	}
	else if (*dest == NULL)
	{
		str = ft_memdup(src, len_str);
		//dprintf(2, "CA PASSE ICI ?\n"); //DEBUG
	}
	else if (src == NULL)
	{
		str = ft_memdup(*dest, len_str);
		//dprintf(2, "CA PASSE LA ?\n"); //DEBUG
	}
	free(*dest);
	*dest = str;
}

void	memjoin_free_option(char **dest, char *src, t_option *option)
{
	char	*str;
	size_t	len_str;

	str = NULL;
	len_str = option->len_dest + option->len_src;
	//dprintf(2, "source = %s\n", src); //DEBUG
	//dprintf(2, "len_dest = %lu\n", option->len_dest); //DEBUG
	//dprintf(2, "len_src = %lu\n", option->len_src); //DEBUG
	//dprintf(2, "len_str = %lu\n", len_str); //DEBUG
	if (*dest != NULL && src != NULL)
	{
		str = (char *)malloc(sizeof(char) * (len_str + 1));
		if (str != NULL)
		{
			//dprintf(2, "CA PASSE OU ?\n"); //DEBUG
			ft_memcpy(str, *dest, option->len_dest);
			if (ft_strncmp(src, "0X", 2) == SUCCESS)
			{
				//dprintf(2, "RENTRE PLEAAAAAASE\n"); //DEBUG
				option->len_dest = option->width;
			}
			ft_memcpy(str + option->len_dest, src, option->len_src);
			str[len_str] = '\0';
			//dprintf(2, "nouvelle str = %s\n", str); //DEBUG
		}
	}
	else if (*dest == NULL)
	{
		str = ft_memdup(src, len_str);
		//dprintf(2, "CA PASSE ICI ?\n"); //DEBUG
	}
	else if (src == NULL)
	{
		str = ft_memdup(*dest, len_str);
		//dprintf(2, "CA PASSE LA ?\n"); //DEBUG
	}
	free(*dest);
	*dest = str;
}

void	fill_buffer(t_state_machine *machine, char c)
{
	if (machine->len + 1 >= BUFFER_SIZE)
	{
		memjoin_free(&machine->out, machine->buffer, machine->len_out,
						machine->len);
		machine->len_out += machine->len;
		machine->len = 0;
		ft_bzero(machine->buffer, BUFFER_SIZE);
	}
	else
	{
		machine->buffer[machine->len] = c;
		machine->len++;
	}
}

int		is_flag(char c)
{
	int	i;

	i = 0;
	while (STR_MOD[i] != '\0')
	{
		if (c == STR_MOD[i])
			return (i);
		i++;
	}
	return (-1);
}

int		is_conversion(char c)
{
	int	i;

	i = 0;
	while (STR_CONV[i] != '\0')
	{
		if (c == STR_CONV[i])
			return (i);
		i++;
	}
	return (-1);
}
