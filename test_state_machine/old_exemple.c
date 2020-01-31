int	letter_or_flag(char *str, int i)
{
	if (str[i] == STR_MINUS || str[i] == STR_ZERO || str[i] == STR_DOT ||
		str[i] == STR_STAR)
			return (i + 1);
	return (i);
}

char 	*ex_printf(char *str, t_state_machine *machine)
{
	int	i;
	int	pourcent;

	i = 0;
	pourcent = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			printf("%c = ", str[i]); //DEBUG
			printf("letter\n"); //DEBUG
		}
		if (str[i] == '%')
		{
			pourcent = letter_or_flag(str, i + 1);
			printf("%c = ", str[i]); //DEBUG
			if (i + 1 != pourcent)
			{
				printf("pourcent\n"); //DEBUG
				i++;
				machine->state = FLAG;
				printf("%c = ", str[i]); //DEBUG
				printf("flag\n"); //DEBUG
			}
			else
				printf("letter\n"); //DEBUG
		}
		i++;
	}
	return (str);
}
