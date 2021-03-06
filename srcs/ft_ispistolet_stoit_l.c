/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispistolet_stoit_l.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:42:46 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 17:42:47 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_ispistolet_stoit_l(char **file)
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
			if (PISTOLET_STOIT_L)
			{
				cordinate->first = 0;
				cordinate->second = 1;
				cordinate->third = 2;
				cordinate->fourth = 7;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
