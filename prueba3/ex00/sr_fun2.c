/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:24:49 by ssalgado          #+#    #+#             */
/*   Updated: 2023/07/30 16:24:51 by ssalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

void	ft_p(char *str)
{
	char	c;
	char	t;
	int		cont;

	cont = 0;
	t = ' ';
	while (*(str + cont) != '\0')
	{
		c = str[cont];
		write(1, &c, 1);
		cont++;
	}
	write(1, &t, 1);
}

void	f_t2(char *str, char *str2)
{
	ft_p(str);
	ft_p(str2);
}

void	only_one(int n, char pal[][20], int *dir)
{
	ft_p(pal[f_te(n, dir)]);
}

char	*lee_dic(char *lectura, char *nomdic)
{
	int		file;

	file = open(nomdic, 0);
	if (file != -1)
	{
		if (read(file, lectura, 1000) != -1)
		{
			close(file);
			return (lectura);
		}
	}
	ft_p("Dict Error\n");
	close (file);
	return (0);
}

void	give_miles(int *cont, int size)
{
	cont[1] = 1000;
	cont[0] = 3;
	while (cont[0] < size)
	{
		cont[1] = cont[1] * 1000;
		cont[0] = cont[0] + 3;
	}
	if (size % 3 == 0)
		cont[0] = 3;
	else
		cont[0] = size % 3;
}
