/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:52:50 by ssalgado          #+#    #+#             */
/*   Updated: 2023/07/30 15:52:52 by ssalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

void	set_num(int *dest, char *nomdic)
{
	int		cont;
	int		cont2;
	int		temp;
	char	lectura[1000];

	lee_dic(lectura, nomdic);
	cont = 1;
	cont2 = 1;
	temp = 0;
	dest[0] = '0';
	while (lectura[cont] != '\0')
	{
		if (lectura[cont] >= '0' && lectura[cont] <= '9')
			temp = temp * 10 + (lectura[cont] - '0');
		else if (temp != 0)
		{
			dest[cont2] = temp;
			temp = 0;
			cont2++;
		}
		cont++;
	}
}

void	set_text(char pal[][20], char *nomdic)
{
	int		cont;
	int		cont2;
	int		cont3;
	char	lectura[1000];

	cont = 0;
	cont2 = 0;
	cont3 = 0;
	lee_dic(lectura, nomdic);
	while (lectura[cont] != '\0')
	{
		if (lectura[cont] >= 'a' && lectura[cont] <= 'z')
		{
			pal[cont3][cont2] = lectura[cont];
			cont2++;
		}
		else if (cont2 > 0)
		{
			pal[cont3][cont2] = '\0';
			cont3++;
			cont2 = 0;
		}
		cont++;
	}
}

void	numeros(char *v, int *n, char pal[][20], int *dir)
{
	while (n[2] < n[0])
	{
		if (n[0] - n[2] == 2)
		{
			if (v[n[2]] == '1')
			{
				n[3] = (v[n[2]] - '0') * 10 + (v[n[2] + 1] - '0');
				ft_p(pal[f_te(n[3], dir)]);
				n[2]++;
			}
			else if (v[n[2]] != '0')
				ft_p(pal[f_te((v[n[2]] - '0') * ctd(n[0], n[2]), dir)]);
		}
		else if (n[0] - n[2] == 3)
		{
			if (v[n[2]] != '0')
				f_t2(pal[f_te(v[n[2]] - '0', dir)],
					pal[f_te(ctd(n[0], n[2]), dir)]);
		}
		else if (v[n[2]] != '0')
			ft_p(pal[f_te(v[n[2]] - '0', dir)]);
		n[2]++;
	}
	if (n[1] > 1 && (v[n[2] - 1] != '0' || v[n[2] - 2] != '0'))
		ft_p(pal[f_te(n[1], dir)]);
}

void	run(char *valor, char *nomdic)
{
	int		dir[32];
	char	pal[32][20];
	int		cont[4];

	set_num(dir, nomdic);
	set_text(pal, nomdic);
	cont[2] = 0;
	if (ft_strlen(valor) > 9)
		valor = is_billion(valor, pal, dir);
	if (ft_strlen(valor) == 1)
		only_one(valor[0] - '0', pal, dir);
	else
	{
		give_miles(cont, ft_strlen(valor));
		while (cont[1] > 1)
		{
			cont[1] = cont[1] / 1000;
			numeros(valor, cont, pal, dir);
			cont[0] = cont[0] + 3;
			if (cont[0] > 3)
				cont[2] = cont[0] - 3;
		}
	}
}
