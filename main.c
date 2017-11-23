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
	int test_result;

	i = 0;
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
	if (test_result == 1)
		ft_letters(xxx);
	while (xxx[i])
	{
		printf("%s\n", xxx[i]);
		i++;
	}
	return(0);
}
