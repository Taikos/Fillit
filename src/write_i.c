/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:45:24 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:45:37 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

t_tetri	*write_i1(t_tetri *tetri)
{
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 0;
	tetri->c3y = 2;
	tetri->c4x = 0;
	tetri->c4y = 3;
	return (tetri);
}

t_tetri	*write_i2(t_tetri *tetri)
{
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 0;
	tetri->c3x = 2;
	tetri->c3y = 0;
	tetri->c4x = 3;
	tetri->c4y = 0;
	return (tetri);
}
