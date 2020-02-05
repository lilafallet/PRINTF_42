/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_diuxminxmaj.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:08 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/05 14:13:09 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*xminxmaj_conv(int x, int flag)
{
	char	*new_str;

	new_str = NULL;
	(void)x;
	(void)flag;
	return (new_str);
}

char	*d_conv(int d, int flag)
{
	char	*new_str;

	new_str = NULL;
	(void)d;
	(void)flag;
	return (new_str);
}

char	*i_conv(int i, int flag)
{
	char	*new_str;

	new_str = NULL;
	(void)i;
	(void)flag;
	return (new_str);
}

char	*u_conv(unsigned long u, int flag)
{
	char	*new_str;

	new_str = NULL;
	(void)u;
	(void)flag;
	return (new_str);
}

char	*diuxminxmaj_conv(long diux, t_option *option)
{
	char	*output;

	output = NULL;
	if (option->flag & CONV_D)
		output = d_conv(diux, option->flag);
	else if (option->flag & CONV_I)
		output = i_conv(diux, option->flag);
	else if (option->flag & CONV_U)
		output = u_conv(diux, option->flag);
	else if ((option->flag & CONV_XMIN) ||
				(option->flag & CONV_XMAJ))
		output = xminxmaj_conv(diux, option->flag);
	(void)diux;
	return (output);
}
