/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dots_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:44:45 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/22 15:44:46 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_dots_test(char **file)
{
	int i;
	int n;
	int dots;
	int result;

	i = 0;
	n = 0;
	dots = 0;
	result = 0;
	while (file[n])
	{
		while (file[n][i])
		{
			if (file[n][i] == '.')
				dots++;
			if (dots == 12 || dots == 16)
				result++;
			i++;
		}
		dots = 0;
		i = 0;
		n++;
	}
	if (result == n)
		return (1);
	else
		return (0);
}
