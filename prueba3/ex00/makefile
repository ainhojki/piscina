# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aolabarr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/29 11:58:25 by aolabarr          #+#    #+#              #
#    Updated: 2023/07/31 13:05:25 by aolabarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCE_1 = rush02_main.c check_errors.c rush02.c sr_fun1.c
SOURCE_2 = ft_clean_num.c sr_fun2.c sr_fun3.c
NAME = rush-02

all: $(NAME) 
	
$(NAME): $(SOURCE_1) $(SOURCE_2)
	$(CC) $(CFLAGS) $(SOURCE_1) $(SOURCE_2) -o $(NAME)

fclean:
	rm -f $(NAME)

clean:
	rm -f *.o
