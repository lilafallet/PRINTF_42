/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_csp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:01:50 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/01 19:16:05 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //PRINTF

int		c_conv(int c, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_C = %d\n", c); //DEBUG
	(void)c;
	(void)flag;
	return (len);
}

int		s_conv(char *str, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_S = %s\n", s); //DEBUG
	if (machine->width != 0 || machine->precision != 0) //C'EST ICI ?//
		*output = hub_strjoin_width_precision(machine->buffer, str,
												machine->width,
												machine->precision);
	(void)str;
	(void)flag;
	return (len);
}

int		p_conv(void *p, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_P = %p\n", p); //DEBUG
	(void)p;
	(void)flag;
	return (len);
}

int		diuxminxmaj_conv(long diux, t_state_machine *machine, char **output)
{
	int		len;

	len = 0;
	if (machine->flag & CONV_D)
		len = d_conv(diux, machine->flag, output);
	else if (machine->flag & CONV_I)
		len = i_conv(diux, machine->flag, output);
	else if (machine->flag & CONV_U)
		len = u_conv(diux, machine->flag, output);
	else if ((machine->flag & CONV_XMIN) || (machine->flag & CONV_XMAJ))
		len = xminxmaj_conv(diux, machine->flag, output);
	(void)diux;
	return (len);
}
