# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 15:19:15 by lfallet           #+#    #+#              #
#    Updated: 2020/02/26 13:35:16 by lfallet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBDIR = ./libft/
LIB = $(LIBDIR)libft.a

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
ifeq ($(debug), 1)
	CFLAGS += -fsanitize=address,undefined
	CFLAGS += -g3
endif

CC = clang

INCLUDES = ./includes/

HEADER = $(INCLUDES)libftprintf.h

SRCS += libftprintf.c
SRCS += state_machine.c
SRCS += atoul.c
SRCS += ft_ltoa_base.c
SRCS += ft_ultoa_base.c
SRCS += utils_precision_width.c
SRCS += utils_string.c
SRCS += conversion_disc.c
SRCS += conversion_pux.c
SRCS += join_p_conversion.c
SRCS += join_x_conversion.c
SRCS += process_conversion.c
SRCS += utils_di_conversion.c
SRCS += utils_p_conversion.c
SRCS += utils_x_conversion.c
SRCS += ft_ltoa_base_post.c
SRCS += utils_number.c

SRCS += ft_atoi.c
SRCS += ft_bzero.c
SRCS += ft_calloc.c
SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isdigit.c
SRCS += ft_isprint.c
SRCS += ft_itoa.c
SRCS += ft_memccpy.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_memcpy.c
SRCS += ft_memmove.c
SRCS += ft_memset.c
SRCS += ft_putchar_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c
SRCS += ft_putstr_fd.c
SRCS += ft_split.c
SRCS += ft_strchr.c
SRCS += ft_strdup.c
SRCS += ft_strndup.c
SRCS += ft_strjoin.c
SRCS += ft_strlcat.c
SRCS += ft_strlcpy.c
SRCS += ft_strlen.c
SRCS += ft_strmapi.c
SRCS += ft_strncmp.c
SRCS += ft_strnstr.c
SRCS += ft_strrchr.c
SRCS += ft_strtrim.c
SRCS += ft_striter.c
SRCS += ft_substr.c
SRCS += ft_tolower.c
SRCS += ft_toupper.c
SRCS += ft_lstadd_back.c
SRCS += ft_lstadd_front.c
SRCS += ft_lstclear.c
SRCS += ft_lstdelone.c
SRCS += ft_lstiter.c
SRCS += ft_lstlast.c
SRCS += ft_lstmap.c
SRCS += ft_lstnew.c
SRCS += ft_lstsize.c

OBJ_DIR = ./objs/

vpath %.c sources/
vpath %.c sources/conversion/
vpath %.c sources/utils/
vpath %.c sources/parser/
vpath %.c libft/

OBJS = $(patsubst %.c, $(OBJ_DIR)%.o, $(SRCS))

all : $(OBJ_DIR) $(NAME)

$(OBJS): $(OBJ_DIR)%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c $<  -I $(INCLUDES) -I $(LIBDIR) -o $@

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

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
