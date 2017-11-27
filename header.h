/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:16:01 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/21 13:16:02 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HEADER_C
# define HEADER_C

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct	s_cordinate
{
	int			first;
	int			second;
	int			third;
	int			fourth;
}				t_cordinate;
# define BUFF_SIZE 10000
# define ERROR write(1, "error\n", 6);
# define USAGE write(1, "usage: ./fillit source_file\n", 28);
# define PALKA ((file[n][i] == '#') && (file[n][i + 5] == '#') && (file[n][i + 10] == '#') && (file[n][i + 15] == '#'))
# define PALKA_LEGIT ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i + 2] == '#') && (file[n][i + 3] == '#'))
# define ZMEIKA_SYDA ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i + 6] == '#') && (file[n][i + 7] == '#'))
# define ZMEIKA_TYDA ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i + 4] == '#') && (file[n][i + 5] == '#'))
# define MOLNIA_TYDA ((file[n][i] == '#') && (file[n][i + 4] == '#') && (file[n][i + 5] == '#') && (file[n][i + 9] == '#'))
# define MOLNIA_SYDA ((file[n][i] == '#') && (file[n][i + 5] == '#') && (file[n][i + 6] == '#') && (file[n][i + 11] == '#'))
# define KOROBKA ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i + 5] == '#') && (file[n][i + 6] == '#'))
# define TOPOR_TYDA ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i + 5] == '#') && (file[n][i + 10] == '#'))
# define TOPOR_SYDA ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i + 6] == '#') && (file[n][i + 11] == '#'))
# define STYL_TYDA ((file[n][i] == '#') && (file[n][i + 5] == '#') && (file[n][i + 10] == '#') && (file[n][i + 11] == '#'))
# define STYL_SYDA ((file[n][i] == '#') && (file[n][i + 5] == '#') && (file[n][i + 9] == '#') && (file[n][i + 10] == '#'))
# define PISTOLET_LEGIT_R ((file[n][i] == '#') && (file[n][i + 5] == '#') && (file[n][i + 6] == '#') && (file[n][i + 7] == '#'))
# define PISTOLET_STOIT_R ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i + 2] == '#') && (file[n][i + 5] == '#'))
# define PISTOLET_LEGIT_L ((file[n][i] == '#') && (file[n][i + 3] == '#') && (file[n][i + 4] == '#') && (file[n][i + 5] == '#'))
# define PISTOLET_STOIT_L ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i + 2] == '#') && (file[n][i + 7] == '#'))
# define FUCK_YOU_SNIZU ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i + 2] == '#') && (file[n][i + 6] == '#'))
# define FUCK_YOU_SVERHY ((file[n][i] == '#') && (file[n][i + 4] == '#') && (file[n][i + 5] == '#') && (file[n][i + 6] == '#'))
# define FUCK_YOU_SPRAVA ((file[n][i] == '#') && (file[n][i + 5] == '#') && (file[n][i + 6] == '#') && (file[n][i + 10] == '#'))
# define FUCK_YOU_SLEVA ((file[n][i] == '#') && (file[n][i + 4] == '#') && (file[n][i + 5] == '#') && (file[n][i + 10] == '#'))

int			ft_check_valid_file(char **s);
char		**ft_open_read_close(char *file_name);
char		**ft_split(char const *s);
int			ft_dots_test(char **file);
int			ft_newlines_test(char **file);
int			ft_sharps_test(char **file);
int			ft_finale_grade(char **file);
int			ft_figures_test(char **file);
int			ft_maps_number_test(char **file);
char		**ft_letters(char **file);
t_cordinate	*ft_ispalka(char **file);
t_cordinate	**ft_figure_part_1(char **file, t_cordinate **s_a);
t_cordinate	**ft_struct_split(char **file);
// t_cordinate	*ft_is_h_palka(**file);
// t_cordinate	*ft_isfuck_sleva(**file);
// t_cordinate	*ft_isfuck_snizu(**file);
// t_cordinate	*ft_isfuck_sprava(**file);
// t_cordinate	*ft_isfuck_sverhy(**file);
// t_cordinate	*ft_iskorobka(**file);
// t_cordinate	*ft_ismolnia_syda(**file);
// t_cordinate	*ft_ismolnia_tyda(**file);
// t_cordinate	*ft_ispalka(**file);
// t_cordinate	*ft_ispistolet_legit_l(**file);
// t_cordinate	*ft_ispistolet_legit_r(**file);
// t_cordinate	*ft_ispistolet_stoit_l(**file);
// t_cordinate	*ft_ispistolet_stoit_r(**file);
// t_cordinate	*ft_istopor_syda(**file);
// t_cordinate	*ft_istopor_tyda(**file);
// t_cordinate	*ft_iszmeika_syda(**file);
// t_cordinate	*ft_iszmeika_tyda(**file);
// t_cordinate	*ft_styl_syda(**file);
// t_cordinate	*ft_styl_tyda(**file);

#endif