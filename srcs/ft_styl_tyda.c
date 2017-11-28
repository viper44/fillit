/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_styl_tyda.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:40:07 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 17:40:08 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_styl_tyda(char **file)
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
			if (STYL_TYDA)
			{
				cordinate->first = 0;
				cordinate->second = 5;
				cordinate->third = 10;
				cordinate->fourth = 11;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
