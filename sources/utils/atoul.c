/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoul.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:00:47 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/03 15:06:08 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned long	atoul(const char *str)
{
	size_t			i;
	unsigned long	result;

	result = 0;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (unsigned long)(str[i] - 48);
		i++;
	}
	return (result);
}
