/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_header.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolabarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:26:40 by aolabarr          #+#    #+#             */
/*   Updated: 2023/07/31 13:12:48 by aolabarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_HEADER_H
# define RUSH02_HEADER_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
int		ft_str_is_numeric(char *str);
int		check_errors(int argc, char **argv, char *ptr_num, char *ptr_dic);
int		ft_unsigned_int(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_clean_num(char *dest, char *str);

void	ft_p(char *str);
int		ctd(int to, int pos);
int		f_te(int n, int *dir);
char	*int_tostr(char *valor, int nb);
void	only_one(int n, char pal[][20], int *dir);
char	*lee_dic(char *lectura, char *nomdic);
void	give_miles(int *cont, int size);
void	f_t2(char *str, char *str2);
char	*is_billion(char *valor, char pal[][20], int *dir);
int		prueba_dic(char *nomdic);
void	set_num(int *dest, char *nomdic);
void	set_text(char pal[][20], char *nomdic);
void	numeros(char *v, int *n, char pal[][20], int *dir);
void	run(char *valor, char *nomdic);
int		size_of_int(int n);

#endif
