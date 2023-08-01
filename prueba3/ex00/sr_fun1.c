/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:05:05 by ssalgado          #+#    #+#             */
/*   Updated: 2023/07/30 16:05:08 by ssalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

int	ft_strlen(char *str)
{
	int		cont;

	cont = 0;
	while (*(str + cont) != '\0')
	{
		cont++;
	}
	return (cont);
}

int	ctd(int to, int pos)
{
	int	cont;

	cont = 1;
	while (pos + 1 < to)
	{
		cont = cont * 10;
		pos++;
	}
	return (cont);
}

int	f_te(int n, int *dir)
{
	int	cont;

	cont = 0;
	while (dir[cont] != '\0')
	{
		if (dir[cont] == n)
			return (cont);
		else
			cont++;
	}
	return (0);
}

int	size_of_int(int n)
{
	int	cont;

	cont = 1;
	while (n / 10 >= 1)
	{
		n = n / 10;
		cont = cont * 10;
	}
	return (cont);
}

char	*int_tostr(char *valor, int nb)
{
	int		cont;
	int		cont2;
	int		num;

	num = nb;
	cont = size_of_int(num);
	cont2 = 0;
	while (cont >= 1)
	{
		valor[cont2] = (nb / cont) + '0';
		nb = nb % cont;
		cont = cont / 10;
		cont2++;
	}
	valor[cont2] = '\0';
	return (valor);
}
