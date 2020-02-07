/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:35:22 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/07 17:47:35 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libftprintf.h"
#include <stdlib.h>
#include <stdio.h>

static void	fill_str(char *str, long nb, size_t *size, int base)
{
	if (nb < 0)
	{
		if (base == 10)
		{
			str[*size] = '-';
			(*size)++;
		}
		fill_str(str, nb * -1, size, base);
	}
	else if (nb < base)
	{
		if (nb < 10)
			str[*size] = (char)nb + '0';
		else
			str[*size] = (char)nb % 10 + 'A';
		(*size)++;
	}
	else
	{
		fill_str(str, nb / base, size, base);
		fill_str(str, nb % base, size, base);
	}
}

char		*ft_itoa_base(unsigned long nb, int base)
{
	size_t				size;
	unsigned long		tmp;
	char				*str;

	size = 0;
	if (nb <= 0)
		size++;
	tmp = nb;
	while (tmp)
	{
		tmp /= base;
		size++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	size = 0;
	fill_str(str, nb, &size, base);
	str[size] = '\0';
	return (str);
}
