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
		./srcs/ft_figure_part_1.c ./srcs/ft_figure_part_2.c ./srcs/ft_figure_part_3.c ./srcs/ft_struct_split.c ./srcs/ft_is_h_palka.c \
		./srcs/ft_isfuck_sleva.c ./srcs/ft_isfuck_snizu.c ./srcs/ft_isfuck_sprava.c ./srcs/ft_isfuck_sverhy.c ./srcs/ft_iskorobka.c ./srcs/ft_ismolnia_syda.c \
		./srcs/ft_ismolnia_tyda.c ./srcs/ft_ispistolet_legit_l.c ./srcs/ft_ispistolet_legit_r.c ./srcs/ft_ispistolet_stoit_l.c \
		./srcs/ft_ispistolet_stoit_r.c ./srcs/ft_istopor_syda.c ./srcs/ft_istopor_tyda.c ./srcs/ft_iszmeika_syda.c ./srcs/ft_iszmeika_tyda.c \
		./srcs/ft_styl_syda.c ./srcs/ft_styl_tyda.c  ./srcs/ft_cubes_count.c ./srcs/ft_create_map.c main.c \

OBJ = ft_open_read_close.o ft_split.o ft_dots_test.o ft_sharps_test.o ft_newlines_test.o \
		ft_figures_test.o ft_finale_grade.o ft_maps_number_test.o ft_letters.o ft_ispalka.o \
		ft_figure_part_1.o ft_figure_part_2.o ft_struct_split.o ft_is_h_palka.o ft_isfuck_sleva.o \
		ft_isfuck_snizu.o ft_isfuck_sprava.o ft_isfuck_sverhy.o ft_iskorobka.o ./ft_ismolnia_syda.o \
		./ft_ismolnia_tyda.o ./ft_ispistolet_legit_l.o ./ft_ispistolet_legit_r.o ./ft_ispistolet_stoit_l.o \
		./ft_ispistolet_stoit_r.o ./ft_istopor_syda.o ./ft_istopor_tyda.o ./ft_iszmeika_syda.o ./ft_iszmeika_tyda.o \
		./ft_styl_syda.o ./ft_styl_tyda.o ft_figure_part_3.o ./ft_cubes_count.o ./ft_create_map.o main.o \

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
