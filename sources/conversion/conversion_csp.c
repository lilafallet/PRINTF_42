/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_csp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:12:54 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/06 13:19:22 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>
#include <stdio.h> //debug

char	*c_conv(int c, t_option *option)
{
	char	*new_str;
	char	*convert_str;

	convert_str = (char *)malloc(sizeof(char) * (1 + 1));
	printf("INT C = %d\n", c); //debug
	convert_str[0] = c;
	convert_str[1] = '\0'; 
	new_str = hub_strjoin_width_precision(convert_str, option, 1);
	option->len_conversion = ft_strlen((const char *)new_str);
	return (new_str);
}

char	*s_conv(char *str, t_option *option)
{
	char	*new_str;

	new_str = NULL;
	new_str = hub_strjoin_width_precision(str, option,
											ft_strlen((const char *)str));
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
