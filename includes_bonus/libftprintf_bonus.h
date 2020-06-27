/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_bonus.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 15:18:17 by lfallet           #+#    #+#             */
/*   Updated: 2020/06/27 21:16:35 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_BONUS_H
# define LIBFTPRINTF_BONUS_H

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

# include <stdint.h>

# define NB_FLAGS 3

# define MOD_HH			0x000001
# define MOD_LL			0x000002
# define MOD_H			0x000004
# define MOD_L			0x000008
# define MOD_MINUS		0x000010
# define MOD_ZERO		0x000020
# define MOD_DOT		0x000040

# define CONV_C			0x000100
# define CONV_S			0x000200
# define CONV_P			0x000400
# define CONV_D			0x000800
# define CONV_I			0x001000
# define CONV_U			0x002000
# define CONV_XMIN		0x004000
# define CONV_XMAJ		0x008000
# define CONV_N			0x010000
# define CONV_PERCENT	0x020000
# define CONV_ERROR		0x040000
# define NB_CONV 10
# define STR_CONV "cspdiuxXn%"

# define STAR	'*'

# define STR_HH "hh"
# define STR_LL "ll"
# define STR_H "h"
# define STR_L "l"
# define STR_MIN "-"
# define STR_ZERO "0"
# define STR_DOT "."

# define BUFFER_SIZE 4096

# define FREE_S1 1
# define FREE_S2 2

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
	size_t			width;
	size_t			precision;
	size_t			cpy_width;
	size_t			cpy_precision;
	size_t			len_conversion;
	int				flag;
	int				post_negt;
	size_t			len_dest;
	size_t			len_src;
}				t_option;

typedef struct	s_state_machine
{
	char			buffer[BUFFER_SIZE];
	char			*out;
	size_t			len;
	size_t			len_out;
	struct s_option	option;
	enum e_state	state;
	char			char_error;
	char			pad[3];
}				t_state_machine;

typedef	int		(*t_function)(char *, t_state_machine *, va_list *);

int				ft_printf(const char *format, ...);
int				is_conversion(const char c);
void			ft_bzero(void *s, size_t n);
int				is_flag(const char *s);
void			fill_buffer(t_state_machine *machine, char c);
void			memjoin_free_option(char **dest, char *src, t_option *option);
void			memjoin_free(char **dest, char *src, size_t len_dest,
								size_t len_src);
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
size_t			len_width(size_t width);
char			*hub_strjoin_width_precision(char *str, t_option *option,
												size_t len_str);
void			preset_flag(t_state_machine *machine);
int				it_is_csp(int flag);
char			*process_conversion(va_list *argptr, t_state_machine *machine);
void			initialisation(t_state_machine *machine);
char			*ft_ultoa_base(unsigned long nb, unsigned long base);
char			*ft_ltoa_base(long nb, long base);
char			*ft_ltoa_base_post(long nb, long base);
char			*add_minus(char *new_str);
char			*strjoin_xminxmaj_conversion(char *new_str, t_option *origin,
												t_option *option, char *number);
char			*strjoin_p_conversion(char *new_str, t_option *origin,
										t_option *option, char *number);
unsigned long	atoul(const char *str);
void			get_p_width(t_option *option, size_t len);
char			*p_is_zero(t_option *option, t_option *cpy_option);
char			*d_inferior_zero(long d, t_option *option);
char			*d_superior_zero(t_option *option, long d);
void			get_width_x(t_option *option, size_t len);
void			get_precision_x(t_option *cpy_option, t_option *option,
									size_t len);
char			*x_is_zero(t_option *option, t_option *cpy_option);
int				string_str_zero(t_option *option, t_option *cpy_option,
									unsigned int x, size_t len);
size_t			get_size_of_nb(char *s);
int				is_number(char *str);
size_t			initialisation_x_conversion(t_option *option,
												t_option *cpy_option,
												char **number, unsigned long x);
size_t			initialisation_p_conversion(t_option *option,
												t_option *cpy_option,
												char **number, unsigned long p);
void			initialisation_wipre_p_conversion(t_option *option,
													t_option *cpy_option,
													size_t len,
													unsigned long p);
void			*ft_memdup(void *s, size_t len);
char			*n_conv(long *ptr, t_option *option, size_t len);

#endif
