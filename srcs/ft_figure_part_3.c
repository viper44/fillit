/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_part_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 11:52:31 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/28 11:52:32 by ekruhliu         ###   ########.fr       */
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

t_cordinate	**ft_figure_part_3(char **file, t_cordinate **s_a)
{
	t_pack	pack;
	t_cordinate **cordinate;

	pack = varible();
	cordinate = s_a;
	while (file[pack.n])
	{
		if (ft_iszmeika_syda(&file[pack.n]))
			cordinate[pack.h] = ft_iszmeika_syda(&file[pack.n]);
		if (ft_iszmeika_tyda(&file[pack.n]))
			cordinate[pack.h] = ft_iszmeika_tyda(&file[pack.n]);
		if (ft_styl_syda(&file[pack.n]))
			cordinate[pack.h] = ft_styl_syda(&file[pack.n]);
		if (ft_styl_tyda(&file[pack.n]))
			cordinate[pack.h] = ft_styl_tyda(&file[pack.n]);
		if (ft_istopor_tyda(&file[pack.n]))
			cordinate[pack.h] = ft_istopor_tyda(&file[pack.n]);	
		pack.h++;
		pack.n++;
	}
	return (cordinate);
}
