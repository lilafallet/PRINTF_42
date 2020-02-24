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

	rett = ft_printf("%*.*i,%*.*d", 2, -2, 8, 2, -2,  0);
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
	
	return (0);
}
