/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_diuxminxmaj.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:01:57 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/01 12:01:58 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //DEBUG

int		xminxmaj_conv(int x, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_XMIN | CONV_XMAJ = %d\n", x); //DEBUG
	(void)x;
	(void)flag;
	return (len);
}

int		d_conv(int d, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_D = %d\n", d); //DEBUG
	(void)d;
	(void)flag;
	return (len);
}

int		i_conv(int i, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_I = %d\n", i); //DEBUG
	(void)i;
	(void)flag;
	return (len);
}

int		u_conv(unsigned long u, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_U = %lu\n", u); //DEBUG
	(void)u;
	(void)flag;
	return (len);
}
