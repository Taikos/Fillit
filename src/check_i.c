/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:42:53 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:42:58 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_i1(char *str, int i)
{
	return (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 15] == '#');
}

int		check_i2(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 3] == '#');
}