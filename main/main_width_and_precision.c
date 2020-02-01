/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_width_and_precision.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 13:57:33 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/01 18:37:26 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //DEBUG

char	*hub_strjoin_width_precision(char *buffer, char *str, int width,
										int precision);

int	main(void)
{
	char	*ret;

	ret = NULL;
	ret = hub_strjoin_width_precision("ca marche", "hello", 0, 6);
	printf("MY PRINTF\n"); //DEBUG
	printf("%s\n", ret); //DEBUG
	printf("ca marche%.6s\n\n", "hello"); //debug

	ret = hub_strjoin_width_precision("ca marche", "hello ca va", 0, 11);
	printf("MY PRINTF\n"); //DEBUG
	printf("%s\n", ret); //DEBUG
	printf("ca marche%.11s\n\n", "hello ca va"); //debug
	
	ret = hub_strjoin_width_precision("ca marche", "hello ca va", 15, 0);
	printf("MY PRINTF\n"); //DEBUG
	printf("%s\n", ret); //DEBUG
	printf("ca marche%15s\n\n", "hello ca va"); //debug
	
	ret = hub_strjoin_width_precision("ca marche", "hello ca va", 25, 0);
	printf("MY PRINTF\n"); //DEBUG
	printf("%s\n", ret); //DEBUG
	printf("ca marche%25s\n\n", "hello ca va"); //debug
	
	ret = hub_strjoin_width_precision("ca marche", "hello ca va", 15, 6);
	printf("MY PRINTF\n"); //DEBUG
	printf("%s\n", ret); //DEBUG
	printf("ca marche%15.6s\n\n", "hello ca va"); //debug
	return (0);
}
