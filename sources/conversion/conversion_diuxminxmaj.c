/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_diuxminxmaj.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:13:08 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/10 16:29:56 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //DEBUG

char	*xminxmaj_conv(long x, t_option *option)
{
	char	*new_str;

	new_str = NULL;
	(void)x;
	(void)option;
	return (new_str);
}

char	*add_minus(char *new_str)
{
	size_t	i;
	size_t	j;
	char	*str_minus;
	size_t	len_new_str;
	int		negt;

	i = 0;
	j = 0;
	negt = 0;
	len_new_str = ft_strlen(new_str);
	str_minus = (char *)malloc(sizeof(char) * (len_new_str + 1));
	if (new_str[0] >= '0' && new_str[0] <= '9')
	{
		str_minus[i] = '-';
		negt++;
		i++;
	}
	while (i <= len_new_str)
	{
		if (negt == 0 && (new_str[j + 1] >= '0' && new_str[j + 1] <= '9'))
		{
			str_minus[i] = '-';
			negt++;
			i++;
			j++;
		}	
		else
		{
			str_minus[i] = new_str[j];
			i++;
			j++;
		}
	}
	return (str_minus);
}

char	*di_conv(int d, t_option *option)
{
	char	*new_str_negt;
	char	*new_str;
	char	*number;
	char	*number_negt;
	int		len_number;

	if (d < 0)
	{
		number_negt = ft_ltoa_base_post(d, 10);
		len_number = ft_strlen(number_negt);
		new_str = hub_strjoin_width_precision(number_negt, option,
												len_number);
		new_str_negt = add_minus(new_str);
		free(new_str);
		option->len_conversion = ft_strlen((const char *)new_str_negt);
		free(number_negt);
	}
	else
	{
		number = ft_ltoa_base(d, 10);
		len_number = ft_strlen(number);
		new_str = hub_strjoin_width_precision(number, option, len_number);
		option->len_conversion = ft_strlen((const char *)new_str);
		free(number);
	}
	return (d < 0 ? new_str_negt : new_str);
}

char	*u_conv(unsigned long u, t_option *option)
{
	char	*new_str;
	char	*number;
	int		len_number;

	number = ft_ultoa_base(u, 10);
	len_number = ft_strlen(number);
	new_str = hub_strjoin_width_precision(number, option, len_number);
	free(number);
	option->len_conversion = ft_strlen((const char *)new_str);
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
