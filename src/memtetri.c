/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 09:45:02 by nadam             #+#    #+#             */
/*   Updated: 2017/05/10 16:48:19 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

t_tetri	**memtetri(char *str)
{
	int		count;
	int		i;
	int		len;
	t_tetri	**tetris;

	len = ft_strlen(str);
	count = 0;
	i = 0;
	while (i <= len)
	{
		if (str[i] == '\n' || str[i] == '\0')
		{
			count++;
			i++;
		}
		i += 5;
	}
	tetris = (t_tetri **)ft_memalloc(sizeof(t_tetri *) * (count + 1));
	i = -1;
	while (++i < count)
	{
		tetris[i] = (t_tetri *)ft_memalloc(sizeof(t_tetri));
	}
	tetris[count] = 0;
	return (tetris);
}
