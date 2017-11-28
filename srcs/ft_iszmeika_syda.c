/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iszmeika_syda.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:04:34 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:04:36 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_iszmeika_syda(char **file)
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
			if (ZMEIKA_SYDA)
			{
				cordinate->first = 0;
				cordinate->second = 1;
				cordinate->third = 6;
				cordinate->fourth = 7;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
