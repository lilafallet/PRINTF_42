/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 15:16:52 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/03 15:16:53 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_bonus.h"

static void	ul_fill_str(char *str, unsigned long nb, size_t *size,
					unsigned long base)
{
	if (nb < base)
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

char		*ft_ultoa_base(unsigned long nb, unsigned long base)
{
	size_t				size;
	unsigned long		tmp;
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
