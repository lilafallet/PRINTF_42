NAME = libftprintf.a

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

CC = clang

INCLUDES = ./

HEADER = $(INCLUDES)libftprintf.h

SRCS += ft_tolower.c #A RAJOUTER AU FUR ET A MESURE#

BONUS += ft_lstsize.c #A RAJOUTER AU FUR ET A MESURE#

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
