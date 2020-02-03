/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_csp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:01:50 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/03 15:23:53 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		c_conv(int c, t_option *option, char **output)
{
	int		len;

	len = 0;
	(void)c;
	(void)option;
	return (len);
}

int		s_conv(char *str, t_option *option, char **output,
				t_state_machine *machine)
{
	int		len;

	len = 0;
	if (option->width != 0 || option->precision != 0)
		*output = hub_strjoin_width_precision(str, option);
	(void)str;
	(void)option;
	len = ft_strlen((const char *)*output);
	return (len);
}

int		p_conv(void *p, t_option *option, char **output)
{
	int		len;

	len = 0;
	(void)p;
	(void)option;
	return (len);
}

int		diuxminxmaj_conv(long diux, t_option *option, char **output)
{
	int		len;

	len = 0;
	if (option->flag & CONV_D)
		len = d_conv(diux, option->flag, output);
	else if (option->flag & CONV_I)
		len = i_conv(diux, option->flag, output);
	else if (option->flag & CONV_U)
		len = u_conv(diux, option->flag, output);
	else if ((option->flag & CONV_XMIN) ||
				(option->flag & CONV_XMAJ))
		len = xminxmaj_conv(diux, option->flag, output);
	(void)diux;
	return (len);
}
