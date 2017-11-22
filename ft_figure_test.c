/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:19:03 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/22 17:19:03 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_figure_test(char **file)
{
	int i;
	int n;
	int figure;
	int result;

	i = 0;
	n = 0;
	figure = 0;
	result = 0;
	while (file[n])
	{
		while (file[n][i])
		{
			if (PALKA || PALKA_LEGIT || ZMEIKA_SYDA || ZMEIKA_TYDA || MOLNIA_TYDA || MOLNIA_SYDA
				|| KOROBKA || TOPOR_TYDA || TOPOR_SYDA || STYL_TYDA || STYL_SYDA || PISTOLET_LEGIT_R
				|| PISTOLET_STOIT_R || PISTOLET_LEGIT_L || PISTOLET_STOIT_L || FUCK_YOU_SNIZU
				|| FUCK_YOU_SVERHY || FUCK_YOU_SPRAVA || FUCK_YOU_SLEVA)
				figure++;
			if (figure == 1)
				result++;
			i++;
		}
		figure = 0;
		i = 0;
		n++;
	}
	if (result == n)
		return (1);
	else
		return (0);
}
