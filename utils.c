/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:26:44 by lfallet           #+#    #+#             */
/*   Updated: 2020/01/27 17:38:40 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	is_flag(char c)
{
	if (c == STR_MINUS)
		return (FLAG_MINUS);	
	if (c == STR_ZERO)
		return (FLAG_ZERO);
	if (c == STR_DOT)
		return (FLAG_DOT);
	if (c == STR_STAR)
		return (FLAG_STAR);
	else
		return (FALSE);
}

int	is_conversion(char c)
{
	int	i;

	i = 0;
	while (STR_CONV[i] != '\0')
	{
		if (c == STR_CONV[i])
			return (TRUE);
		i++;
	}
	return (FALSE);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
