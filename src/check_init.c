/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:43:26 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:43:28 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int	check_init(char *str, int i)
{
	return (check_i1(str, i) ||
			check_i2(str, i) ||
			check_s1(str, i) ||
			check_s2(str, i) ||
			check_z1(str, i) ||
			check_z2(str, i) ||
			check_o(str, i) ||
			check_l1(str, i) ||
			check_l2(str, i) ||
			check_l3(str, i) ||
			check_l4(str, i) ||
			check_j1(str, i) ||
			check_j2(str, i) ||
			check_j3(str, i) ||
			check_j4(str, i) ||
			check_t1(str, i) ||
			check_t2(str, i) ||
			check_t3(str, i) ||
			check_t4(str, i));
}
