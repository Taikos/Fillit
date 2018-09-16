/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_t.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:44:50 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:44:51 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_t1(char *str, int i)
{
	return (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 6] == '#');
}

int		check_t2(char *str, int i)
{
	return (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 10] == '#');
}

int		check_t3(char *str, int i)
{
	return (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 10] == '#');
}

int		check_t4(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 6] == '#');
}

/*
**	t1		t2		t3		t4
**	.#		#		.#		###
**	###		##		##		.#.
**			#		.#
*/
