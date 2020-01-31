#include "libftprintf.h"
#include <stdio.h> //PRINTF

int		c_conv(int c, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_C = %d\n", c); //DEBUG
	(void)c;
	(void)flag;
	return (len);
}

int		s_conv(char *s, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_S = %s\n", s); //DEBUG
	(void)s;
	(void)flag;
	return (len);
}

int		p_conv(void *p, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_P = %p\n", p); //DEBUG
	(void)p;
	(void)flag;
	return (len);
}

int		diuxminxmaj_conv(long diux, t_state_machine *machine, char **output)
{
	int		len;

	len = 0;
	if (machine->flag & CONV_D)
		len = d_conv(diux, machine->flag, output);
	else if (machine->flag & CONV_I)
		len = i_conv(diux, machine->flag, output);
	else if (machine->flag & CONV_U)
		len = u_conv(diux, machine->flag, output);
	else if ((machine->flag & CONV_XMIN) || (machine->flag & CONV_XMAJ))
		len = xminxmaj_conv(diux, machine->flag, output);
	(void)diux;
	return (len);
}
