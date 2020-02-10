/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:28:15 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/10 18:46:03 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libftprintf.h"
#include <stdlib.h>
#include <stdio.h>

static void	ul_fill_str(char *str, long nb, size_t *size, int base)
{
	if (nb < (long)base)
	{
		if (nb < 10)
			str[*size] = (char)nb + '0';
		else
			str[*size] = (char)nb % 10 + 'A';
		(*size)++;
	}
	else
	{
		ul_fill_str(str, nb / base, size, base);
		ul_fill_str(str, nb % base, size, base);
	}
}

char		*ft_ltoa_base(long nb, int base)
{
	size_t				size;
	long		tmp;
	char				*str;

	if (base < 2 || base > 16)
		return (NULL);
	size = 0;
	if (nb == 0)
		size++;
	tmp = nb;
	while (tmp != 0)
	{
		tmp /= base;
		size++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	size = 0;
	ul_fill_str(str, nb, &size, base);
	str[size] = '\0';
	return (str);
}
