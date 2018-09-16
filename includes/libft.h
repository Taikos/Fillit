/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 19:08:11 by arguerin          #+#    #+#             */
/*   Updated: 2017/04/18 19:11:56 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s);
char			*ft_strcat(char *dest, const char *src);
void			*ft_memalloc(size_t size);
char			*ft_strnew(size_t size);
void			ft_putchar(char c);
void			ft_putstr(char const *s);

#endif
