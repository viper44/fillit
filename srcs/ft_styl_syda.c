/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_styl_syda.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:40:28 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 17:40:28 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_styl_syda(char **file)
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
			if (STYL_SYDA)
			{
				cordinate->first = 0;
				cordinate->second = 5;
				cordinate->third = 9;
				cordinate->fourth = 10;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
