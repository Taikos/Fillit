/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_z.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:47:36 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:47:46 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

/*
**	s1		s2
**	#.		.##
**	##		##.
**	.#
*/

t_tetri	*write_z1(t_tetri *tetri)
{
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 1;
	tetri->c4y = 2;
	return (tetri);
}

t_tetri	*write_z2(t_tetri *tetri)
{
	tetri->c1x = 1;
	tetri->c1y = 0;
	tetri->c2x = 2;
	tetri->c2y = 0;
	tetri->c3x = 0;
	tetri->c3y = 1;
	tetri->c4x = 1;
	tetri->c4y = 1;
	return (tetri);
}
