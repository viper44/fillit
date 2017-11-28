
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:44:43 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/22 10:44:44 by ekruhliu         ###   ########.fr       */
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

static size_t	ft_strlen(char *str)
{
	size_t		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char			**ft_split(char *file)
{
	char		**s_a;
	int			cubes;
	int			i;
	int			n;
	int			train;

	i = 0;
	n = 0;
	train = 0;
	cubes = ft_cubes_count(file);
	if ((ft_strlen(file) + 1) % 21 != 0)
	{
		ERROR;
		return (NULL);
	}
	if (!(s_a =(char **)malloc(sizeof(char*) * (cubes + 1))))
	{
		free(s_a);
		return (NULL);
	}
	while (n < cubes)
	{
		if (!(s_a[n] = (char*)malloc(sizeof(char) * 21)))
		{
			while (n > 0)
			{
				free(s_a[n]);
				n--;
			}
			return (NULL);
		}
		while (i < 19)
			s_a[n][i++] = file[train++];
		s_a[n][i] = '\0';
		i = 0;
		n++;
		train += 2;
	}
	s_a[n] = 0;
	return (s_a);
}
