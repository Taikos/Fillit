/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findsquare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 10:29:25 by nadam             #+#    #+#             */
/*   Updated: 2017/05/10 16:48:53 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		find(char **tab, t_tetri **tetris, int pos, int size)
{
	int	x;
	int	y;

	x = pos / size;
	y = pos % size;
	if (!(*tetris))
		return (1);
	while (tab[y][x])
	{
		if (puttetri(tab, *tetris, y, x))
		{
			if (find(tab, tetris + 1, 0, size))
				return (1);
			rmtetri(tab, *tetris, y, x);
		}
		pos++;
		x = pos / size;
		y = pos % size;
	}
	return (0);
}

char	**fsquare(t_tetri **tetris)
{
	char	**tab;
	char	**tmp;
	int		i;

	i = 2;
	tab = newtab(2);
	while (i < 26 * 2)
	{
		if (find(tab, tetris, 0, i))
			break ;
		else
		{
			i++;
			freetab(tab);
			tmp = newtab(i);
			tab = tmp;
		}
	}
	return (tab);
}
