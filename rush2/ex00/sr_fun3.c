/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sr_fun3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:05:50 by ssalgado          #+#    #+#             */
/*   Updated: 2023/07/31 12:05:52 by ssalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

char	*is_billion(char *valor, char pal[][20], int *dir)
{
	int	num;

	num = valor[0] - '0';
	ft_p(pal[f_te(num, dir)]);
	ft_p(pal[f_te(1000000000, dir)]);
	valor++;
	return (valor);
}

int	prueba_dic(char *nomdic)
{
	int		file;
	char	lectura[2];
	char	*error;

	error = "Dict Error\n";
	file = open(nomdic, 0);
	if (file != -1)
	{
		if (read(file, lectura, 2) == -1)
		{
			write(2, error, ft_strlen(error));
			close(file);
			return (0);
		}
		else
			return (1);
	}
	else
		write(2, error, ft_strlen(error));
	close (file);
	return (0);
}
