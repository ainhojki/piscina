/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolabarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:35:24 by aolabarr          #+#    #+#             */
/*   Updated: 2023/07/31 13:10:43 by aolabarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

int	main(int argc, char **argv)
{
	char	ptr_num_src[100];
	char	ptr_dic[100];

	if (check_errors(argc, argv, &ptr_num_src[0], &ptr_dic[0]) == 0)
		return (1);
	if (prueba_dic(ptr_dic) != 0)
		run(ptr_num_src, ptr_dic);
	return (0);
}
