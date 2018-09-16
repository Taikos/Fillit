/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 10:06:20 by nadam             #+#    #+#             */
/*   Updated: 2017/05/10 16:53:23 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int	validhash(char *str)
{
	int	i;
	int hash;

	i = 0;
	hash = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			hash++;
			i++;
		}
		else if (str[i] == '.' || str[i] == '\n' || str[i] == '\0')
			i++;
		else
			return (0);
	}
	if (hash == 0 || hash % 4 != 0)
		return (0);
	return (1);
}

int	validdot(char *str)
{
	int	i;
	int dot;

	i = 0;
	dot = 0;
	while (str[i])
	{
		if (str[i] == '.')
		{
			dot++;
			i++;
		}
		else if (str[i] == '#' || str[i] == '\n' || str[i] == '\0')
			i++;
		else
			return (0);
	}
	if (dot == 0 || dot % 12 != 0)
		return (0);
	return (1);
}

int	validentry(char *str)
{
	int	i;
	int entry;

	i = 0;
	entry = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			if (str[i + 1] == '\n' && str[i + 2] == '\n')
				return (0);
			entry++;
			i++;
		}
		else if (str[i] == '.' || str[i] == '#' || str[i] == '\0')
			i++;
		else
			return (0);
	}
	if ((entry - 4) % 5 != 0)
		return (0);
	return (1);
}

int	validfile(char *str)
{
	int	i;
	int j;
	int len;

	len = (int)ft_strlen(str);
	if (!(validdot(str) && validentry(str) && validhash(str)))
		return (0);
	i = 0;
	j = 0;
	while (j < len)
	{
		i = j;
		while (str[i] != '#' && str[i])
			i++;
		if (!(check_init(str, i)))
			return (0);
		j += 21;
	}
	return (1);
}
