/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainhmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:27:20 by ainhmart          #+#    #+#             */
/*   Updated: 2023/07/19 14:14:09 by ainhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n >= 0)
	{
		write(1, &pos, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(3);
	ft_is_negative(-7);
	return (0);
}*/
