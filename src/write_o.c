/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:46:42 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:46:44 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

t_tetri	*write_o(t_tetri *tetri)
{
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 0;
	tetri->c4x = 1;
	tetri->c4y = 1;
	return (tetri);
}
