#include "libftprintf.h"
#include <stdio.h> //DEBUG

int		di_conv(int di, int flag, char **output)
{
	int		len;

	len = 0;
	
	printf("ARGPTR CONV_D | CONV_I = %d\n", di); //DEBUG
	(void)di;
	(void)flag;
	return (len);
}

int		xminxmaj_conv(int x, int flag, char **output)
{
	int		len;

	len = 0;
	printf("ARGPTR CONV_XMIN | CONV_XMAJ = %d\n", x); //DEBUG
	(void)x;
	(void)flag;
	return (len);
}
