/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:26:50 by lfallet           #+#    #+#             */
/*   Updated: 2020/01/30 14:03:41 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

# ifndef SUCCESS
#  define SUCCESS 0
# endif

# ifndef FAILURE
#  define FAILURE -1
# endif

# define FLAG_MINUS 0x0001
# define FLAG_ZERO 0x0002
# define FLAG_DOT 0x0004
# define FLAG_STAR 0x0008
# define NB_FLAGS 4

# define CONV_C 0x0010
# define CONV_S 0x0020
# define CONV_P 0x0040
# define CONV_D 0x0080
# define CONV_I 0x0100
# define CONV_U 0x0200
# define CONV_XMIN 0x0400
# define CONV_XMAJ 0x0800
# define CONV_PERCENT 0x1000
# define NB_CONV 9
# define STR_CONV "cspdiuxX%"

# define STR_FLAG "-0.*"

# define BUFFER_SIZE 4096

# define FREE_S1 1
# define FREE_S2 2

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

enum	e_state
{
	LETTER, //0
	FLAG, //1
	CONVERSION, //2
	ERROR //3
};

typedef struct	s_state_machine
{
	char			buffer[BUFFER_SIZE];
	char			*out;
	enum e_state	state;
	int				flag;
	int				len;
	int				len_out;
}				t_state_machine;

typedef	int		(*t_function)(char *, t_state_machine *);
int				is_conversion(char c);
void			ft_bzero(void *s, size_t n);
int				is_flag(char c);
void			fill_buffer(t_state_machine *machine, char c);
void			memjoin_free(char **dest, char *src, int len_dest, int len_src);
int				ft_printf(const char *format, ...);
int				letter_function(char *str, t_state_machine *machine);
int				flag_function(char *str, t_state_machine *machine);
int				conversion_function(char *str, t_state_machine *machine);
int				error_function(char *str, t_state_machine *machine);

#endif
