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

# define BUFF_SIZE 10000
# define ERROR "error"
# define PALKA ((file[n][i] == '#') && (file[n][i + 5] == '#') && (file[n][i + 10] == '#') && (file[n][i + 15] == '#'))
# define PALKA_LEGIT ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i + 2] == '#') && (file[n][i + 3] == '#'))
# define ZMEIKA_SYDA ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i + 6] == '#') && (file[n][i + 7] == '#'))
# define ZMEIKA_TYDA ((file[n][i] == '#') && (file[n][i + 1] == '#') && (file[n][i - 3] == '#') && (file[n][i - 4] == '#'))
# define MOLNIA_TYDA ((file[n][i] == '#') && (file[n][i - 4] == '#') && (file[n][i - 5] == '#') && (file[n][i - 9] == '#'))
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

int		ft_check_valid_file(char **s);
char	**ft_open_read_close(char *file_name);
char	**ft_split(char const *s);
int		ft_dots_test(char **file);
int		ft_newlines_test(char **file);
int		ft_sharps_test(char **file);
int		ft_finale_grade(char **file);
int		ft_figure_test(char **file);

#endif