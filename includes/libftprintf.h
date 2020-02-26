/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:12:20 by lfallet           #+#    #+#             */
/*   Updated: 2020/02/26 13:33:47 by lfallet          ###   ########.fr       */
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

# define NB_FLAGS 3

# define MOD_MINUS		0x000001
# define MOD_ZERO		0x000002
# define MOD_DOT		0x000004

# define CONV_C			0x000100
# define CONV_S			0x000200
# define CONV_P			0x000400
# define CONV_D			0x000800
# define CONV_I			0x001000
# define CONV_U			0x002000
# define CONV_XMIN		0x004000
# define CONV_XMAJ		0x008000
# define CONV_PERCENT	0x010000
# define CONV_ERROR		0x020000
# define NB_CONV 9
# define STR_CONV "cspdiuxX%"

# define STAR	'*'

# define STR_MOD "-0."

# define BUFFER_SIZE 4096

# define FREE_S1 1
# define FREE_S2 2

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"
# include <stdarg.h>

enum				e_state
{
	LETTER,
	FLAG,
	CONVERSION,
	DO_CONV
};

typedef	struct	s_option
{
	int				flag;
	long			width;
	long			precision;
	int				len_conversion;
	int				post_negt;
	long			cpy_width;
	long			cpy_precision;
}				t_option;

typedef struct	s_state_machine
{
	char			buffer[BUFFER_SIZE];
	char			*out;
	enum e_state	state;
	size_t			len;
	size_t			len_out;
	struct s_option	option;
	char			char_error;
}				t_state_machine;

typedef	int		(*t_function)(char *, t_state_machine *, va_list *);

int				ft_printf(const char *format, ...);
int				is_conversion(char c);
void			ft_bzero(void *s, size_t n);
int				is_flag(char c);
void			fill_buffer(t_state_machine *machine, char c);
void			memjoin_free(char **dest, char *src, int len_dest, int len_src);
int				letter_function(char *str, t_state_machine *machine,
									va_list *argptr);
int				flag_function(char *str, t_state_machine *machine,
									va_list *argptr);
int				conversion_function(char *str, t_state_machine *machine,
									va_list *argptr);
char			*xminxmaj_conv(unsigned long x, t_option *option);
char			*c_conv(int c, t_option *option);
char			*s_conv(char *str, t_option *option);
char			*p_conv(unsigned long p, t_option *option);
char			*u_conv(unsigned long u, t_option *option);
char			*di_conv(long d, t_option *option);
char			*puxxmaj_conv(unsigned long diux, t_option *option);
int				len_width(int width);
char			*hub_strjoin_width_precision(char *str, t_option *option,
												long len_str);
void			preset_flag(t_state_machine *machine);
int				it_is_csp(int flag);
char			*process_conversion(va_list *argptr, t_state_machine *machine);
void			initialisation(t_state_machine *machine);
char			*ft_ultoa_base(unsigned long nb, int base);
char			*ft_ltoa_base(long nb, int base);
char			*ft_ltoa_base_post(long nb, int base);
char			*add_minus(char *new_str);
char			*strjoin_xminxmaj_conversion(char *new_str, t_option *origin,
												t_option *option, char *number);
char			*strjoin_p_conversion(char *new_str, t_option *origin,
										t_option *option, char *number);
unsigned long	atoul(const char *str);
void			get_p_width(t_option *option, long len);
char			*p_is_zero(t_option *option, t_option *cpy_option);
char			*d_inferior_zero(long d, t_option *option);
char			*d_superior_zero(t_option *option, long d);
void			get_width_x(t_option *option, long len);
void			get_precision_x(t_option *cpy_option, t_option *option,
									long len);
char			*x_is_zero(t_option *option, t_option *cpy_option);
int				string_str_zero(t_option *option, t_option *cpy_option,
									unsigned int x, long len);
int				get_size_of_nb(char *s);
int				is_number(char *str);

#endif
