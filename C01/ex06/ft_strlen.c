/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainhmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:34:05 by ainhmart          #+#    #+#             */
/*   Updated: 2023/07/27 14:49:47 by ainhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

/*int	main(void)
{
	char	*str;

	str = "este mundo esta loco";
	ft_strlen(str);
	printf("frase: %s -- num chars :%d", str, ft_strlen(str));
	return (0);
}*/
