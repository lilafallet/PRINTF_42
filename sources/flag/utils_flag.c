/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:07:06 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/06 11:17:08 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h> //DEBUG
#include "libftprintf.h"
#include "libft.h"

void	preset_flag(t_state_machine *machine)
{
	if (machine->option.flag & MOD_MINUS)
		machine->option.flag &= ~MOD_ZERO;
	printf("machine->option.flag = %d\n", machine->option.flag); //DEBUG
}
