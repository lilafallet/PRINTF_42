# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 15:19:15 by lfallet           #+#    #+#              #
#    Updated: 2020/02/12 17:04:15 by lfallet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBDIR = ./libft/
LIB = $(LIBDIR)libft.a

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

CC = gcc

INCLUDES = ./includes/

HEADER = $(INCLUDES)libftprintf.h

SRCS += conversion_csp.c
SRCS += conversion_di.c
SRCS += conversion_diuxminxmaj.c
SRCS += conversion_pxminxmaj.c
SRCS += utils_conversion.c
SRCS += libftprintf.c
SRCS += state_machine.c
SRCS += atoul.c
SRCS += ft_ltoa_base.c
SRCS += ft_ltoa_base_post.c
SRCS += ft_ultoa_base.c
SRCS += utils_precision_width.c
SRCS += utils_string.c

OBJ_DIR = ./objs/

vpath %.c sources/
vpath %.c sources/conversion/
vpath %.c sources/utils/
vpath %.c sources/parser/

OBJS = $(patsubst %.c, $(OBJ_DIR)%.o, $(SRCS))

all : $(OBJ_DIR) $(NAME)

$(OBJS): $(OBJ_DIR)%.o: %.c $(HEADER) 
	$(CC) -c $< $(CFLAGS) -I $(INCLUDES) -I $(LIBDIR) -o $@

$(NAME): $(LIB) $(OBJS)
	ar rcs $@ $^

$(OBJ_DIR):
	mkdir $@

$(LIB) : FORCE
	$(MAKE) -C $(LIBDIR)

FORCE :

clean :
	$(MAKE) clean -C $(LIBDIR)
	$(RM) -R $(OBJ_DIR)

fclean : clean
	$(MAKE) fclean -C $(LIBDIR)
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re FORCE
#.SILENT:
