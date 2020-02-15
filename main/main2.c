/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:06:12 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/15 15:57:42 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	ft_printf(const char *format, ...);

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

	/*rett = ft_printf("%012.d\n", 12345);
	  printf("\n");
	  printf("PRINTF 2\n");
	  ret = printf("%012.d\n", 12345);
	  printf("\n");
	  printf("RET MY PRINTF : %d\n\n", rett);
	  printf("RET PRINTF : %d\n\n", ret);

	  rett = ft_printf("%000012x", 3735928559U);
	  printf("\n");
	  printf("PRINTF 4\n");
	  ret = printf("%000012x", 3735928559U);
	  printf("\n");
	  printf("RET MY PRINTF : %d\n\n", rett);
	  printf("RET PRINTF : %d\n\n", ret);

	  rett = ft_printf("-%08.0d-", 0);
	  printf("\n");
	  printf("PRINTF 5\n");
	  ret = printf("-%08.0d-", 0);
	  printf("\n");
	  printf("RET MY PRINTF : %d\n\n", rett);
	  printf("RET PRINTF : %d\n\n", ret);

	  rett = ft_printf("-%2.0d-\n", 7);
	  printf("\n");
	  printf("PRINTF 6\n");
	  ret = printf("-%2.0d-\n", 7);
	  printf("\n");
	  printf("RET MY PRINTF : %d\n\n", rett);
	  printf("RET PRINTF : %d\n\n", ret);

	  rett = ft_printf("-%2.0d-\n", 0);
	  printf("\n");
	  printf("PRINTF 7\n");
	  ret = printf("-%2.0d-\n", 0);
	  printf("\n");
	  printf("RET MY PRINTF : %d\n\n", rett);
	  printf("RET PRINTF : %d\n\n", ret);

	  rett = ft_printf("-%d-%.0d-%.8d-%8.0d-%8.8d-", 0, 0, 0, 0, 0);
	  printf("\n");
	  printf("PRINTF 8\n");
	  ret = printf("-%d-%.0d-%.8d-%8.0d-%8.8d-", 0, 0, 0, 0, 0);
	  printf("\n");
	  printf("RET MY PRINTF : %d\n\n", rett);
	  printf("RET PRINTF : %d\n\n", ret);

	  rett = ft_printf("%*d", 10, 1234);
	  printf("\n");
	  printf("PRINTF 9\n");
	  ret = printf("%*d", 10, 1234);
	  printf("\n");
	  printf("RET MY PRINTF : %d\n\n", rett);
	  printf("RET PRINTF : %d\n\n", ret);

	  rett = ft_printf("%08x", 543);
	  printf("\n");
	  printf("PRINTF 10\n");
	  ret = printf("%08x", 543);
	  printf("\n");
	  printf("RET MY PRINTF : %d\n\n", rett);
	  printf("RET PRINTF : %d\n\n", ret);

	  rett = ft_printf("-%4p", main);
	  printf("\n");
	  printf("PRINTF 11\n");
	  ret = printf("-%4p", main);
	  printf("\n");
	  printf("RET MY PRINTF : %d\n\n", rett);
	  printf("RET PRINTF : %d\n\n", ret);

	rett = ft_printf("-%*d-\n", -4, 7);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("-%*d-\n", -4, 7);
	printf("\n");
	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);

	rett = ft_printf("[%.03s]", "hi low");
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%.03s]", "hi low");
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%09s]", "hi low");
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%09s]", "hi low");
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%.09s]", "hi low");
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%.09s]", "hi low");
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%08.5i]", 34);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%08.5i]", 34);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%08.5d]", 34);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%08.5d]", 34);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%.0i]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%.0i]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%.0d]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%.0d]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%5.0i]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%5.0i]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%5.0d]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%5.0d]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("this is %i number", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("this is %i number", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("this is %d number", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("this is %d number", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%3i]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%3i]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%08.5u]", 34);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%08.5u]", 34);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%08.5u]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%08.5u]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%08.3u]", 8375);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%08.3u]", 8375);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%05u]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%05u]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%03u]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%03u]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%2.03u]",` 8375);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%2.03u]", 8375);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%7x]", 33);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%7x]", 33);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%7x]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%7x]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%5x]", 52625);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%5x]", 52625);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%2x]", 94827);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%2x]", 94827);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%-7x]", 33);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%-7x]", 33);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%-5x]", 52625);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%-5x]", 52625);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%-3x]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%-3x]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	return (0);*/

	rett = ft_printf("[%05x]", 43);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%05x]", 43);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	rett = ft_printf("[%03x]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%03x]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%8.5x]", 43);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%8.5x]", 43);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%8.5x]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%8.5x]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%-8.5x]", 43);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%-8.5x]", 43);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);
	
	rett = ft_printf("[%-8.5x]", 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("[%-8.5x]", 0);
	printf("\n");
	printf("RET MY PRINTF : %zd\n\n", rett);
	printf("RET PRINTF : %zd\n\n", ret);

	ret = printf("[%.3x]", 0);

	return (0);
}