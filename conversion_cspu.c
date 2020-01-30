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

int		u_conv(unsigned long u, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_U = %lu\n", u); //DEBUG
	(void)u;
	(void)flag;
	return (len);
}
