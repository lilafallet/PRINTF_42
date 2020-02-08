/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_diuxminxmaj.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:08 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/08 15:22:00 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*xminxmaj_conv(long x, t_option *option)
{
	char	*new_str;

	new_str = NULL;
	(void)x;
	(void)option;
	return (new_str);
}

char	*di_conv(long d, t_option *option)
{
	char	*new_str;
	char	*number;
	int		len_number;

	number = ft_ltoa_base(d, 10);
	len_number = ft_strlen(number);
	new_str = hub_strjoin_width_precision(number, option, len_number);
	free(number);
	option->len_conversion = ft_strlen((const char *)new_str);
	return (new_str);
}

char	*u_conv(unsigned long u, t_option *option)
{
	char	*new_str;

	new_str = NULL;
	(void)u;
	(void)option;
	return (new_str);
}

char	*diuxminxmaj_conv(long diux, t_option *option)
{
	char	*output;

	output = NULL;
	if ((option->flag & CONV_I) || (option->flag & CONV_D))
		output = di_conv(diux, option);
	else if (option->flag & CONV_U)
		output = u_conv(diux, option);
	else if ((option->flag & CONV_XMIN) ||
				(option->flag & CONV_XMAJ))
		output = xminxmaj_conv(diux, option);
	(void)diux;
	return (output);
}
