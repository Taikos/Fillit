/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_l.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:46:25 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:46:33 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

/*
**	l1		l2		l3		l4
**	#		###		##		..#
**	#		#		.#		###
**	##				.#
*/

t_tetri	*write_l1(t_tetri *tetri)
{
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 0;
	tetri->c3y = 2;
	tetri->c4x = 1;
	tetri->c4y = 2;
	return (tetri);
}

t_tetri	*write_l2(t_tetri *tetri)
{
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 0;
	tetri->c3x = 2;
	tetri->c3y = 0;
	tetri->c4x = 0;
	tetri->c4y = 1;
	return (tetri);
}

t_tetri	*write_l3(t_tetri *tetri)
{
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 0;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 1;
	tetri->c4y = 2;
	return (tetri);
}

t_tetri	*write_l4(t_tetri *tetri)
{
	tetri->c1x = 2;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 2;
	tetri->c4y = 1;
	return (tetri);
}
