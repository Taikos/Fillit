/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_l.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:43:51 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:43:53 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_l1(char *str, int i)
{
	return (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 11] == '#');
}

int		check_l2(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 5] == '#');
}

/*
**	l1		l2		l3		l4
**	#		###		##		..#
**	#		#		.#		###
**	##				.#
*/

int		check_l3(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 11] == '#');
}

int		check_l4(char *str, int i)
{
	return (str[i + 3] == '#' && str[i + 4] == '#' && str[i + 5] == '#');
}
