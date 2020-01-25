#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
//#include "libft.h"
#include "libftprintf.h"

int	letter_or_flag(char *str, int i)
{
	if (str[i] == STR_MINUS || str[i] == STR_ZERO || str[i] == STR_DOT ||
		str[i] == STR_STAR)
			return (i + 1);
	return (i);
}

char 	*ex_printf(char *str, t_state_machine *machine)
{
	int	i;
	int	pourcent;

	i = 0;
	pourcent = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			printf("%c = ", str[i]); //DEBUG
			printf("letter\n"); //DEBUG
		}
		if (str[i] == '%')
		{
			pourcent = letter_or_flag(str, i + 1);
			if (i + 1 != pourcent)
				printf("c'est un flag\n"); //DEBUG
			printf("c'est une lettre\n"); //DEBUG
		}
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	char *result;
	t_state_machine	machine;

	result = 0;
	machine.state = LETTER;
	if (ac == 2)
	{
		result = ex_printf(av[1], &machine);
		printf("%s\n", result); //DEBUG
	}
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
