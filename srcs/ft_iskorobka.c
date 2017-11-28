/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iskorobka.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:05:25 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:05:26 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_iskorobka(char **file)
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
			if (KOROBKA)
			{
				cordinate->first = 0;
				cordinate->second = 1;
				cordinate->third = 5;
				cordinate->fourth = 6;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
