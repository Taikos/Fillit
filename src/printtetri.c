/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printtetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 14:57:08 by nadam             #+#    #+#             */
/*   Updated: 2017/05/10 16:50:17 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

void	printtetri(t_tetri **tetris)
{
	int	i;

	i = 0;
	while (tetris[i])
	{
		ft_putchar(tetris[i]->letter);
		ft_putchar('\n');
		i++;
	}
}
