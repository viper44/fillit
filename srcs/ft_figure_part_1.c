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

static t_pack	varible(void)
{
	t_pack		pack;

	pack.n = 0;
	pack.h = 0;
	return (pack);
}

t_cordinate	**ft_figure_part_1(char **file, t_cordinate **s_a)
{
	t_pack	pack;
	t_cordinate **cordinate;

	pack = varible();
	cordinate = s_a;
	while (file[pack.n])
	{
		if (ft_ispalka(&file[pack.n]))
			cordinate[pack.h] = ft_ispalka(&file[pack.n]);
		if (ft_is_h_palka(&file[pack.n]))
			cordinate[pack.h] = ft_is_h_palka(&file[pack.n]);
		if (ft_isfuck_sleva(&file[pack.n]))
			cordinate[pack.h] = ft_isfuck_sleva(&file[pack.n]);
		if (ft_isfuck_snizu(&file[pack.n]))
			cordinate[pack.h] = ft_isfuck_snizu(&file[pack.n]);
		if (ft_isfuck_sprava(&file[pack.n]))
			cordinate[pack.h] = ft_isfuck_sprava (&file[pack.n]);
		if (ft_isfuck_sverhy(&file[pack.n]))
			cordinate[pack.h] = ft_isfuck_sverhy(&file[pack.n]);
		if (ft_istopor_syda(&file[pack.n]))
			cordinate[pack.h] = ft_istopor_syda(&file[pack.n]);	
		pack.h++;
		pack.n++;
	}
	return (cordinate);
}
