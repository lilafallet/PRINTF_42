/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 17:25:51 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/03 17:26:16 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h> //DEBUG
#include "libftprintf.h"
#include "libft.h"

int		it_is_csp(int flag)
{
	return ((flag & CONV_C) || (flag & CONV_S) || (flag & CONV_P));
}

void	preset_flag(t_state_machine *machine)
{
	if ((machine->option.flag & MOD_MINUS)
		|| it_is_csp(machine->option.flag) == TRUE)
		machine->option.flag &= ~MOD_ZERO;
}
