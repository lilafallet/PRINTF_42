/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_di.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:53:11 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/12 14:11:20 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*add_minus(char *new_str)
{
	size_t	i;
	char	*str_minus;

	str_minus = (char *)malloc(sizeof(char) * (ft_strlen(new_str) + 2));
	if (str_minus == NULL)
		return (NULL);
	i = 0;
	while (ft_isdigit(new_str[i]) == FALSE)
	{
		str_minus[i] = new_str[i];
		i++;
	}
	str_minus[i] = '-';
	while (new_str[i] != '\0')
	{
		str_minus[i + 1] = new_str[i];
		i++;
	}
	str_minus[i + 1] = '\0';
	return (str_minus);
}
