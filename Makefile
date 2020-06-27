# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 15:19:15 by lfallet           #+#    #+#              #
#    Updated: 2020/06/27 21:18:01 by lfallet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBDIR = ./libft/
LIB = $(LIBDIR)libft.a

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -fPIC
ifeq ($(debug), 0)
	CFLAGS += -g3
else ifeq ($(debug), 1)
	CFLAGS += -fsanitize=address,undefined
	CFLAGS += -g3
else ifeq ($(debug), 2)
	CFLAGS += -fsanitize=address,undefined
	CFLAGS += -g3
	CFLAGS += -pedantic
	CFLAGS += -ansi
else ifeq ($(debug), 3)
	CFLAGS += -fsanitize=address,undefined
	CFLAGS += -g3
	CFLAGS += -pedantic
	CFLAGS += -ansi
	CFLAGS += -Wpadded
else ifeq ($(debug), 4)
	CFLAGS += -fsanitize=address,undefined
	CFLAGS += -g3
	CFLAGS += -pedantic
	CFLAGS += -ansi
	CFLAGS += -Wpadded
	CFLAGS += -Weverything
endif
ifeq ($(err), 0)
	CFLAGS += -g3
else
	CFLAGS += -Werror
endif

CC = clang

INCLUDES = ./includes/
INCLUDES_BONUS = ./includes_bonus/

HEADER = $(INCLUDES)libftprintf.h
HEADER_BONUS = $(INCLUDES_BONUS)libftprintf_bonus.h

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

SRCS_LIB += ft_atoi.c
SRCS_LIB += ft_bzero.c
SRCS_LIB += ft_calloc.c
SRCS_LIB += ft_isalnum.c
SRCS_LIB += ft_isalpha.c
SRCS_LIB += ft_isascii.c
SRCS_LIB += ft_isdigit.c
SRCS_LIB += ft_isprint.c
SRCS_LIB += ft_itoa.c
SRCS_LIB += ft_memccpy.c
SRCS_LIB += ft_memchr.c
SRCS_LIB += ft_memcmp.c
SRCS_LIB += ft_memcpy.c
SRCS_LIB += ft_memmove.c
SRCS_LIB += ft_memset.c
SRCS_LIB += ft_putchar_fd.c
SRCS_LIB += ft_putendl_fd.c
SRCS_LIB += ft_putnbr_fd.c
SRCS_LIB += ft_putstr_fd.c
SRCS_LIB += ft_split.c
SRCS_LIB += ft_strchr.c
SRCS_LIB += ft_strdup.c
SRCS_LIB += ft_strndup.c
SRCS_LIB += ft_strjoin.c
SRCS_LIB += ft_strlcat.c
SRCS_LIB += ft_strlcpy.c
SRCS_LIB += ft_strlen.c
SRCS_LIB += ft_strmapi.c
SRCS_LIB += ft_strncmp.c
SRCS_LIB += ft_strnstr.c
SRCS_LIB += ft_strrchr.c
SRCS_LIB += ft_strtrim.c
SRCS_LIB += ft_striter.c
SRCS_LIB += ft_substr.c
SRCS_LIB += ft_tolower.c
SRCS_LIB += ft_toupper.c
SRCS_LIB += ft_lstadd_back.c
SRCS_LIB += ft_lstadd_front.c
SRCS_LIB += ft_lstclear.c
SRCS_LIB += ft_lstdelone.c
SRCS_LIB += ft_lstiter.c
SRCS_LIB += ft_lstlast.c
SRCS_LIB += ft_lstmap.c
SRCS_LIB += ft_lstnew.c
SRCS_LIB += ft_lstsize.c

SRCS_BONUS += libftprintf_bonus.c
SRCS_BONUS += state_machine_bonus.c
SRCS_BONUS += atoul_bonus.c
SRCS_BONUS += ft_ltoa_base_bonus.c
SRCS_BONUS += ft_ultoa_base_bonus.c
SRCS_BONUS += utils_precision_width_bonus.c
SRCS_BONUS += utils_string_bonus.c
SRCS_BONUS += conversion_disc_bonus.c
SRCS_BONUS += conversion_pux_bonus.c
SRCS_BONUS += join_p_conversion_bonus.c
SRCS_BONUS += join_x_conversion_bonus.c
SRCS_BONUS += process_conversion_bonus.c
SRCS_BONUS += utils_di_conversion_bonus.c
SRCS_BONUS += utils_p_conversion_bonus.c
SRCS_BONUS += utils_x_conversion_bonus.c
SRCS_BONUS += ft_ltoa_base_post_bonus.c
SRCS_BONUS += utils_number_bonus.c

OBJ_DIR = ./objs/

vpath %.c sources/
vpath %.c sources/conversion/
vpath %.c sources/utils/
vpath %.c sources/parser/

vpath %.c sources_bonus/
vpath %.c sources_bonus/conversion_bonus
vpath %.c sources_bonus/utils_bonus/
vpath %.c sources_bonus/parser_bonus/

vpath %.c libft/

OBJS = $(patsubst %.c, $(OBJ_DIR)%.o, $(SRCS))
OBJS_BONUS = $(patsubst %.c, $(OBJ_DIR)%.o, $(SRCS_BONUS))
OBJS_LIB = $(patsubst %.c, $(OBJ_DIR)%.o, $(SRCS_LIB))

all : $(OBJ_DIR) $(NAME)

$(OBJS_LIB): $(OBJ_DIR)%.o: %.c libft/libft.h
	$(CC) $(CFLAGS) -c $<  -I $(LIBDIR) -o $@

$(OBJS): $(OBJ_DIR)%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $<  -I $(INCLUDES) -I $(LIBDIR) -o $@

$(OBJS_BONUS): $(OBJ_DIR)%.o: %.c $(HEADER_BONUS)
	$(CC) $(CFLAGS) -c $<  -I $(INCLUDES_BONUS) -I $(LIBDIR) -o $@

$(NAME): $(OBJS_LIB) $(OBJS) 
	ar rcs $@ $^

bonus: $(OBJ_DIR) $(OBJS_LIB) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_LIB) $(OBJS_BONUS)

$(OBJ_DIR):
	mkdir $@

clean :
	$(RM) -R $(OBJ_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean
	$(MAKE)

.PHONY: all clean fclean re FORCE bonus
#.SILENT:
