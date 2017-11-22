/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sharps_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:45:07 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/22 15:45:08 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_sharps_test(char **file)
{
	int i;
	int n;
	int sharps;
	int result;

	i = 0;
	n = 0;
	sharps = 0;
	result = 0;
	while (file[n])
	{
		while (file[n][i])
		{
			if (file[n][i] == '#')
				sharps++;
			if (sharps == 4)
				result++;
			i++;
		}
		sharps = 0;
		i = 0;
		n++;
	}
	if (result == n)
		return (1);
	else
		return (0);
}