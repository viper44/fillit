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
HEADER = header.h
FLAGS = -Wall -Wextra -Werror
HDR = -c -I $(HEADER)
MAIN = main.c
SRC = ./srcs/ft_open_read_close.c ./srcs/ft_split.c ./srcs/ft_dots_test.c ./srcs/ft_sharps_test.c ./srcs/ft_newlines_test.c \
		./srcs/ft_figures_test.c ./srcs/ft_finale_grade.c ./srcs/ft_maps_number_test.c ./srcs/ft_letters.c ./srcs/ft_ispalka.c \
		./srcs/ft_figure_part_1.c ./srcs/ft_struct_split.c main.c \

OBJ = ft_open_read_close.o ft_split.o ft_dots_test.o ft_sharps_test.o ft_newlines_test.o \
		ft_figures_test.o ft_finale_grade.o ft_maps_number_test.o ft_letters.o ft_ispalka.o \
		ft_figure_part_1.o ft_struct_split.o main.o \

all:$(NAME)

$(NAME):
		@ gcc $(FLAGS) $(SRC) $(HDR)
		@ gcc $(OBJ) -o $(NAME)
		@ /bin/rm -f $(OBJ)

clean:
		@ /bin/rm -f $(OBJ)
		
fclean: clean
		@ /bin/rm -f $(NAME)

re: fclean all
