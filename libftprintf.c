#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
//#include "libft.h"
#include "libftprintf.h"

char *ex_printf(char *str)
{
	return (str);
}

int	main(int ac, char **av)
{
	char *result;

	if (ac == 2)
	{
		result = ex_printf(av[1]);
		printf("%s\n", result);
	}
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
