/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:41:17 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:42:19 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*str;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (0);
		str = readfile(fd);
		if (validfile(str) && checkfile(str))
		{
			printsquare(fsquare(convert(str)));
		}
		else
			ft_putstr("error\n");
		close(fd);
	}
	else
		usage();
	return (0);
}
