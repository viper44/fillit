/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfuck_sverhy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:43:36 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 17:43:36 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	*ft_isfuck_sverhy(**file)
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
			if (FUCK_YOU_SVERHY)
			{
				cordinate->first = 0;
				cordinate->second = 4;
				cordinate->thirt = 5;
				cordinate->fourth = 6;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
}
