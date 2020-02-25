/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:06:12 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/24 19:08:33 by lfallet          ###   ########.fr       */
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
	printf("RET PRINTF : %d\n\n", ret);*/
	
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
	printf("PRINTF 11\n");
	ret = printf("%0*x,%0*X", 2, 0, 2, 0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	return (0);
}
