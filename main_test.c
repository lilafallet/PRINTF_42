#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	printf("%d %d %d %d %d %d %d %d", 0, 1, 9, 10, 11, 9999, 10000, 100001);
	printf("%d %d %d %d %d %d %d %d", 0, -1, -9, -10, -11, -9999, -10000, -100001);
	printf("%d", 12345);
	printf("%d", -12345);
	printf("%+d", 12345); //BONUS
	printf("% d", 12345);
	printf("% d", -12345);
	printf("%3d %3d", 15, 3);
	printf("%03d %03d", 15, 3);
	printf("%.8d", 12345);
	printf("%08d", 12345);
 	printf("%12.8d", 12345);
  	printf("%8.12d", 12345);
  	printf("%-12d", 12345);
  	printf("%-12.8d", 12345);
  	printf("%012.8d", 12345);
  	printf("%012.d", 12345);
  	printf("%012.0d", 12345);
  	printf("%-012d", 12345);
  	printf("%-.12d", 12345);
  	printf("%.0d", 0);
  	printf("% .0d", 0);
  	printf("%d", 258733);
  	printf("%i", 258733);
  	printf("%u", 258733U);
  	printf("%x", 258733U);
  	printf("%X", 258733U);
  	printf("%d", 0);
  	printf("%i", 0);
  	printf("%u", 0);
  	printf("%x", 0);
  	printf("%X", 0);
  	printf("%d", -258733);
  	printf("%d", INT_MAX);
  	printf("%d", INT_MIN);
  	printf("%u", UINT_MAX);
  	printf("%x", UINT_MAX);
	return (EXIT_SUCCESS);
}
