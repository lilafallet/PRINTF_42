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
	/*bonjour, hello, coucou*/
	int					i = 0;

	while (i < NB_BONJOUR) /*3*/
	{
		if (ft_strequ(line, answer[i]) == TRUE) 
		/*premier cas: si line == answer[0] -> STR_BONJOUR1(bonjour)*/
		{
			printf("Salut\n");
			machine->state = CAVA; /*si line est answer sont pareille, alors on
			passe l'etat de la machine a CAVA*/
		}
		i++;
	}
	if (machine->state == BONJOUR) /*si line est answer n'ont jamais ete == et
		est donc reste dans l'etat BONJOUR*/
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
	if (machine->state == CAVA) /*si line et answer n'ont jamais ete == et est
	donc reste dans l'etat CAVA*/
	{
		printf("Malpoli, Au revoir\n");
		machine->state = EXIT; /*on passe l'etat de la machine a EXIT*/
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
			machine->state = EXIT; /*fin de la conversation finie donc on passe
			dans l'etat EXIT*/
		}
		i++;
	}
	if (ft_strequ(line, RESTART) == TRUE)
		machine->state = BONJOUR; /*si "again", repasse dans l'etat de depart*/
	if (machine->state == AUREVOIR) /*si line et answer n'ont jamais ete == et
	est donc reste dans l'etat AUREVOIR*/
		printf("... oui ?\n");
}

int	main(void)
{
	char				*line = NULL;
	static t_function	function[3] = {bonjour_function, cava_function,
										aurevoir_function};
	/*tableau de pointeur sur fonction a 3 cases donc 3 fonctions*/

	t_state_machine	machine; /*variable de structure t_state_machine pour
	pouvoir avoir acces a la structure*/
	machine.state = BONJOUR; /*initialise le premier etat (state) a BONJOUR*/
	while (machine.state != EXIT && get_next_line(0, &line) > 0)
	/*tant que l'etat est different de l'etat EXIT blablabla*/
	{
		function[machine.state](line, &machine);
		/*function[BONJOUR (0)] --> bonjour_function || &machine = machine.state
		  function[CAVA (1)] --> cava_function
		  function[AUREVOIR (2)] --> aurevoir_function*/
		free(line);
		line = NULL;
	} 
	/*quitte la boucle quand on est dans l'etat EXIT*/
	return (EXIT_SUCCESS);
}
