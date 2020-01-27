/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:26:59 by lfallet           #+#    #+#             */
/*   Updated: 2020/01/27 17:37:38 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "libftprintf.h"

int	letter_function(char *str, t_state_machine *machine,
						t_state_machine *string)
{
	static	int		i = 0;

	printf("%c = ", *str); //DEBUG
	if (*str == '%')
	{
		machine->state = FLAG;
		printf("pourcent\n"); //DEBUG
	}
	if (*str != '%')
	{
		printf("letter\n"); //DEBUG
		string->buffer[i] = *str;
		printf("char = %c\n", string->buffer[i]); //DEBUG
		printf("string = %s\n", string->buffer); //DEBUG
		printf("int i = %d\n", i); //DEBUG
		printf("\n"); //DEBUG
		i = i + 1;
	}
	return (1);
}

int	flag_function(char *str, t_state_machine *machine, t_state_machine *string)
{
	int			what_flag;

	what_flag = 0;
	if (*str != STR_MINUS && *str != STR_ZERO &&
		*str != STR_DOT && *str != STR_STAR)
	{
		machine->state = CONVERSION;
		return (0);
	}
	else
	{
		printf("%c = ", *str); //DEBUG
		what_flag = is_flag(*str);
		printf("what flag = %d\n", what_flag); //DEBUG
		return (1);
	}
}

int	conversion_function(char *str, t_state_machine *machine,
							t_state_machine *string)
{
	if (is_conversion(*str) == TRUE)
	{
		printf("%c = ", *str); //DEBUG
		printf("conversion\n"); //DEBUG
		machine->state = LETTER;
		return (1);
	}
	machine->state = ERROR;
	return (0);
}

int	error_function(char *str, t_state_machine *machine, t_state_machine *string)
{
	machine->state = LETTER;
	printf("%c = ", *str);
	printf("error\n"); //DEBUG
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
	t_state_machine		string;

	ft_bzero(string.buffer, 4096);
	machine.state = LETTER;
	i = 0;
	ret = 0;
	printf("%s\n", av[1]); //DEBUG
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			ret = function[machine.state](av[1] + i, &machine, &string);
			if (ret >= 0)
				i += ret;
			else
				return (EXIT_FAILURE);
		}
	}
	else
		return (EXIT_FAILURE);	
	return (EXIT_SUCCESS);
}
