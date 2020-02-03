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
		ret = ft_printf("haha %3s", "hello");
		printf("\n");
		printf("PRINTF 1\n");
		ret = printf("haha %3s", "hello");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%.3s", "hello");
		printf("\n");
		printf("PRINTF 2\n");
		ret = printf("%.3s", "hello");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%.15s", "hello ca va");
		printf("\n");
		printf("PRINTF 3\n");
		ret = printf("%.15s", "hello ca va");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%15s", "hello ca va");
		printf("\n");
		printf("PRINTF 4\n");
		ret = printf("%15s", "hello ca va");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%15.6s", "hello ca va");
		printf("\n");
		printf("PRINTF 5\n");
		ret = printf("%15.2s", "hello ca va");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("ca marche%.6s\n", "hello"); //debug
		printf("\n");
		printf("PRINTF 6\n"); //DEBUG
		printf("ca marche%.6s\n\n", "hello"); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);

		ret = ft_printf("ca marche%.11s\n", "hello ca va"); //debug
		printf("\n");
		printf("PRINTF 7\n"); //DEBUG
		printf("ca marche%.11s\n\n", "hello ca va"); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
	
		ret = ft_printf("ca marche%15s\n", "hello ca va"); //debug
		printf("\n");
		printf("PRINTF 8\n"); //DEBUG
		printf("ca marche%15s\n\n", "hello ca va"); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
	
		ret = ft_printf("ca marche%25s\n", "hello ca va"); //debug
		printf("\n");
		printf("PRINTF 9\n"); //DEBUG
		printf("ca marche%25s\n\n", "hello ca va"); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
	
		ret = ft_printf("ca marche%15.6s\n", "hello ca va"); //debug
		printf("\n");
		printf("PRINTF 10\n"); //DEBUG
		printf("ca marche%15.6s\n\n", "hello ca va"); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
	}
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
