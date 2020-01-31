#include <stdlib.h>
#include <stdio.h> //DEBUG
#include "libftprintf.h"
#include "libft.h"

int	letter_function(char *str, t_state_machine *machine)
{
	//printf("%c = ", *str); //DEBUG
	if (*str == '%')
	{
		machine->state = FLAG;
	//printf("pourcent\n"); //DEBUG
	}
	if (*str != '%')
	{
	//printf("letter\n"); //DEBUG
	fill_buffer(machine, *str);
	//printf("char = %c\n", machine->buffer[machine->len]); //DEBUG
	//printf("string = %s\n", machine->buffer); //DEBUG
	//printf("int len = %d\n", machine->len); //DEBUG
	//printf("\n"); //DEBUG
	}
	return (1);
}

int	flag_function(char *str, t_state_machine *machine)
{
	int			what_flag;

	what_flag = is_flag(*str);
	if (what_flag != -1)
	{
	//printf("%c = flag \n", *str); //DEBUG
	//printf("what flag = %d\n", what_flag); //DEBUG
	machine->flag |= 1 << what_flag;
	//printf("calc flag = %d\n\n", machine->flag); //DEBBUG
	return (1);
	}
	else if (*str >= '1' && *str <= '9')
	{
		//machine->index_width =
		machine->state = CONVERSION;
		machine->width = ft_atoi((const char *)str);	
 		return (len_width(machine->width));
	}
	machine->state = CONVERSION;
	return (0);
}

int	conversion_function(char *str, t_state_machine *machine)
{
	int		what_conv;

	if ((what_conv = is_conversion(*str)) != -1)
	{
		machine->flag |= (1 << what_conv) << 8;
		//printf("%c = conversion\n", *str); //DEBUG
		//printf("calc_flag = %d\n", machine->flag); //DEBUG
		machine->state = DO_CONV;
		return (1);
	}
	machine->state = ERROR;
	return (0);
}

int	error_function(char *str, t_state_machine *machine)
{
	machine->state = LETTER;
	//printf("%c = ", *str); //DEBUG
	//printf("error\n"); //DEBUG
	return (1);
}