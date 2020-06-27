#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libftprintf.h"

int	main(void)
{
	int	n = 42;
	int	ret;
	int	rett;
	char *str = "est-ce que ca marche ?";
	
	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO 3
	ret = printf("%d %hd %d\n", 123456, 123456, 123456);
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret);
	printf("\033[32;01m");
	ret = ft_printf("%d %hd %d\n", 123456, 123456, 123456); //MYPRINTF
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO 4
  	ret = printf("%u %hu %u\n", 123456U, 123456U, 123456U);
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret);
	printf("\033[32;01m");
  	ret = ft_printf("%u %hu %u\n", 123456U, 123456U, 123456U); //MYPRINTF
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO 5
  	ret = printf("%d %ld %d\n", 123456, 123456, 123456);
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret);
	printf("\033[32;01m");
  	ret = ft_printf("%d %ld %d\n", 123456, 123456, 123456); //MYPRINTF
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	//ERREURS BONUS//
	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO 3
  	ret = printf("%d %2n", 1, &n);
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret);
	printf("\033[32;01m");
  	ret = ft_printf("%d %2n", 1, &n); //MYPRINTF
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO 4
  	ret = printf("%d %.2n", 1, &n);
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret);
	printf("\033[32;01m");
  	ret = ft_printf("%d %.2n", 1, &n); //MYPRINTF
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO 5
  	ret = printf("%d %02n", 1, &n);
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret);
	printf("\033[32;01m");
  	ret = ft_printf("%d %02n", 1, &n); //MYPRINTF
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO 7
  	ret = printf("%d %-2n", 1, &n);
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret);
	printf("\033[32;01m");
  	ret = ft_printf("%d %-2n", 1, &n); //MYPRINTF
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO 10
	ret = printf("%hp", main);
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret);
	printf("\033[32;01m");
	ret = ft_printf("%hp", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("ret : %d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	return (EXIT_SUCCESS);
}
