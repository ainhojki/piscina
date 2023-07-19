/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainhmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:07:28 by ainhmart          #+#    #+#             */
/*   Updated: 2023/07/19 13:09:59 by ainhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	let;

	let = 'z';
	while (let >= 'a')
	{
		write(1, &let, 1);
			let--;
	}
}
/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
