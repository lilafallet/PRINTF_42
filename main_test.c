#include <stdio.h>

int	main(void)
{
	printf("%0s\n", "hello ca va");
	printf("%025s\n", "hello ca va");

	printf("%25s\n", "hello ca va");
	printf("%-25s\n", "hello ca va");
	
	printf("%-025s\n", "hello ca va");
	printf("%0-25s\n", "hello ca va");
	
	printf("%d\n", 163);
	printf("% d\n", 163);
	return (0);
}
