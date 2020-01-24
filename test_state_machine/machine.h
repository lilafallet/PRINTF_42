#ifndef MACHINE_H
# define MACHINE_H

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

# define STR_BONJOUR1	"bonjour"
# define STR_BONJOUR2	"hello"
# define STR_BONJOUR3 	"coucou"
# define NB_BONJOUR 	3

# define STR_CAVA1	"ca va ?"
# define STR_CAVA2	"comment tu vas ?"
# define STR_CAVA3 	"bien ou quoi ?"
# define STR_CAVA4 	"bien la mif ?"
# define NB_CAVA 	4

# define STR_AUREVOIR	"salut"
# define NB_AUREVOIR 1

# define RESTART	"again"

enum	e_state
{
	BONJOUR,	//0
	CAVA,		//1
	AUREVOIR,	//2
	EXIT		//3
};

typedef struct s_state_machine
{
	enum e_state state; 
	
}				t_state_machine; /*structure t_state_machine contenant
								  l'enum e_state et donc les differents etats*/


typedef	void	(*t_function)(char *, t_state_machine *);
/*typedef de pointeur sur fonction qui prend en parametre un char * (la ligne)
et aussi la structure t_state machine contenant l'enum e_state et donc les
differents etats*/

#endif
