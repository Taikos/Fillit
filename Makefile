# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/24 09:48:30 by nadam             #+#    #+#              #
#    Updated: 2017/05/10 17:19:27 by arguerin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc
FLAG = -Wall -Wextra -Werror

#Includes------------------------------------------#
DIRINC = ./includes/
INCS = libft.h \
	fill.h
CINC = $(addprefix -I,$(DIRINC))

#Library---------------------------------------------#
DIRLIB = ./lib/
SRCSLIB = ft_memalloc.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_strcat.c \
	ft_strdup.c \
	ft_strlen.c \
	ft_strnew.c

CLIB = $(addprefix $(DIRLIB),$(SRCSLIB))

#SRCS---------------------------------------------#
DIRSRCS = ./src/
SRCS = check_i.c \
	check_j.c \
	check_l.c \
	check_o.c \
	check_s.c \
	check_t.c \
	check_tetri.c \
	check_z.c \
	checkfile.c \
	convert.c \
	findsquare.c \
	memtetri.c \
	newtab.c \
	printsquare.c \
	printtetri.c \
	puttetri.c \
	readfile.c \
	rmtetri.c \
	tabout.c \
	usage.c \
	validfile.c \
	write_o.c \
	write_l.c \
	write_j.c \
	write_t.c \
	write_i.c \
	write_s.c \
	write_z.c \
	check_init.c \
	main.c

CSRCS = $(addprefix $(DIRSRCS),$(SRCS))

LIBOBJ = $(SRCSLIB:.c=.o)
OBJ = $(SRCS:.c=.o)
DIROBJS = ./
OBJS = $(addprefix $(DIROBJS),$(OBJ))

#Program---------------------------------------------#

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(CLIB) $(OBJS) $(CINC) -o $(NAME)

%.o : $(DIRSRCS)%.c
	$(CC) $(FLAG) $(CINC) -c $<

clean :
	rm -rf $(OBJS) $(LIBOBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
