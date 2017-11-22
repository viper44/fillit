/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finale_grade.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:40:02 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/22 15:40:13 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_finale_grade(char **file)
{
	int	test_1;
	int test_2;
	int test_3;
	int test_4;
	char **my_file;
	int result;

	result = 0;
	my_file = file;
	test_1 = ft_dots_test(my_file);
	printf("%d\n", test_1);
	test_2 = ft_sharps_test(my_file);
	printf("%d\n", test_2);
	test_3 = ft_newlines_test(my_file);
	printf("%d\n", test_3);
	test_4 = ft_figure_test(my_file);
	printf("%d\n", test_4);
	if (test_1 == 1 && test_2 == 1 && test_3 == 1 && test_4 == 1)
		result = 1;
	return (result); 
}
