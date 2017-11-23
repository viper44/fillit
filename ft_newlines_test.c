/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlines_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:45:34 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/22 15:45:35 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_newlines_test(char **file)
{
	int i;
	int n;
	int newlines;
	int result;

	i = 0;
	n = 0;
	newlines = 0;
	result = 0;
	while (file[n])
	{
		while (file[n][i])
		{
			if (file[n][i] == '\n')
				newlines++;
			if (newlines == 3)
			{
				result++;
				newlines = 0;
			}
			i++;
		}
		i = 0;
		n++;
	}
	if (result == n)
		return (1);
	else
		return (0);
}