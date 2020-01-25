#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

# define FLAG_MINUS 0x0001
# define FLAG_ZERO 0x0002
# define FLAG_DOT 0x0004
# define FLAG_STAR 0x0008

# define CONV_C 0x0010
# define CONV_S 0x0020
# define CONV_P 0x0040
# define CONV_D 0x0080
# define CONV_I 0x0100
# define CONV_U 0x0200
# define CONV_x 0x0400
# define CONV_X 0x0800
# define CONV_PERCENT 0x1000
# define CONV_ALL "cspdiuxX%"

# define STR_MINUS "-"
# define STR_ZERO "0"
# define STR_DOT "."
# define STR_STAR "*"

enum	e_state
{
	LETTER, //0
	FLAG, //1
	CONVERSION, //2
	ERROR //3
};

typedef struct s_state_machine
{
	enum e_state state;
}				t_state_machine;

typedef	void	(*t_function)(char *, t_state_machine *);

#endif