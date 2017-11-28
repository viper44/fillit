/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istopor_tyda.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:39:41 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 17:39:42 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_istopor_tyda(char **file)
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
			if (TOPOR_TYDA)
			{
				cordinate->first = 0;
				cordinate->second = 1;
				cordinate->third = 5;
				cordinate->fourth = 10;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
