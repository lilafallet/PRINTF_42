/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:26:44 by lfallet           #+#    #+#             */
/*   Updated: 2020/01/29 12:20:10 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	fill_buffer(t_state_machine *machine, char c)
{
		if (machine->len == BUFFER_SIZE)
		{
			/// memjoin_free(machine->out, machine->buffer)
			ft_bzero(machine->buffer, BUFFER_SIZE);
			machine->len = 0;
			machine->len_out += BUFFER_SIZE;
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
