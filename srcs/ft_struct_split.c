/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 16:08:24 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 16:08:25 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate			**ft_struct_split(char **file)
{
	t_cordinate		**s_a;
	int			n;
	int			x;

	n = 0;
	x = 0;
	while (file[x])
		x++;
	if (!(s_a =(t_cordinate**)malloc(sizeof(t_cordinate*) * x)))
	{
		free(s_a);
		return (NULL);
	}
	return (s_a);
}
