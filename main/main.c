/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:43:42 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/12 13:39:28 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ssize_t	rett;
	ssize_t	ret;

	ret = 0;
	rett = 0;
	char	*s;
	char	c;

	c = 'a';
	s = "hello";
	{
		rett = ft_printf("haha %3c", 'c');
		printf("\n");
		printf("PRINTF 1\n");
		ret = printf("haha %3c", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%.3c", 'c');
		printf("\n");
		printf("PRINTF 2\n");
		ret = printf("%.3c", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%.15c", 'c');
		printf("\n");
		printf("PRINTF 3\n");
		ret = printf("%.15c", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%15c", 'c');
		printf("\n");
		printf("PRINTF 4\n");
		ret = printf("%15c", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%15.6c", 'c');
		printf("\n");
		printf("PRINTF 5\n");
		ret = printf("%15.6c", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("ca marche%.6c", 'c'); //debug
		printf("\n");
		printf("PRINTF 6\n"); //DEBUG
		ret = printf("ca marche%.6c", 'c'); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);

		rett = ft_printf("ca marche%.11c\n", 'c'); //debug
		printf("\n");
		printf("PRINTF 7\n"); //DEBUG
		ret = printf("ca marche%.11c\n", 'c'); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
	
		rett = ft_printf("ca marche%15c\n", 'c'); //debug
		printf("\n");
		printf("PRINTF 8\n"); //DEBUG
		ret = printf("ca marche%15c\n", 'c'); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
	
		rett = ft_printf("ca marche%25s\n", "hello ca va"); //debug
		printf("\n");
		printf("PRINTF 9\n"); //DEBUG
		ret = printf("ca marche%25s\n", "hello ca va"); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
	
		rett = ft_printf("ca marche%15.6s\n", "hello ca va"); //debug
		printf("\n");
		printf("PRINTF 10\n"); //DEBUG
		ret = printf("ca marche%15.6s\n", "hello ca va"); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);

		rett = ft_printf("%-25c\n", 'c');
		printf("\n");
		printf("PRINTF 11\n"); //DEBUG
		ret = printf("%-25c\n", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%025c\n", 'c');
		printf("\n");
		printf("PRINTF 12\n"); //DEBUG
		ret = printf("%025c\n", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%-025c\n", 'c');
		printf("\n");
		printf("PRINTF 13\n"); //DEBUG
		ret = printf("%-025c\n", 'c');
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%0-25s\n", "hello ca va");
		printf("\n");
		printf("PRINTF 14\n"); //DEBUG
		ret = printf("%0-25s\n", "hello ca va");
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%.8d\n", 1254);
		printf("\n");
		printf("PRINTF 15\n"); //DEBUG
		ret = printf("%.8d\n", 1254);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);

		rett = ft_printf("%02i\n", 12456);
		printf("\n");
		printf("PRINTF 16\n"); //DEBUG
		ret = printf("%02i\n", 12456);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%0-25i\n", 12456);
		printf("\n");
		printf("PRINTF 17\n"); //DEBUG
		ret = printf("%0-25i\n", 12456);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);

		rett = ft_printf("%25i\n", 12456);
		printf("\n");
		printf("PRINTF 18\n"); //DEBUG
		ret = printf("%25i\n", 12456);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", rett);

		rett = ft_printf("%i\n", -12456);
		printf("\n");
		printf("PRINTF 19\n"); //DEBUG
		ret = printf("%i\n", -12456);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		//printf("[%s]\n", NULL); //NULL
		//printf("[hello %-6c prout]\n", '\0'); //'\0'
		
		rett = ft_printf("%6.2d\n", -1);
		printf("\n");
		printf("PRINTF 20\n"); //DEBUG
		ret = printf("%6.2d\n", -1);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%6.2d\n", -12);
		printf("\n");
		printf("PRINTF 21\n"); //DEBUG
		ret = printf("%6.2d\n", -12);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%6.2d\n", -140);
		printf("\n");
		printf("PRINTF 22\n"); //DEBUG
		ret = printf("%6.2d\n", -140);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%6.2d\n", -100800);
		printf("\n");
		printf("PRINTF 23\n"); //DEBUG
		ret = printf("%6.2d\n", -100800);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%6.6d\n", -12);
		printf("\n");
		printf("PRINTF 24\n"); //DEBUG
		ret = printf("%6.6d\n", -12);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);

		rett = ft_printf("%p\n", NULL);
		printf("\n");
		printf("PRINTF 24\n"); //DEBUG
		ret = printf("%p\n", NULL);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);

		rett = ft_printf("%20.15p\n", main);
		printf("\n");
		printf("PRINTF 26\n"); //DEBUG
		ret = printf("%20.15p\n", main);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%p\n", &c);
		printf("\n");
		printf("PRINTF 27\n"); //DEBUG
		ret = printf("%p\n", &c);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%u\n", -12456);
		printf("\n");
		printf("PRINTF 19\n"); //DEBUG
		ret = printf("%u\n", -12456);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		//printf("[%s]\n", NULL); //NULL
		//printf("[hello %-6c prout]\n", '\0'); //'\0'
		
		rett = ft_printf("%6.2u\n", -1);
		printf("\n");
		printf("PRINTF 20\n"); //DEBUG
		ret = printf("%6.2u\n", -1);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%6.2u\n", -12);
		printf("\n");
		printf("PRINTF 21\n"); //DEBUG
		ret = printf("%6.2u\n", -12);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%6.2u\n", -140);
		printf("\n");
		printf("PRINTF 22\n"); //DEBUG
		ret = printf("%6.2u\n", -140);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%6.2u\n", -100800);
		printf("\n");
		printf("PRINTF 23\n"); //DEBUG
		ret = printf("%6.2u\n", -100800);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%6.6u\n", -12);
		printf("\n");
		printf("PRINTF 24\n"); //DEBUG
		ret = printf("%6.6u\n", -12);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%x\n", -0);
		printf("\n");
		printf("PRINTF 24\n"); //DEBUG
		ret = printf("%x\n", -0);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);

		rett = ft_printf("%20.15x\n", -265894122);
		printf("\n");
		printf("PRINTF\n"); //DEBUG
		ret = printf("%20.15x\n", -265894122);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%x\n", -123456789);
		printf("\n");
		printf("PRINTF 27\n"); //DEBUG
		ret = printf("%x\n", -123456789);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%X\n", -0);
		printf("\n");
		printf("PRINTF 28\n"); //DEBUG
		ret = printf("%X\n", -0);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);

		rett = ft_printf("%20.15X\n", -265894122);
		printf("\n");
		printf("PRINTF 29\n"); //DEBUG
		ret = printf("%20.15X\n", -265894122);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%X\n", -123456789);
		printf("\n");
		printf("PRINTF 30\n"); //DEBUG
		ret = printf("%X\n", -123456789);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%X\n", INT_MAX + 2);
		printf("\n");
		printf("PRINTF 31\n"); //DEBUG
		ret = printf("%X\n", INT_MAX + 2);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%X\n", INT_MIN - 2);
		printf("\n");
		printf("PRINTF 32\n"); //DEBUG
		ret = printf("%X\n", INT_MIN - 2);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%p\n", LONG_MAX + 2);
		printf("\n");
		printf("PRINTF 33\n"); //DEBUG
		ret = printf("%p\n", LONG_MAX + 2);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%p\n", LONG_MIN - 2);
		printf("\n");
		printf("PRINTF 34\n"); //DEBUG
		ret = printf("%p\n", LONG_MIN - 2);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%*.*d hello\n", 8, 5, 10);
		printf("\n");
		printf("PRINTF 36\n"); //DEBUG
		ret = printf("%*.*d hello\n", 8, 5, 10);
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("ca marche%25s\n", NULL); //debug
		printf("\n");
		printf("PRINTF 37\n"); //DEBUG
		ret = printf("ca marche%25s\n", NULL); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
	
		rett = ft_printf("ca marche%15.6s\n", NULL); //debug
		printf("\n");
		printf("PRINTF 38\n"); //DEBUG
		ret = printf("ca marche%15.6s\n", NULL); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%s\n", NULL); //debug
		printf("\n");
		printf("PRINTF 39\n"); //DEBUG
		ret = printf("%s\n", NULL); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%15.6s\n", NULL); //debug
		printf("\n");
		printf("PRINTF 40\n"); //DEBUG
		ret = printf("%15.6s\n", NULL); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%.s\n", NULL); //debug
		printf("\n");
		printf("PRINTF 41\n"); //DEBUG
		ret = printf("%.s\n", NULL); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
	
		rett = ft_printf("[ca marche%25c]\n", NULL); //debug
		printf("\n");
		printf("PRINTF 42\n"); //DEBUG
		ret = printf("[ca marche%25c]\n", NULL); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
	
		rett = ft_printf("[ca marche%15.6c]\n", NULL); //debug
		printf("\n");
		printf("PRINTF 43\n"); //DEBUG
		ret = printf("[ca marche%15.6c]\n", NULL); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("[%c]\n", NULL); //debug
		printf("\n");
		printf("PRINTF 44\n"); //DEBUG
		ret = printf("[%c]\n", NULL); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("[%15.6c]\n", NULL); //debug
		printf("\n");
		printf("PRINTF 45\n"); //DEBUG
		ret = printf("[%15.6c]\n", NULL); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("[%.3c]\n", NULL); //debug
		printf("\n");
		printf("PRINTF 46\n"); //DEBUG
		ret = printf("[%.3c]\n", NULL); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%s\n", '\0'); //debug
		printf("\n");
		printf("PRINTF 47\n"); //DEBUG
		ret = printf("%s\n", '\0'); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
		
		rett = ft_printf("%c\n", '\0'); //debug
		printf("\n");
		printf("PRINTF 48\n"); //DEBUG
		ret = printf("%c\n", '\0'); //debug
		printf("\n");
		printf("RET MY PRINTF : %d\n", rett);
		printf("RET PRINTF : %d\n\n", ret);
	}
	return (EXIT_SUCCESS);
}
