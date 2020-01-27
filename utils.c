/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:26:44 by lfallet           #+#    #+#             */
/*   Updated: 2020/01/27 15:14:35 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
