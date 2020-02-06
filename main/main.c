/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:43:42 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/06 14:19:41 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	ret;

	ret = 0;
	char	*s;
	char	c;

	c = 'a';
	s = "hello";
	{
		/*ret = ft_printf("haha %3c", 'c');
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
	
		/*ret = ft_printf("ca marche%25s\n", "hello ca va"); //debug
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
		printf("RET MY PRINTF : %d\n\n", ret);*/

		/*ret = ft_printf("%-25c\n", 'c');
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
		
		/*ret = ft_printf("%0-25s\n", "hello ca va");
		printf("\n");
		printf("PRINTF 14\n"); //DEBUG
		printf("%0-25s\n", "hello ca va");
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);*/
		
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

		ret = ft_printf("%i\n", 12456);
		printf("\n");
		printf("PRINTF 19\n"); //DEBUG
		printf("%i\n", 12456);
		printf("\n");
		printf("RET MY PRINTF : %d\n\n", ret);
		//printf("[%s]\n", NULL); //NULL
		//printf("[hello %-6c prout]\n", '\0'); //'\0'*/
	}
	return (EXIT_SUCCESS);
}
