/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_j.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:44:03 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:44:05 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_j1(char *str, int i)
{
	return (str[i + 5] == '#' && str[i + 9] == '#' && str[i + 10] == '#');
}

int		check_j2(char *str, int i)
{
	return (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 7] == '#');
}

int		check_j3(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 10] == '#');
}

int		check_j4(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 7] == '#');
}

/*
**	j1		j2		j3		j4
**	.#		#		##		###
**	.#		###		#		..#
**	##				#
*/
