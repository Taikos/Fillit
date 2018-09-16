/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 15:24:53 by nadam             #+#    #+#             */
/*   Updated: 2017/05/10 16:39:20 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

t_tetri	**convert(char *str)
{
	t_tetri	**tetris;
	int		i;
	int		j;
	int		a;
	char	c;

	j = 0;
	c = 'A';
	a = 0;
	tetris = memtetri(str);
	while (tetris[a])
	{
		i = j;
		while (str[i] != '#')
			i++;
		tetris[a] = check_tetri(str, i, j + 21, tetris[a]);
		tetris[a]->letter = c;
		a++;
		c++;
		j += 21;
		if ((size_t)j > ft_strlen(str))
			break ;
	}
	return (tetris);
}
