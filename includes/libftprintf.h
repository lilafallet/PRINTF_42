/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:26:50 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/03 17:19:30 by lfallet          ###   ########.fr       */
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

# define NB_FLAGS 4

# define MOD_MINUS		0x000001
# define MOD_ZERO		0x000002
# define MOD_DOT		0x000004
# define MOD_STAR		0x000008

# define CONV_C			0x000100
# define CONV_S			0x000200
# define CONV_P			0x000400
# define CONV_D			0x000800
# define CONV_I			0x001000
# define CONV_U			0x002000
# define CONV_XMIN		0x004000
# define CONV_XMAJ		0x008000
# define CONV_PERCENT	0x001000
# define NB_CONV 9
# define STR_CONV "cspdiuxX%"

# define STR_MOD "-0.*"

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
	ERROR, //3
	DO_CONV //4
};

typedef	struct	s_option
{
	int				flag;
	int				width;
	int				precision;
}					t_option;

typedef struct	s_state_machine
{
	char			buffer[BUFFER_SIZE];
	char			*out;
	enum e_state	state;
	int				len;
	int				len_out;
	struct s_option	option;
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
int				xminxmaj_conv(int x, int flag, char **output);
int				c_conv(int c, t_option *option, char **output);
int				s_conv(char *s, t_option *option, char **output,
						t_state_machine *machine);
int				p_conv(void *p, t_option *option, char **output);
int				u_conv(unsigned long u, int flag, char **output);
int				d_conv(int d, int flag, char **output);
int				i_conv(int i, int flag, char **output);
int				diuxminxmaj_conv(long diux, t_option *option, char **output);
int				len_width(int width);
char			*hub_strjoin_width_precision(char *str, t_option *option);

#endif
