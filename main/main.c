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
		printf("MY PRINTF\n");
		ret = ft_printf("%.3s", "hello");
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%.3s", "hello");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		printf("MY PRINTF\n");
		ret = ft_printf("%6d", 42);
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%6d", 42);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		printf("MY PRINTF\n");
		ret = ft_printf("%.6d", 42);
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%.6d", 42);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		printf("MY PRINTF\n");
		ret = ft_printf("%.6i", 42);
		printf("\n");
		printf("PRINT\n");
		ret = printf("%.6i", 42);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);

		printf("MY PRINTF\n");
		ret = ft_printf("%6i", 42);
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%6i", 42);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		printf("MY PRINTF\n");
		ret = ft_printf("%6x", 4256);
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%6x", 42);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		printf("MY PRINTF\n");
		ret = ft_printf("%.6x", 4256);
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%.6x", 4256);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		printf("MY PRINTF ///////////////////////////////////////////////\n");
		ret = ft_printf("%.15s", "hello ca va");
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%.15s", "hello ca va");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		printf("MY PRINTF\n");
		ret = ft_printf("%15s", "hello ca va");
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%15s", "hello ca va");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		printf("MY PRINTF\n");
		ret = ft_printf("%15.6s", "hello ca va");
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%15.2s", "hello ca va");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		printf("MY PRINTF\n");
		ret = ft_printf("%.3f", 15.965564);
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%.2f", 15.965564);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		printf("MY PRINTF\n");
		ret = ft_printf("%15f", 15.965564);
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%15f", 15.965564);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		printf("MY PRINTF\n");
		ret = ft_printf("%15.3f", 15.965564);
		printf("\n");
		printf("PRINTF\n");
		ret = printf("%15.3f", 15.965564);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
	}
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
