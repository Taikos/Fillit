/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_t.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:47:13 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:47:27 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

/*
**	t1		t2		t3		t4
**	.#		#		.#		###
**	###		##		##		.#.
**			#		.#
*/

t_tetri	*write_t1(t_tetri *tetri)
{
	tetri->c1x = 1;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 2;
	tetri->c4y = 1;
	return (tetri);
}

t_tetri	*write_t2(t_tetri *tetri)
{
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 0;
	tetri->c4y = 2;
	return (tetri);
}

t_tetri	*write_t3(t_tetri *tetri)
{
	tetri->c1x = 1;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 1;
	tetri->c4y = 2;
	return (tetri);
}

t_tetri	*write_t4(t_tetri *tetri)
{
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 0;
	tetri->c3x = 2;
	tetri->c3y = 0;
	tetri->c4x = 1;
	tetri->c4y = 1;
	return (tetri);
}
