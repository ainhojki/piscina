/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolabarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:43:46 by aolabarr          #+#    #+#             */
/*   Updated: 2023/07/31 12:19:07 by aolabarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

int	check_errors(int argc, char **argv, char *ptr_num, char *ptr_dic)
{
	char	*error;

	error = "Error\n";
	if (argc < 2 || argc > 3)
	{
		write(2, error, ft_strlen(error));
		return (0);
	}
	if (argc == 2)
	{
		ft_strcpy(ptr_num, argv[1]);
		ft_strcpy(ptr_dic, "numbers.dict");
	}
	else if (argc == 3)
	{
		ft_strcpy(ptr_num, argv[2]);
		ft_strcpy(ptr_dic, argv[1]);
	}
	if (ft_str_is_numeric(ptr_num) == 0 || ft_unsigned_int(ptr_num) == 0)
	{
		write(2, error, ft_strlen(error));
		return (0);
	}
	return (1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int	ft_str_is_numeric(char *str)
{
	int	is_num;
	int	i;

	i = 0;
	is_num = 1;
	while (str[i] != '\0')
	{
		is_num = 0;
		if (str[i] >= '0' && str[i] <= '9')
			is_num = 1;
		if (is_num == 0)
			return (is_num);
		i++;
	}
	return (is_num);
}

int	ft_unsigned_int(char *str)
{
	if (ft_strlen(str) > 10)
		return (0);
	else if (ft_strlen(str) == 10 && (str[0] - 48) >= 4)
		return (0);
	return (1);
}
