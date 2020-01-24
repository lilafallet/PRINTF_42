#include <stdlib.h>
#include "libft.h"
#include "libftprintf.h"

int	printf(const char *format, ...)
{
	static t_function	function[5] = {letter_function, format_function,
										flag_function, conversion_function,
										error_function};
	t_state_machine	machine;

	machine.state = LETTER;
	return (EXIT_SUCCESS);
}
