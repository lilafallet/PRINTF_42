/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_csp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:01:50 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/02 17:23:45 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //PRINTF

int		c_conv(int c, t_option *option, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_C = %d\n", c); //DEBUG
	(void)c;
	(void)option;
	return (len);
}

int		s_conv(char *str, t_option *option, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_S = %s\n", str); //DEBUG
	if (option->width != 0 || option->precision != 0) //C'EST ICI ?//
		*output = hub_strjoin_width_precision(str, option->width,
												option->precision);
	(void)str;
	(void)flag;
printf("OUTPUT: %s\n", *output);
	return (len);
}

int		p_conv(char *str, t_option *option, char **output)
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
