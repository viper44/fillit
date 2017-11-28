/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:42:08 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/21 13:42:09 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int i;
	int f;
	int n;
	char *map;
	int test_result;
	t_cordinate **xyx;

	i = 0;
	f = 0;
	n = 0;
	map = NULL;
	if (argc != 2)
		USAGE;
	test_result = 0;
	char **xxx = ft_open_read_close(argv[1]);
	if (xxx == NULL)
		return (0);
	if (ft_finale_grade(xxx) == 1)
		test_result = 1;
	else
		ERROR;
	xyx = ft_struct_split(xxx);
	if (test_result == 1)
	{
		map = ft_create_map(xxx);
		printf("%s\n", map);
	}
	if (map == NULL)
		return (0);
	if (test_result == 1)
	{
		xyx = ft_figure_part_1(xxx, xyx);
		xyx = ft_figure_part_2(xxx, xyx);
		xyx = ft_figure_part_3(xxx, xyx);
	}
	while (n < 2)
	{
		printf("%d %d %d %d\n", xyx[n]->first, xyx[n]->second, xyx[n]->third, xyx[n]->fourth);
		n++;
	}
	// if (test_result == 1)
	// 	ft_letters(xxx);
	// while (xxx[i])
	// {
	// 	printf("%s\n", xxx[i]);
	// 	i++;
	// }
	// while (xxx[i])
	// {
	// 	free(xxx[i]);
	// 	i++;
	// }
	return(0);
}
