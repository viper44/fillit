/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_h_palka.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:03:24 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:03:26 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_is_h_palka(char **file)
{
	int i;
	int n;
	t_cordinate *cordinate;

	cordinate = (t_cordinate*)malloc(sizeof(t_cordinate));
	i = 0;
	n = 0;
	while (file[n])
	{
		while (file[n][i])
		{
			if (PALKA_LEGIT)
			{
				cordinate->first = 0;
				cordinate->second = 1;
				cordinate->third = 2;
				cordinate->fourth = 3;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
