/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_csp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:01:50 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/03 18:10:45 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*c_conv(int c, t_option *option)
{
	char	*new_str;

	new_str = NULL;
	(void)c;
	(void)option;
	return (new_str);
}

char	*s_conv(char *str, t_option *option, t_state_machine *machine)
{
	char	*new_str;

	new_str = NULL;
	if (option->width != 0 || option->precision != 0)
		new_str = hub_strjoin_width_precision(str, option);
	(void)new_str;
	(void)option;
	option->len_conversion = ft_strlen((const char *)new_str);
	return (new_str);
}

char	*p_conv(void *p, t_option *option)
{
	char	*new_str;

	new_str = NULL;
	(void)p;
	(void)option;
	return (new_str);
}

