#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"


enum	e_state
{
	BONJOUR,
	CAVA,
	AUREVOIR
};

typedef struct s_state_machine
{
	enum e_state state;
	
}				t_state_machine;

char	*parser(char *line)
{
	char	*answer = NULL;

	return (answer);
}


int	main(void)
{
	char			*line = NULL;
	char			*answer = NULL;
	t_state_machine	machine;

	machine.state = BONJOUR;
	while (get_next_line(0, &line) > 0)
	{
		answer = parser(line);
		free(answer);	
		free(line);
		line = NULL;
	} 
	return (EXIT_SUCCESS);
}
