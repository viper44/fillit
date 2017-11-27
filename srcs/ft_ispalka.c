/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispalka.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:02:34 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:02:35 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_ispalka(char **file)
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
			if (PALKA)
			{
				cordinate->first = 0;
				cordinate->second = 5;
				cordinate->third = 10;
				cordinate->fourth = 15;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
