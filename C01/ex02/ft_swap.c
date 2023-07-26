/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainhmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:30:47 by ainhmart          #+#    #+#             */
/*   Updated: 2023/07/26 15:54:12 by ainhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int valor1;
	int valor2;
valor1 = 24;
valor2 = 42;
	printf("before valor1 : %d -- valor2: %d\n", valor1, valor2);
	ft_swap(&valor1, &valor2);
	printf("after valor1 : %d -- valor2: %d\n", valor1, valor2);
	return (0);
}*/
