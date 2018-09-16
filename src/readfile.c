/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:50:41 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:51:04 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

char	*readfile(int fd)
{
	char *str;

	str = (char *)malloc(sizeof(char) * 546);
	if (-1 == read(fd, str, 546))
		return (NULL);
	return (str);
}
