/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:43:42 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/10 20:30:35 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	ret;

	ret = 0;
	char	*s;
	char	c;

	c = 'a';
	s = "hello";
	{
		ret = ft_printf("haha %3c", 'c');
		printf("\n");
		printf("PRINTF 1\n");
		ret = printf("haha %3c", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%.3c", 'c');
		printf("\n");
		printf("PRINTF 2\n");
		ret = printf("%.3c", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%.15c", 'c');
		printf("\n");
		printf("PRINTF 3\n");
		ret = printf("%.15c", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%15c", 'c');
		printf("\n");
		printf("PRINTF 4\n");
		ret = printf("%15c", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%15.6c", 'c');
		printf("\n");
		printf("PRINTF 5\n");
		ret = printf("%15.6c", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("ca marche%.6c", 'c'); //debug
		printf("\n");
		printf("PRINTF 6\n"); //DEBUG
		printf("ca marche%.6c", 'c'); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);

		ret = ft_printf("ca marche%.11c\n", 'c'); //debug
		printf("\n");
		printf("PRINTF 7\n"); //DEBUG
		printf("ca marche%.11c\n\n", 'c'); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
	
		ret = ft_printf("ca marche%15c\n", 'c'); //debug
		printf("\n");
		printf("PRINTF 8\n"); //DEBUG
		printf("ca marche%15c\n\n", 'c'); //debug
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

		ret = ft_printf("%-25c\n", 'c');
		printf("\n");
		printf("PRINTF 11\n"); //DEBUG
		printf("%-25c\n", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%025c\n", 'c');
		printf("\n");
		printf("PRINTF 12\n"); //DEBUG
		printf("%025c\n", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%-025c\n", 'c');
		printf("\n");
		printf("PRINTF 13\n"); //DEBUG
		printf("%-025c\n", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%0-25s\n", "hello ca va");
		printf("\n");
		printf("PRINTF 14\n"); //DEBUG
		printf("%0-25s\n", "hello ca va");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%.8d\n", 1254);
		printf("\n");
		printf("PRINTF 15\n"); //DEBUG
		printf("%.8d\n", 1254);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);

		ret = ft_printf("%02i\n", 12456);
		printf("\n");
		printf("PRINTF 16\n"); //DEBUG
		printf("%02i\n", 12456);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%0-25i\n", 12456);
		printf("\n");
		printf("PRINTF 17\n"); //DEBUG
		printf("%0-25i\n", 12456);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);

		ret = ft_printf("%25i\n", 12456);
		printf("\n");
		printf("PRINTF 18\n"); //DEBUG
		printf("%25i\n", 12456);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);

		ret = ft_printf("%i\n", -12456);
		printf("\n");
		printf("PRINTF 19\n"); //DEBUG
		printf("%i\n", -12456);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		//printf("[%s]\n", NULL); //NULL
		//printf("[hello %-6c prout]\n", '\0'); //'\0'
		
		ret = ft_printf("%6.2d\n", -1);
		printf("\n");
		printf("PRINTF 20\n"); //DEBUG
		printf("%6.2d\n", -1);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%6.2d\n", -12);
		printf("\n");
		printf("PRINTF 21\n"); //DEBUG
		printf("%6.2d\n", -12);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%6.2d\n", -140);
		printf("\n");
		printf("PRINTF 22\n"); //DEBUG
		printf("%6.2d\n", -140);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%6.2d\n", -100800);
		printf("\n");
		printf("PRINTF 23\n"); //DEBUG
		printf("%6.2d\n", -100800);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%6.6d\n", -12);
		printf("\n");
		printf("PRINTF 24\n"); //DEBUG
		printf("%6.6d\n", -12);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);

		ret = ft_printf("%p\n", NULL);
		printf("\n");
		printf("PRINTF 24\n"); //DEBUG
		printf("%p\n", NULL);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);

		ret = ft_printf("%20.15p\n", main);
		printf("\n");
		printf("PRINTF 26\n"); //DEBUG
		printf("%20.15p\n", main);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%p\n", &c);
		printf("\n");
		printf("PRINTF 27\n"); //DEBUG
		printf("%p\n", &c);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%u\n", -12456);
		printf("\n");
		printf("PRINTF 19\n"); //DEBUG
		printf("%u\n", -12456);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		//printf("[%s]\n", NULL); //NULL
		//printf("[hello %-6c prout]\n", '\0'); //'\0'
		
		ret = ft_printf("%6.2u\n", -1);
		printf("\n");
		printf("PRINTF 20\n"); //DEBUG
		printf("%6.2u\n", -1);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%6.2u\n", -12);
		printf("\n");
		printf("PRINTF 21\n"); //DEBUG
		printf("%6.2u\n", -12);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%6.2u\n", -140);
		printf("\n");
		printf("PRINTF 22\n"); //DEBUG
		printf("%6.2u\n", -140);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%6.2u\n", -100800);
		printf("\n");
		printf("PRINTF 23\n"); //DEBUG
		printf("%6.2u\n", -100800);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%6.6u\n", -12);
		printf("\n");
		printf("PRINTF 24\n"); //DEBUG
		printf("%6.6u\n", -12);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%x\n", -0);
		printf("\n");
		printf("PRINTF 24\n"); //DEBUG
		printf("%x\n", -0);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);

		ret = ft_printf("%20.15x\n", -265894122);
		printf("\n");
		printf("PRINTF\n"); //DEBUG
		printf("%20.15x\n", -265894122);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%x\n", -123456789);
		printf("\n");
		printf("PRINTF 27\n"); //DEBUG
		printf("%x\n", -123456789);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%X\n", -0);
		printf("\n");
		printf("PRINTF 28\n"); //DEBUG
		printf("%X\n", -0);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);

		ret = ft_printf("%20.15X\n", -265894122);
		printf("\n");
		printf("PRINTF 29\n"); //DEBUG
		printf("%20.15X\n", -265894122);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%X\n", -123456789);
		printf("\n");
		printf("PRINTF 30\n"); //DEBUG
		printf("%X\n", -123456789);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%X\n", INT_MAX + 2);
		printf("\n");
		printf("PRINTF 31\n"); //DEBUG
		printf("%X\n", INT_MAX + 2);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%X\n", INT_MIN - 2);
		printf("\n");
		printf("PRINTF 32\n"); //DEBUG
		printf("%X\n", INT_MIN - 2);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%p\n", LONG_MAX + 2);
		printf("\n");
		printf("PRINTF 33\n"); //DEBUG
		printf("%p\n", LONG_MAX + 2);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%p\n", LONG_MIN - 2);
		printf("\n");
		printf("PRINTF 34\n"); //DEBUG
		printf("%p\n", LONG_MIN - 2);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		
		ret = ft_printf("%0% hello\n");
		printf("\n");
		printf("PRINTF 35\n"); //DEBUG
		printf("%0% hello\n");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);

		ret = ft_printf("%08.2% hello\n");
		printf("\n");
		printf("PRINTF 36\n"); //DEBUG
		printf("%08.2% hello\n");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
	}
	return (EXIT_SUCCESS);
}
