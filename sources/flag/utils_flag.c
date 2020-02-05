/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:07:06 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/05 14:25:55 by lfallet          ###   ########.fr       */
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
	printf("machine->option.flag = %d\n", machine->option.flag); //DEBUG
}
