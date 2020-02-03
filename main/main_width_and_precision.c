/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_width_and_precision.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 13:57:33 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/03 12:59:49 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //DEBUG
#include "libftprintf.h"

int	main(void)
{
	int	ret;

	ret = ft_printf("ca marche%.6s\n\n", "hello"); //debug
	printf("MY PRINTF\n"); //DEBUG
	printf("%d\n", ret); //DEBUG
	printf("ca marche%.6s\n\n", "hello"); //debug

	printf("MY PRINTF\n"); //DEBUG
	ret = ft_printf("ca marche%.11s\n\n", "hello ca va"); //debug
	printf("%d\n", ret); //DEBUG
	printf("ca marche%.11s\n\n", "hello ca va"); //debug
	
	printf("MY PRINTF\n"); //DEBUG
	ret = ft_printf("ca marche%15s\n\n", "hello ca va"); //debug
	printf("%d\n", ret); //DEBUG
	printf("ca marche%15s\n\n", "hello ca va"); //debug
	
	printf("MY PRINTF\n"); //DEBUG
	ret = ft_printf("ca marche%25s\n\n", "hello ca va"); //debug
	printf("%d\n", ret); //DEBUG
	printf("ca marche%25s\n\n", "hello ca va"); //debug
	
	printf("MY PRINTF\n"); //DEBUG
	ret = ft_printf("ca marche%15.6s\n\n", "hello ca va"); //debug
	printf("%d\n", ret); //DEBUG
	printf("ca marche%15.6s\n\n", "hello ca va"); //debug
	return (0);
}
