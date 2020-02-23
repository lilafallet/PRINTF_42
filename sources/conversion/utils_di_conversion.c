/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_di_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:53:11 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/12 14:11:20 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //DEBUG

char	*add_minus(char *new_str)
{
	size_t	i;
	char	*str_minus;

	str_minus = (char *)malloc(sizeof(char) * (ft_strlen(new_str) + 2));
	if (str_minus == NULL)
		return (NULL);
	i = 0;
	while (ft_isdigit(new_str[i]) == FALSE)
	{
		str_minus[i] = new_str[i];
		i++;
	}
	str_minus[i] = '-';
	while (new_str[i] != '\0')
	{
		str_minus[i + 1] = new_str[i];
		i++;
	}
	str_minus[i + 1] = '\0';
	return (str_minus);
}

char	*d_inferior_zero(long d, t_option *option)
{
	char	*new_str;
	char	*number;
	char	*tmp_number;
	size_t	len;

	number = ft_ltoa_base_post(d, 10);
	if (option->width > 0)
		option->width--;
	len = ft_strlen(number);
	new_str = hub_strjoin_width_precision(number, option, len);
	free(number);
	tmp_number = new_str;
	new_str = add_minus(new_str);
	free(tmp_number);
	return (new_str);
}

char	*d_superior_zero(t_option *option, long d)
{
	char	*new_str;
	char	*number;
	long	len;

	number = NULL;
	len = 0;
	if (option->precision >= option->width)
	{
		option->flag &= ~MOD_MINUS;
		option->flag |= MOD_ZERO;
	}
	if (d > 0 || (d == 0 && (option->flag & MOD_DOT) == FALSE))
	{
		number = ft_ltoa_base(d, 10);
		len = (long)ft_strlen(number);
	}
	new_str = hub_strjoin_width_precision(number, option, len);
	free(number);
	return (new_str);
}
