/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_di.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:53:11 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/10 18:26:17 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //DEBUG

size_t	first_number_negt(char c, char **str)
{
	if (ft_isdigit(c) == TRUE)
		(*str)[0] = '-';
	return ((*str)[0] == '-' ? TRUE : FALSE);
}

char	*add_minus(char *new_str)
{
	size_t	i;
	size_t	j;
	char	*str_minus;
	int		negt;

	str_minus = (char *)malloc(sizeof(char) * (ft_strlen(new_str) + 1));
	j = 0;
	i = first_number_negt(new_str[0], &str_minus);
	negt = (i == TRUE ? TRUE : FALSE);
	while (i <= ft_strlen(new_str))
	{
		if ((negt == 0 && ft_isdigit(new_str[j + 1]) == TRUE))
		{
			str_minus[i] = '-';
			negt++;
		}
		else
			str_minus[i] = new_str[j];
		i++;
		j++;
	}
	return (str_minus);
}
