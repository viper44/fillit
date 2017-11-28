/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_part_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 18:25:46 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 18:25:47 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static t_pack	varible(void)
{
	t_pack		pack;

	pack.n = 0;
	pack.h = 0;
	return (pack);
}

t_cordinate	**ft_figure_part_2(char **file, t_cordinate **s_a)
{
	t_pack	pack;
	t_cordinate **cordinate;

	pack = varible();
	cordinate = s_a;
	while (file[pack.n])
	{
		if (ft_iskorobka(&file[pack.n]))
			cordinate[pack.h] = ft_iskorobka(&file[pack.n]);
		if (ft_ismolnia_syda(&file[pack.n]))
			cordinate[pack.h] = ft_ismolnia_syda(&file[pack.n]);
		if (ft_ismolnia_tyda(&file[pack.n]))
			cordinate[pack.h] = ft_ismolnia_tyda(&file[pack.n]);
		if (ft_ispistolet_legit_l(&file[pack.n]))
			cordinate[pack.h] = ft_ispistolet_legit_l(&file[pack.n]);
		if (ft_ispistolet_legit_r(&file[pack.n]))
			cordinate[pack.h] = ft_ispistolet_legit_r(&file[pack.n]);
		if (ft_ispistolet_stoit_l(&file[pack.n]))
			cordinate[pack.h] = ft_ispistolet_stoit_l(&file[pack.n]);
		if (ft_ispistolet_stoit_r(&file[pack.n]))
			cordinate[pack.h] = ft_ispistolet_stoit_r(&file[pack.n]);	
		pack.h++;
		pack.n++;
	}
	return (cordinate);
}
