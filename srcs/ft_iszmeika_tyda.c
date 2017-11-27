/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iszmeika_tyda.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:03:44 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:03:45 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_iszmeika_tyda(**file)
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
			if (ZMEIKA_TYDA)
			{
				cordinate->first = 0;
				cordinate->second = 1;
				cordinate->thirt = 4;
				cordinate->fourth = 5;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
}
