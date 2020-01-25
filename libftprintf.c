#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
//#include "libft.h"
#include "libftprintf.h"

void	letter_function(char *str, t_state_machine *machine)
{

}

void	flag_function(char *str, t_state_machine *machine)
{

}

void	conversion_function(char *str, t_state_machine *machine)
{

}

void	error_function(char *str, t_state_machine *machine)
{

}

int		main(int ac, char **av)
{
	t_state_machine		machine;
	int					i;
	static	t_function	function[4] = {letter_function, flag_function,
										conversion_function,
										error_function};

	machine.state = LETTER;
	i = 0;
	printf("%s\n",av[1]); //DEBUG
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			function[machine.state](av[1] + i, &machine);
			i++;
		}
	}
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
