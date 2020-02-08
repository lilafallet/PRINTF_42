# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/05 14:12:31 by lfallet           #+#    #+#              #
#    Updated: 2020/02/05 14:12:33 by lfallet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

CC = clang

INCLUDES = ./

HEADER = $(INCLUDES)libftprintf.h

SRCS += ft_atoi.c #A AJPOUTER AU FUR ET A MESURE

BONUS += ft_lstadd_back.c #A AJOUTER AU FURE ET A MESURE

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(BONUS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

bonus : $(OBJS_BONUS) $(OBJS)
	ar rcs $(NAME) $^

$(OBJS) : %.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

$(OBJS_BONUS) : %.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean :
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re
#.SILENT:
