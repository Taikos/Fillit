/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newtab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 11:37:30 by nadam             #+#    #+#             */
/*   Updated: 2017/05/10 16:49:16 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

void	freetab(char **tab)
{
	free(*tab);
	*tab = NULL;
}

char	**newtab(int size)
{
	char	**new;
	int		i;
	char	*toto;

	toto = ft_strnew((size_t)size);
	i = -1;
	while (++i < size)
		toto = ft_strcat(toto, ".");
	i = -1;
	new = (char **)malloc(sizeof(char *) * (size + 1));
	while (++i < size)
	{
		new[i] = ft_strdup(toto);
	}
	new[i] = 0;
	return (new);
}

char	**renew(char **tab)
{
	int strlen;

	strlen = 0;
	while (tab[strlen])
		strlen++;
	freetab(tab);
	return (newtab(strlen));
}
