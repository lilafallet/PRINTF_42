/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:26:44 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/01 12:12:39 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdio.h> //DEBUG

void	*ft_memdup(void *s, int len)
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

void	memjoin_free(char **dest, char *src, int len_dest, int len_src)
{
	char	*str;
	int		len_str;

	str = NULL;
	len_str = len_dest + len_src;
	if (*dest != NULL && src != NULL)
	{
		str = (char *)malloc(sizeof(char) * (len_str + 1));
		if (str != NULL)
		{
			ft_memcpy(str, *dest, len_dest);
			ft_memcpy(str + len_dest, src, len_src);
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

void	fill_buffer(t_state_machine *machine, char c)
{
	if (machine->len + 1 >= BUFFER_SIZE)
	{
		//printf("MACHINE->OUT = %s\n", machine->out); //DEBUG
		//printf("MACHINE->BUFFER = %s\n", machine->buffer); //DEBUG
		memjoin_free(&machine->out, machine->buffer, machine->len_out,
						machine->len);
		//printf("MACHINE->OUT = %s\n", machine->out); //DEBUG
		//printf("MACHINE->BUFFER = %s\n\n", machine->buffer); //DEBUG
		machine->len_out += machine->len;
		machine->len = 0;
		ft_bzero(machine->buffer, BUFFER_SIZE);
		//printf("MACHINE->LEN_OUT = %d\n", machine->len_out); //DEBUG
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
	while (STR_FLAG[i] != '\0')
	{
		if (c == STR_FLAG[i])
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
