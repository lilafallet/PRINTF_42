#include "libftprintf.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	ret;

	ret = 0;
	char	*s;

	s = "hello";
	if (ac == 1)
	{
		ret = ft_printf("hello ca va %d %d %d %s", 18, 21, 22, s);
		printf("\n");
		printf("RET MY PRINTF : %d\n", ret);
	}
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
