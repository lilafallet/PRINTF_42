/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_csp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:12:54 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/06 11:06:34 by lfallet          ###   ########.fr       */
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

char	*s_conv(char *str, t_option *option)
{
	char	*new_str;

	new_str = NULL;
	new_str = hub_strjoin_width_precision(str, option);
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
