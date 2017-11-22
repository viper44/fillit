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
	(void)argc;
	test_result = 0;
	char **xxx = ft_open_read_close(argv[1]);
	while (xxx[i])
	{
		printf("%s\n", xxx[i]);
		i++;
	}
	if (ft_finale_grade(xxx) == 1)
	{
		printf("%s\n", "valid");
		test_result = 1;
	}
	else
		printf("%s\n", "unvalid");
	return(test_result);
}
