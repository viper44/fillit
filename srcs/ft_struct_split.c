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

// static int		ft_cubes_count(const char *file)
// {
//     int			i;
//     int			n;
//     i = 0;
//     n = 0;
//     while (file[i] != '\0')
//     {
//         if ((file[i] == '\n' && file[i + 1] == '\n'))
//             n++;
//         i++;
//     }
// 	return (n + 1);
// }

t_cordinate			**ft_struct_split(char **file)
{
	t_cordinate		**s_a;
	//int			cubes;
	int			n;
	int			x;

	n = 0;
	x = 0;
	while (file[x])
		x++;
	//cubes = ft_cubes_count(file);
	if (!(s_a =(t_cordinate**)malloc(sizeof(t_cordinate*) * x)))
	{
		free(s_a);
		return (NULL);
	}
	return (s_a);
}
