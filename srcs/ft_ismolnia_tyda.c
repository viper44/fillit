/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismolnia_tyda.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:04:59 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:05:00 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_ismolnia_tyda(**file)
{
	int i;
	int n;
	t_cordinate* cordinate;

	cordinate = (t_cordinate*)malloc(sizeof(t_cordinate));
	i = 0;
	n = 0;
	while (file[n])
	{
		while (file[n][i])
		{
			if (MOLNIA_TYDA)
			{
				cordinate->first = 0;
				cordinate->second = 4;
				cordinate->thirt = 5;
				cordinate->fourth = 9;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
}
