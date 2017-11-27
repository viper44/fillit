/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_part_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 18:25:31 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 18:25:32 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_cordinate	**ft_figure_part_1(char **file, t_cordinate **s_a)
{
	int n;
	int h;
	t_cordinate **cordinate;

	n = 0;
	h = 0;
	cordinate = s_a;
	while (file[n])
	{
		if (ft_ispalka(file))
			cordinate[h] = ft_ispalka(file);
		h++;
		n++;
	}
	return (cordinate);
}
