/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:06:12 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/15 20:31:41 by lfallet          ###   ########.fr       */
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

	rett = ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d", 2, -2, 8, 2, -2,  -12, 2, -2,  123456789, 2, -2,  0 , 2, -2,  -12345678, 2, -2,  97, 2, -2, -2147483648, 2, -2, 2147483647);
	printf("\n");
	printf("PRINTF 1\n");
	ret = printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d", 2, -2, 8, 2, -2,  -12, 2, -2,  123456789, 2, -2,  0 , 2, -2,  -12345678, 2, -2,  97, 2, -2, -2147483648, 2, -2, 2147483647);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	rett = ft_printf("%*.*i,%*.*d", 2, -2, 8, 2, -2,  0);
	printf("\n");
	printf("PRINTF 1\n");
	ret = printf("%*.*i,%*.*d", 2, -2, 8, 2, -2,  0);
	printf("\n");
 	printf("RET MY PRINTF : %d\n\n", rett);
	printf("RET PRINTF : %d\n\n", ret);
	
	return (0);
}
