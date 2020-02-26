/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:06:12 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/26 13:51:27 by lfallet          ###   ########.fr       */
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

	/*rett = ft_printf("%*.*i,%*.*d", 2, -2, 8, 2, -2,  0);
	printf("\n");
	printf("PRINTF 1\n");
	ret = printf("%*.*i,%*.*d", 2, -2, 8, 2, -2,  0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%0*.*i,%0*.*d", 2, -2, 8, 2, -2,  0);
	printf("\n");
	printf("PRINTF 1\n");
	ret = printf("%*.*i,%*.*d", 2, -2, 8, 2, -2,  0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%*.*i,%*.*d", 2, -1, 8, 2, -1,  0);
	printf("\n");
	printf("PRINTF 1\n");
	ret = printf("%*.*i,%*.*d", 2, -1, 8, 2, -1,  0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	
	rett = ft_printf("%*i, %*d", -4, 8, -4, 0);
	printf("\n");
	printf("PRINTF 1\n");
	ret = printf("%*i, %*d", -4, 8, -4, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%*.*i, %*.*d", -2, -2, 8, -2, -2, 0);
	printf("\n");
	printf("PRINTF 1\n");
	ret = printf("%*.*i, %*.*d", -2, -2, 8, -2, -2, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%-*.*i,%-*.*d", 2, -2, 8, 2, -1,  0);
	printf("\n");
	printf("PRINTF 1\n");
	ret = printf("%-*.*i,%-*.*d", 2, -2, 8, 2, -1,  0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%*.*i,%*.*d", 2, -2, 8, 2, -1,  0);
	printf("\n");
	printf("PRINTF 1\n");
	ret = printf("%*.*i,%*.*d", 2, -2, 8, 2, -1,  0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%.*x,%.*X", 1, 0, 1, 0);
	printf("\n");
	printf("PRINTF 1\n");
	ret = printf("%.*x,%.*X", 1, 0, 1, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%.*x,%.*X", 2, 0, 2, 0);
	printf("\n");
	printf("PRINTF 2\n");
	ret = printf("%.*x,%.*X", 2, 0, 2, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%.*x,%.*X", 4, 0, 4, 0);
	printf("\n");
	printf("PRINTF 3\n");
	ret = printf("%.*x,%.*X", 4, 0, 4, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%*.*x,%*.*X", -1, 1, 0, -1, 1, 0);
	printf("\n");
	printf("PRINTF 4\n");
	ret = printf("%*.*x,%*.*X", -1, 1, 0, -1, 1, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);

	rett = ft_printf("%0*.*x,%0*.*X", -1, 1, 0, -1, 1, 0);
	printf("\n");
	printf("PRINTF 5\n");
	ret = printf("%0*.*x,%0*.*X", -1, 1, 0, -1, 1, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%-*.*x,%-*.*X", -1, 1, 0, -1, 1, 0);
	printf("\n");
	printf("PRINTF 6\n");
	ret = printf("%-*.*x,%-*.*X", -1, 1, 0, -1, 1, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%*.*x,%*.*X", 0, 1, 0, 0, 1, 0);
	printf("\n");
	printf("PRINTF 7\n");
	ret = printf("%*.*x,%*.*X", 0, 1, 0, 0, 1, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%-*.*x,%-*.*X", 0, 1, 0, 0, 1, 0);
	printf("\n");
	printf("PRINTF 8\n");
	ret = printf("%-*.*x,%-*.*X", 0, 1, 0, 0, 1, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%*.*x,%*.*X", 1, 1, 0, 1, 1, 0);
	printf("\n");
	printf("PRINTF 9\n");
	ret = printf("%*.*x,%*.*X", 1, 1, 0, 1, 1, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%-*.*x,%-*.*X", 1, 1, 0, 1, 1, 0);
	printf("\n");
	printf("PRINTF 10\n");
	ret = printf("%-*.*x,%-*.*X", 1, 1, 0, 1, 1, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%.*x,%.*X", 0, 0, 0, 0);
	printf("\n");
	printf("PRINTF 11\n");
	ret = printf("%.*x,%.*X", 0, 0, 0, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%0*x,%0*X", 2, 0, 2, 0);
	printf("\n");
	printf("PRINTF 12\n");
	ret = printf("%0*x,%0*X", 2, 0, 2, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%*.*x,%*.*X", 2, 0, 0, 2, 0, 0);
	printf("\n");
	printf("PRINTF 13\n");
	ret = printf("%*.*x,%*.*X", 2, 0, 0, 2, 0, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%0*.*x,%0*.*X", 2, 0, 0, 2, 0, 0);
	printf("\n");
	printf("PRINTF 14\n");
	ret = printf("%0*.*x,%0*.*X", 2, 0, 0, 2, 0, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%*.*x,%*.*X", 3, 0, 0, 3, 0, 0);
	printf("\n");
	printf("PRINTF 15\n");
	ret = printf("%*.*x,%*.*X", 3, 0, 0, 3, 0, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%0*.*x,%0*.*X", 2, 1, 0, 2, 1, 0);
	printf("\n");
	printf("PRINTF 16\n");
	ret = printf("%0*.*x,%0*.*X", 2, 1, 0, 2, 1, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%0*.*x,%0*.*X", 3, 0, 0, 3, 0, 0);
	printf("\n");
	printf("PRINTF 17\n");
	ret = printf("%0*.*x,%0*.*X", 3, 0, 0, 3, 0, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%0*.*x,%0*.*X", 3, 1, 0, 3, 1, 0);
	printf("\n");
	printf("PRINTF 18\n");
	ret = printf("%0*.*x,%0*.*X", 3, 1, 0, 3, 1, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%0*.*u,%0*.*u", 3, 0, 0, 3, 0, 0);
	printf("\n");
	printf("PRINTF 19 only u\n");
	ret = printf("%0*.*u,%0*.*u", 3, 0, 0, 3, 0, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%0*.*u,%0*.*x", 3, 1, 61, 3, 1, 61);
	printf("\n");
	printf("PRINTF 20 u and x\n");
	ret = printf("%0*.*u,%0*.*x", 3, 1, 61, 3, 1, 61);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%0*.*x,%0*.*X", 4, 0, 8, 4, 0, 8);
	printf("\n");
	printf("PRINTF 21 only x\n");
	ret = printf("%0*.*x,%0*.*X", 4, 0, 8, 4, 0, 8);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%0*.*x,%0*.*X %0*.*x %0*.*X", 4, 2, 8, 4, 2, 8, 4, 2, 8, 4, 2, 8);
	printf("\n");
	printf("PRINTF 22 only x\n");
	ret = printf("%0*.*x,%0*.*X %0*.*x %0*.*X", 4, 2, 8, 4, 2, 8, 4, 2, 8, 4, 2, 8);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%0*x,%0*X %0*x %0*X", 3, 8, 3, 8, 3, 0, 3, 0);
	printf("\n");
	printf("PRINTF 23 only x\n");
	ret = printf("%0*x,%0*X %0*x %0*X", 3, 8, 3, 8, 3, 0, 3, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);*/
	
	rett = ft_printf("%014.1x", 428234525);
	printf("\n");
	printf("PRINTF 1\n");
	ret = printf("%014.1x", 428234525);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%020.2x", 313571901);
	printf("\n");
	printf("PRINTF 2\n");
	ret = printf("%020.2x", 313571901);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%014.1x", 323292131);
	printf("\n");
	printf("PRINTF 3\n");
	ret = printf("%014.1x", 323292131);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%018.5x", 473439060);
	printf("\n");
	printf("PRINTF 3\n");
	ret = printf("%018.5x", 473439060);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	return (0);
}
