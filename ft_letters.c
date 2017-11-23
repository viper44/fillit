/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_letters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:34:48 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/23 17:34:49 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_letters(char **file)
{
	int i;
	int n;
	char letter;
	char **result;

	i = 0;
	n = 0;
	letter = 65;
	while (file[n])
	{
		while (file[n][i])
		{
			if (file[n][i] == '#')
				file[n][i] = letter;
			i++;
		}
		i = 0;
		letter = letter + 1;
		n++;
	}
	result = file;
	return (result);
}
