#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	int	n = 42;
	int	ret = 0;
	char *str = "est-ce que ca marche ?";

	//ENTIERS
	printf("\n"); //SAUT DE LIGNE
	printf("\033[34;01m           [!] ENTIERS [!]\033[00m\n"); //TITRE
	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	ret = printf("%d %d %d %d %d %d %d %d\n", 0, 1, 9, 10, 11, 9999, 10000, 100001);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%d %d %d %d %d %d %d %d\n", 0, 1, 9, 10, 11, 9999, 10000, 100001); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
	ret = printf("%d %d %d %d %d %d %d %d", 0, -1, -9, -10, -11, -9999, -10000, -100001);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%d %d %d %d %d %d %d %d", 0, -1, -9, -10, -11, -9999, -10000, -100001); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
	ret = printf("%d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
	ret =rintf("%d\n", -12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%d\n", -12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
	ret = printf("% d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("% d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
	ret = printf("% d\n", -12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("% d\n", -12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
	ret = printf("%3d %3d\n", 15, 3);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%3d %3d\n", 15, 3); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
	ret = printf("%.8d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%.8d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
	ret = printf("%08d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%08d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO
 	ret = printf("%12.8d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
 	ret = printf("%12.8d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 11\033[00m\n"); //NUMERO
  	ret = printf("%8.12d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%8.12d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 12\033[00m\n"); //NUMERO
  	ret = printf("%-12d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%-12d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 13\033[00m\n"); //NUMERO
  	ret = printf("%-12.8d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%-12.8d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 14\033[00m\n"); //NUMERO
  	ret = printf("%012.8d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%012.8d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 15\033[00m\n"); //NUMERO
  	ret = printf("%012.d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%012.d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 16\033[00m\n"); //NUMERO
  	ret = printf("%012.0d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%012.0d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 17\033[00m\n"); //NUMERO
  	ret = printf("%-.12d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%-.12d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 18\033[00m\n"); //NUMERO
  	ret = printf("% .0d\n", 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m"); //MYPRINTF
  	ret = printf("% .0d\n", 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 19\033[00m\n"); //NUMERO
	ret = printf("-%4d-%-4d-\n", 7, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("-%4d-%-4d-\n", 7, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 20\033[00m\n"); //NUMERO
  	ret = printf("%04d %-04d %0-4d\n", 7, 7, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%04d %-04d %0-4d\n", 7, 7, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 21\033[00m\n"); //NUMERO
  	ret = printf("%0-4d\n", 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%0-4d\n", 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 22\033[00m\n"); //NUMERO
  	ret = printf("-%0d-\n", 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%0d-\n", 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 23\033[00m\n"); //NUMERO
  	ret = printf("-%012d-\n", -1234);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%012d-\n", -1234); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 24\033[00m\n"); //NUMERO
  	ret = printf("%04d %0.4d\n", -12, -12);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%04d %0.4d\n", -12, -12); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 25\033[00m\n"); //NUMERO
  	ret = printf("%d\n", 258733);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%d\n", 258733); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 26\033[00m\n"); //NUMERO
  	ret = printf("%i\n", 258733);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%i\n", 258733); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 27\033[00m\n"); //NUMERO
  	ret = printf("%u\n", 258733U);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%u\n", 258733U); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 28\033[00m\n"); //NUMERO
  	ret = printf("%x\n", 258733U);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%x\n", 258733U); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 29\033[00m\n"); //NUMERO
  	ret = printf("%X\n", 258733U);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%X\n", 258733U); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 30\033[00m\n"); //NUMERO
  	ret = printf("%d\n", 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%d\n", 0); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 31\033[00m\n"); //NUMERO
  	ret = printf("%i\n", 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%i\n", 0); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 32\033[00m\n"); //NUMERO
  	ret = printf("%u\n", 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%u\n", 0); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 33\033[00m\n"); //NUMERO
  	ret = printf("%x\n", 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%x\n", 0); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 34\033[00m\n"); //NUMERO
  	ret = printf("%X\n", 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%X\n", 0); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 35\033[00m\n"); //NUMERO
  	ret = printf("%d\n", -258733);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%d\n", -258733); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 36\033[00m\n"); //NUMERO
  	ret = printf("%d\n", INT_MAX);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%d\n", INT_MAX); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 37\033[00m\n"); //NUMERO
  	ret = printf("%d\n", INT_MIN);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%d\n", INT_MIN); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 38\033[00m\n"); //NUMERO
  	ret = printf("%u\n", UINT_MAX);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%u\n", UINT_MAX); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 39\033[00m\n"); //NUMERO
  	ret = printf("%x\n", UINT_MAX);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%x\n", UINT_MAX); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 40\033[00m\n"); //NUMERO
	ret = printf("%d %hd %d", 7, 7, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%d %hd %d", 7, 7, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 41\033[00m\n"); //NUMERO
	ret = printf("%000012x", 3735928559U);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%000012x", 3735928559U); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 42\033[00m\n"); //NUMERO
  	ret = printf("-%3d-%3d-%3d-", -1, -12, -123);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%3d-%3d-%3d-", -1, -12, -123); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 43\033[00m\n"); //NUMERO
  	ret = printf("-%.3d-%.3d-%.3d-", 12, 123, 1234);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%.3d-%.3d-%.3d-", 12, 123, 1234); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 44\033[00m\n"); //NUMERO
 	ret = printf("-%08.0d-", 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
 	ret = printf("-%08.0d-", 0); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 45\033[00m\n"); //NUMERO
  	ret = printf("-%2.0d-\n", 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%2.0d-\n", 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	

	printf("\033[31;01mNUMERO 46\033[00m\n"); //NUMERO
  	ret = printf("-%2.0d-\n", 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%2.0d-\n", 0); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 47\033[00m\n"); //NUMERO
  	ret = printf("-%.3d-%.3d-%.3d-", -12, -123, -1234);	
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%.3d-%.3d-%.3d-", -12, -123, -1234); //MYPRINTF	
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 48\033[00m\n"); //NUMERO
	ret = printf("-%d-%.0d-%.8d-%8.0d-%8.8d-", 0, 0, 0, 0, 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("-%d-%.0d-%.8d-%8.0d-%8.8d-", 0, 0, 0, 0, 0); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 49\033[00m\n"); //NUMERO
  	ret = printf("%.3d %.-3d", 21, 21);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%.3d %.-3d", 21, 21); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 50\033[00m\n"); //NUMERO
  	ret = printf("%*d",  10, 1234);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%*d",  10, 1234); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 51\033[00m\n"); //NUMERO
	ret = printf("%08x", 543);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%08x", 543); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 52\033[00m\n"); //NUMERO
 	ret = printf("%x", 0x12345);	
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
 	ret = printf("%x", 0x12345); //MYPRINTF	
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 53\033[00m\n"); //NUMERO
	ret = printf("%X", 0x12345);	
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%X", 0x12345); //MYPRINTF	
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 54\033[00m\n"); //NUMERO
	ret = printf("%d %d %d", 0, 42, 2147483647);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%d %d %d", 0, 42, 2147483647); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 55\033[00m\n"); //NUMERO
	ret = printf("%d %d %d", -0, -42, -2147483647);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%d %d %d", -0, -42, -2147483647); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 56\033[00m\n"); //NUMERO
	ret = printf("%d %d %d %d %d %d %d %d %d %d %d %d", 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC);	
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%d %d %d %d %d %d %d %d %d %d %d %d", 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC); //MYPRINTF	
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	//CHAINES DE CARACTERES//
	printf("\n\033[34;01m   [!] CHAINES DE CARACTERES [!]\033[00m\n"); //TITRE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	ret = printf("some text\n");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("some text\n"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
  	ret = printf("abcdefghijklmnopqrstuvwxyz0123\n");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("abcdefghijklmnopqrstuvwxyz0123\n"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
  	ret = printf("abcdefghijklmnopqrstuvwxyz01234\n");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("abcdefghijklmnopqrstuvwxyz01234\n"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
  	ret = printf("abcdefghijklmnopqrstuvwxyz012345\n");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("abcdefghijklmnopqrstuvwxyz012345\n"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
	ret = printf("%s\n", "");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%s\n", ""); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
	ret = printf("%s\n", "ABCDEF");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%s\n", "ABCDEF"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
	ret = printf("%10s", "Salut");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%10s", "Salut"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
  	ret = printf("%10s", "Salut tout le monde");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%10s", "Salut tout le monde"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
  	ret = printf("%10.10s", "Salut tout le monde");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%10.10s", "Salut tout le monde"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	//CARACTERES//
	printf("\n\033[34;01m       [!] CARACTERES [!]\033[00m\n"); //TITRE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
 	ret = printf("%c %c\n", 'a', '&');
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
 	ret = printf("%c %c\n", 'a', '&'); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	//POINTEURS//
 	printf("\n\033[34;01m       [!] POINTEURS [!]\033[00m\n"); //TITRE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	ret = printf("%p\n", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%p\n", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
	ret = printf("%p\n", 0x123);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%p\n", 0x123); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
	ret = printf("%p\n", main);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%p\n", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	//POINTEURS DESIGNANT UN ENTIER//
	printf("\n\033[34;01m[!] POINTEURS DESIGNANT UN ENTIER [!]\033[00m\n"); //TITRE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	//POURCENT//
	printf("\n\033[34;01m       [!] POURCENT [!]\033[00m\n"); //TITRE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	ret = printf("%d %% %d\n", 1, 2);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%d %% %d\n", 1, 2); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	//MODIFICATEURS//
	printf("\n\033[34;01m      [!] MODIFICATEURS [!]\033[00m\n"); //TITRE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	ret = printf("-%4d-%-4d-%4d-\n", 7, 54, 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("-%4d-%-4d-%4d-\n", 7, 54, 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
  	ret = printf("-%4s-%4s-\n", "A", "ABCDEF");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%4s-%4s-\n", "A", "ABCDEF"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
  	ret = printf("-%-4d-\n", 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%-4d-\n", 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
  	ret = printf("-%4p-\n", main);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%4p-\n", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
  	ret = printf("-%*d-\n", 4, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%*d-\n", 4, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
  	ret = printf("-%*d-\n", -4, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%*d-\n", -4, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
  	ret = printf("-%0*d-\n", 4, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%0*d-\n", 4, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
  	ret = printf("-%3c-%-3c-\n", 'a', 'b');
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%3c-%-3c-\n", 'a', 'b'); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
  	ret = printf("-%3s-%-3s-\n", "A", "B");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%3s-%-3s-\n", "A", "B"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO
  	ret = printf("-%.4d-%.4d-%.d-%.0d-\n", 7, 12345, 1, 9);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%.4d-%.4d-%.d-%.0d-\n", 7, 12345, 1, 9); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 11\033[00m\n"); //NUMERO
  	ret = printf("-%.4s-%.4s-%.s-\n", "A", "ABCDEF", "ABC");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%.4s-%.4s-%.s-\n", "A", "ABCDEF", "ABC"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 12\033[00m\n"); //NUMERO
  	ret = printf("-%.*d-\n", 4, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%.*d-\n", 4, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 13\033[00m\n"); //NUMERO
  	ret = printf("-%.*d-\n", -4, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%.*d-\n", -4, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 14\033[00m\n"); //NUMERO
  	ret = printf("%.1d %.0d %.1u %.0u %.1o %.0o %.1x %.0x\n", 0, 0, 0, 0, 0, 0, 0, 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%.1d %.0d %.1u %.0u %.1o %.0o %.1x %.0x\n", 0, 0, 0, 0, 0, 0, 0, 0); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 15\033[00m\n"); //NUMERO
  	ret = printf("%.5d\n", -17);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%.5d\n", -17); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 16\033[00m\n"); //NUMERO
  	ret = printf("-%6.4d-%4.6d-\n", 12345, 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%6.4d-%4.6d-\n", 12345, 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 17\033[00m\n"); //NUMERO
  	ret = printf("-%*.*d-%*.*d-\n", 6, 4, 12345, 4, 6, 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%*.*d-%*.*d-\n", 6, 4, 12345, 4, 6, 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 18\033[00m\n"); //NUMERO
  	ret = printf("-%.012d-\n", -1234);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%.012d-\n", -1234); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 19\033[00m\n"); //NUMERO
  	ret = printf("-%6.4s-%4.6s-\n", "ABCDE", "ABCDE");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%6.4s-%4.6s-\n", "ABCDE", "ABCDE"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	//COMBINAISONS//
	printf("\n\033[34;01m     [!] COMBINAISONS [!]\033[00m\n"); //TITRE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	ret = printf("%c %d %s", 42, 42, str);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%c %d %s", 42, 42, str); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
	ret = printf("%X %p %d", 0x12345, str, 42);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%X %p %d", 0x12345, str, 42); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	//ERREURS//
	printf("\n\033[34;01m       [!] ERREURS [!]\033[00m\n"); //TITRE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
 	ret = printf("-%.4p-", main);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
 	ret = printf("-%.4p-", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
  	ret = printf("-%.-4d-", 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%.-4d-", 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
  	ret = printf("%#s %0s", "ABC", "ABC");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%#s %0s", "ABC", "ABC"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
  	ret = printf("-%%-%-%-%0%-%1%-%2%-%.2%-%.%-%-2%-");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%%-%-%-%0%-%1%-%2%-%.2%-%.%-%-2%-"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
  	ret = printf("%k", 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%k", 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");


	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
  	ret = printf("%02k", 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%02k", 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
	ret = printf("%?d", 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%?d", 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
  	ret = printf("%2*d", 4, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%2*d", 4, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
  	ret = printf("%.0*d", 4, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%.0*d", 4, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO
  	ret = printf("%*2d", 4, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%*2d", 4, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 11\033[00m\n"); //NUMERO
  	ret = printf("%.*2d", 4, 7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%.*2d", 4, 7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 12\033[00m\n"); //NUMERO
	ret = printf("%*.*k", -32, 5);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%*.*k", -32, 5); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 13\033[00m\n"); //NUMERO
	ret = printf("%16k");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%16k"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 14\033[00m\n"); //NUMERO
  	ret = printf("%0k %0.1k");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%0k %0.1k"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 15\033[00m\n"); //NUMERO
  	ret = printf("%%d", 17);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%%d", 17); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 16\033[00m\n"); //NUMERO
  	ret = printf("%%%d", 17);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%%%d", 17); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 17\033[00m\n"); //NUMERO
  	ret = printf("%*.*k %0*.*k", 0, 0, 0, 0);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%*.*k %0*.*k", 0, 0, 0, 0); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 18\033[00m\n"); //NUMERO
  	ret = printf("%.2p", main);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%.2p", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 19\033[00m\n"); //NUMERO
  	ret = printf("%.12p", main);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%.12p", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 20\033[00m\n"); //NUMERO
  	ret = printf("%2p", main);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%2p", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 21\033[00m\n"); //NUMERO
  	ret = printf("%12p", main);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%12p", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 22\033[00m\n"); //NUMERO
  	ret = printf("%012p", main);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%012p", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 23\033[00m\n"); //NUMERO
  	ret = printf("% 12p", main);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("% 12p", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 24\033[00m\n"); //NUMERO
  	ret = printf("%-12p", main);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%-12p", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 25\033[00m\n"); //NUMERO
  	ret = printf("%.2p", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%.2p", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 26\033[00m\n"); //NUMERO
  	ret = printf("%.12p", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%.12p", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 27\033[00m\n"); //NUMERO
  	ret = printf("%2p", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%2p", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 28\033[00m\n"); //NUMERO
  	ret = printf("%12p", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%12p", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 29\033[00m\n"); //NUMERO
  	ret = printf("%012p", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%012p", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 30\033[00m\n"); //NUMERO
  	ret = printf("% 12p", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("% 12p", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 31\033[00m\n"); //NUMERO
  	ret = printf("%-12p", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%-12p", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 32\033[00m\n"); //NUMERO
	ret = printf("%2s", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%2s", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 33\033[00m\n"); //NUMERO
  	ret = printf("%10s", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%10s", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 34\033[00m\n"); //NUMERO
  	ret = printf("%.5s", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%.5s", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 35\033[00m\n"); //NUMERO
  	ret = printf("%.6s", NULL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%.6s", NULL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 36\033[00m\n"); //NUMERO
  	ret = printf("%zy");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%zy"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	//BONUS//
	printf("\n\033[34;01m          [!] BONUS [!]\033[00m\n"); //TITRE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	ret = printf("%+d\n", 12345);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%+d\n", 12345); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
	ret = printf("%d %d %+d %+d % d % d %+ d %+ d % +d % +d\n", 7, -7, 7, -7, 7, -7, 7, -7, 7, -7);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%d %d %+d %+d % d % d %+ d %+ d % +d % +d\n", 7, -7, 7, -7, 7, -7, 7, -7, 7, -7); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
	ret = printf("%d %hd %d\n", 123456, 123456, 123456);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%d %hd %d\n", 123456, 123456, 123456); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
  	ret = printf("%u %hu %u\n", 123456U, 123456U, 123456U);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%u %hu %u\n", 123456U, 123456U, 123456U); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
  	ret = printf("%d %ld %d\n", 123456, 123456, 123456);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%d %ld %d\n", 123456, 123456, 123456); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
	ret = printf("%#012x\n", 3735928559U);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%#012x\n", 3735928559U); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
  	ret = printf("%#-*.*lX\n", 16, 12, 3735928559UL);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%#-*.*lX\n", 16, 12, 3735928559UL); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
	ret = printf("-%+-+4d-", 1);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("-%+-+4d-", 1); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
	ret = printf("-%+3d-%+.3d", 12, 12);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("-%+3d-%+.3d", 12, 12); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO
  	ret = printf("-%+8.4d-%8.0d-%+8.0d-", 13, 0, 0);	
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("-%+8.4d-%8.0d-%+8.0d-", 13, 0, 0); //MYPRINTF	
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 11\033[00m\n"); //NUMERO
 	ret = printf("%+010d", 543);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
 	ret = printf("%+010d", 543); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 12\033[00m\n"); //NUMERO
  	ret = printf("%-+10d", 543);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%-+10d", 543); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 13\033[00m\n"); //NUMERO
  	ret = printf("%-+10d", 1234567890);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%-+10d", 1234567890); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 14\033[00m\n"); //NUMERO
  	ret = printf("%-+10.10d", 1234567890);	
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%-+10.10d", 1234567890); //MYPRINTF	
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");
	
	//ERREURS BONUS//
	printf("\n\033[34;01m    [!] ERREURS BONUS [!]\033[00m\n"); //TITRE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	ret = printf("%+s %0-s", "ABC", "ABC");
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%+s %0-s", "ABC", "ABC"); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
  	ret = printf("%+c %0-c %.2c", 'a', 'b', 'c');
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%+c %0-c %.2c", 'a', 'b', 'c'); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
  	ret = printf("%d %2n", 1, &n);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%d %2n", 1, &n); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
  	ret = printf("%d %.2n", 1, &n);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%d %.2n", 1, &n); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
  	ret = printf("%d %02n", 1, &n);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%d %02n", 1, &n); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
  	ret = printf("%d %+n", 1, &n);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%d %+n", 1, &n); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
  	ret = printf("%d %-2n", 1, &n);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
  	ret = printf("%d %-2n", 1, &n); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
 	ret = printf("%+0# -2.k");	
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
 	ret = printf("%+0# -2.k"); //MYPRINTF	
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
	ret = printf("%+ *.*k", -32, 5);	
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%+ *.*k", -32, 5); //MYPRINTF	
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO
	ret = printf("%hp", main);
	printf("||");
	printf("\n");
	printf("%d\n", ret);
	printf("\033[32;01m");
	ret = printf("%hp", main); //MYPRINTF
	printf("||");
	printf("\n");
	printf("%d\n", ret); //RETMYPRINTF
	printf("\033[00m");

	return (EXIT_SUCCESS);
}
