/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 10:24:37 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/26 10:24:38 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

char	*ft_create_map(char **file)
{
    int i;
    char *map;
    int t;
    int n;
    int m;

    m = 0;
    t = 0;
    i = 0;
    n = 0;
    while (file[n])
    	n++;
    while (i * i <= n * 4)
        i++;
    map =(char*)malloc(sizeof(char) * ((i * i) + i));
    t = i * i + i ;
    while (m < t - 1)
    {
        if ((m + 1) % (i + 1)  == 0 && m != 0)
            map[m] = '\n';
        else
            map[m] = '.';
        m++;
    } 
    return (map);
}
