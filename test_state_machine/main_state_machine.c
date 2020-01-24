#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"
#include "machine.h"

int		ft_strequ(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (TRUE);
	else if (s1 == NULL || s2 == NULL)
		return (FALSE);
	while ((*s1 != '\0' || *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 == *s2);
}


void	bonjour_function(char *line, t_state_machine *machine)
{
	static char	*answer[NB_BONJOUR] = {STR_BONJOUR1, STR_BONJOUR2,
												STR_BONJOUR3};
	int					i = 0;

	while (i < NB_BONJOUR)
	{
		if (ft_strequ(line, answer[i]) == TRUE)
		{
			printf("Salut\n");
			machine->state = CAVA;
		}
		i++;
	}
	if (machine->state == BONJOUR)
		printf("Je n'aime pas qu'on ne me dise pas bonjour...\n");
}

void	cava_function(char *line, t_state_machine *machine)
{
	static char	*answer[NB_CAVA] = {STR_CAVA1, STR_CAVA2,
												STR_CAVA3, STR_CAVA4};
	int					i = 0;

	while (i < NB_CAVA)
	{
		if (ft_strequ(line, answer[i]) == TRUE)
		{
			printf("ca va bien!\n");
			machine->state = AUREVOIR;
		}
		i++;
	}
	if (machine->state == CAVA)
	{
		printf("Malpoli, Au revoir\n");
		machine->state = EXIT;
	}
}

void	aurevoir_function(char *line, t_state_machine *machine)
{
	static char	*answer[NB_AUREVOIR] = {STR_AUREVOIR};
	int					i = 0;

	while (i < NB_AUREVOIR)
	{
		if (ft_strequ(line, answer[i]) == TRUE)
		{
			printf("Allez salut!\n");
			machine->state = EXIT;
		}
		i++;
	}
	if (ft_strequ(line, RESTART) == TRUE)
		machine->state = BONJOUR;
	if (machine->state == AUREVOIR)
		printf("... oui ?\n");
}

int	main(void)
{
	char				*line = NULL;
	static t_function	function[3] = {bonjour_function, cava_function,
										aurevoir_function};
	t_state_machine	machine;

	machine.state = BONJOUR;
	while (machine.state != EXIT && get_next_line(0, &line) > 0)
	{
		function[machine.state](line, &machine);
		free(line);
		line = NULL;
	} 
	return (EXIT_SUCCESS);
}
