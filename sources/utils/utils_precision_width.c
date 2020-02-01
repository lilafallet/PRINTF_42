/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_precision_width.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:04:23 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/01 12:06:00 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"
#include "libft.h"
#include <stdio.h> //DEBUG

int				len_width(int width);
{
	int	i;

	i = 0;
	while (width > 0)
	{
		width = width / 10;
		i++;
	}
	return (i)
}
