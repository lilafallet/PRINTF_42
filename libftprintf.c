/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:26:59 by lfallet           #+#    #+#             */
/*   Updated: 2020/01/29 19:00:10 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h> //DEBUG
#include "libftprintf.h"
#include "libft.h"

int	letter_function(char *str, t_state_machine *machine)
{
	//printf("%c = ", *str); //DEBUG
	if (*str == '%')
	{
		machine->state = FLAG;
	//	printf("pourcent\n"); //DEBUG
	}
	if (*str != '%')
	{
	//	printf("letter\n"); //DEBUG
		fill_buffer(machine, *str);
	//	printf("char = %c\n", machine->buffer[machine->len]); //DEBUG
	//	printf("string = %s\n", machine->buffer); //DEBUG
	//	printf("int len = %d\n", machine->len); //DEBUG
	//	printf("\n"); //DEBUG
	}
	return (1);
}

int	flag_function(char *str, t_state_machine *machine)
{
	int	what_flag;

	what_flag = is_flag(*str);
	if (what_flag != -1)
	{
	//	printf("%c = flag \n", *str); //DEBUG
	//	printf("what flag = %d\n", what_flag); //DEBUG
		machine->flag |= 1 << what_flag;
	//	printf("calc flag = %d\n\n", machine->flag); //DEBBUG
		return (1);
	}
	machine->state = CONVERSION;
	return (0);
}

int	conversion_function(char *str, t_state_machine *machine)
{
	int		what_conv;

	if ((what_conv = is_conversion(*str)) != -1)
	{
		machine->flag |= (1 << what_conv) << 8;
	//	printf("%c = conversion\n", *str); //DEBUG
	//	printf("calc_flag = %d\n", machine->flag); //DEBUG
		machine->state = LETTER;
		return (1);
	}
	machine->state = ERROR;
	return (0);
}

int	error_function(char *str, t_state_machine *machine)
{
	machine->state = LETTER;
	//printf("%c = ", *str); //DEBUG
	//printf("error\n"); //DEBUG
	return (1);
}

int	main(int ac, char **av)
{
	t_state_machine		machine;
	int					i;
	static	t_function	function[4] = {letter_function, flag_function,
										conversion_function,
										error_function};
	int					ret;

	ft_bzero(machine.buffer, BUFFER_SIZE);
	machine.state = LETTER;
	machine.flag = 0;
	machine.len = 0;
	machine.len_out = 0;
	machine.out = NULL;
	i = 0;
	ret = 0;
	//printf("%s\n", av[1]); //DEBUG
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			ret = function[machine.state](av[1] + i, &machine);
			if (ret >= 0)
				i += ret;
			else
				return (EXIT_FAILURE);
		}
		//printf("MACHINE.OUT = %s\n", machine.out); //DEBUG
		//printf("MACHINE.BUFFER = %s\n", machine.buffer); //DEBUG
		memjoin_free(&machine.out, machine.buffer, machine.len_out,
				machine.len);
		//printf("MACHINE.OUT = %s\n", machine.out); //DEBUG
		//printf("MACHINE.BUFFER = %s\n", machine.buffer); //DEBUG
		//printf("MACHINE.LEN_OUT = %d\n", machine.len_out); //DEBUG
		machine.len_out += machine.len;
		//printf("MACHINE.LEN_OUT = %d\n", machine.len_out); //DEBUG
		write(1, machine.out, machine.len_out);
		free(machine.out);
	}
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
