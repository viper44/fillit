# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/21 13:16:23 by ekruhliu          #+#    #+#              #
#    Updated: 2017/11/21 13:16:24 by ekruhliu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
//LIB = header.a
HEADER = header.h
FLAGS = -Wall -Wextra -Werror
HDR = -c -I $(HEADER)
MAIN = main.c
SRC = ft_open_read_close.c ft_split.c ft_dots_test.c ft_sharps_test.c ft_newlines_test.c \
		ft_figure_test.c ft_finale_grade.c main.c \

OBJ = ft_open_read_close.o ft_split.o ft_dots_test.o ft_sharps_test.o ft_newlines_test.o \
		ft_figure_test.o ft_finale_grade.o main.o \

all:$(NAME)

$(NAME):
		@ gcc $(FLAGS) $(SRC) $(HDR)
		@ gcc $(OBJ) -o $(NAME)

clean:
		@ /bin/rm -f $(OBJ)
		
fclean: clean
		@ /bin/rm -f $(NAME)

re: fclean all
