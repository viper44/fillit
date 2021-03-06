/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismolnia_syda.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:05:12 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:05:13 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_ismolnia_syda(char **file)
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
			if (MOLNIA_SYDA)
			{
				cordinate->first = 0;
				cordinate->second = 5;
				cordinate->third = 6;
				cordinate->fourth = 11;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
