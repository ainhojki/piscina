/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainhmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:49:11 by ainhmart          #+#    #+#             */
/*   Updated: 2023/07/27 19:28:46 by ainhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

 void ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	other;

	n = 0;
	while (n < size)
	{
		other = tab[(size - 1)];
		tab[(size - 1)] = tab[n];
		tab[n] = other;
		n++;
		size--;
	}
}

int main(void)
{
int tab;
int size;

tab [10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size = 10;
for (int x = 0; x < size; x++);
{
	printf( "%d", tab[x]);
}
ft_rev_int_tab(tab, size);
printf("\n");
return (0);
}
