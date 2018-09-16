/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:32:32 by arguerin          #+#    #+#             */
/*   Updated: 2017/05/10 16:32:49 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_H
# define FILL_H

# include "libft.h"
# include <fcntl.h>

typedef struct	s_tetri
{
	char	letter;
	int		c1x;
	int		c1y;
	int		c2x;
	int		c2y;
	int		c3x;
	int		c3y;
	int		c4x;
	int		c4y;
}				t_tetri;

int				validfile(char *str);
int				validhash(char *str);
int				validdot(char *str);
int				validentry(char *str);
void			freetab(char **tab);
int				find(char **tab, t_tetri **tetris, int pos, int size);
void			printtetri(t_tetri **tetri);
int				tabout(int size, int x, int y, t_tetri *tetri);
char			*readfile(int fd);
int				checkfile(char	*str);
void			usage(void);
char			**newtab(int size);
char			**renew(char **tab);
int				puttetri(char **tab, t_tetri *tetri, int x, int y);
void			rmtetri(char **tab, t_tetri *tetri, int x, int y);
t_tetri			**convert(char *str);
char			**fsquare(t_tetri **tetris);
t_tetri			**memtetri(char *str);
void			printsquare(char **tab);
t_tetri			*write_i1(t_tetri *tetri);
t_tetri			*write_i2(t_tetri *tetri);
t_tetri			*write_s1(t_tetri *tetri);
t_tetri			*write_s2(t_tetri *tetri);
t_tetri			*write_z1(t_tetri *tetri);
t_tetri			*write_z2(t_tetri *tetri);
t_tetri			*write_o(t_tetri *tetri);
t_tetri			*write_t1(t_tetri *tetri);
t_tetri			*write_t2(t_tetri *tetri);
t_tetri			*write_t3(t_tetri *tetri);
t_tetri			*write_t4(t_tetri *tetri);
t_tetri			*write_l1(t_tetri *tetri);
t_tetri			*write_l2(t_tetri *tetri);
t_tetri			*write_l3(t_tetri *tetri);
t_tetri			*write_l4(t_tetri *tetri);
t_tetri			*write_j1(t_tetri *tetri);
t_tetri			*write_j2(t_tetri *tetri);
t_tetri			*write_j3(t_tetri *tetri);
t_tetri			*write_j4(t_tetri *tetri);
int				check_o(char *str, int i);
int				check_i1(char *str, int i);
int				check_i2(char *str, int i);
int				check_s1(char *str, int i);
int				check_s2(char *str, int i);
int				check_z1(char *str, int i);
int				check_z2(char *str, int i);
int				check_t1(char *str, int i);
int				check_t2(char *str, int i);
int				check_t3(char *str, int i);
int				check_t4(char *str, int i);
int				check_l1(char *str, int i);
int				check_l2(char *str, int i);
int				check_l3(char *str, int i);
int				check_l4(char *str, int i);
int				check_j1(char *str, int i);
int				check_j2(char *str, int i);
int				check_j3(char *str, int i);
int				check_j4(char *str, int i);
t_tetri			*relou(char	*str, int i, int tmax, t_tetri *tetri);
t_tetri			*relou2(char *str, int i, int tmax, t_tetri *tetri);
t_tetri			*check_tetri(char *str, int i, int tmax, t_tetri *tetri);
int				check_init(char *str, int i);

#endif
