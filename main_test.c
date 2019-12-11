#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	int	n = 42;
	char *str = "est-ce que ca marche ?";

	//ENTIERS
	printf("\n"); //SAUT DE LIGNE
	printf("\033[34;01m           [!] ENTIERS [!]\033[00m\n"); //TITRE
	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	printf("%d %d %d %d %d %d %d %d\n", 0, 1, 9, 10, 11, 9999, 10000, 100001);
	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
	printf("%d %d %d %d %d %d %d %d", 0, -1, -9, -10, -11, -9999, -10000, -100001);
	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
	printf("%d\n", 12345);
	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
	printf("%d\n", -12345);
	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
	printf("% d\n", 12345);
	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
	printf("% d\n", -12345);
	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
	printf("%3d %3d\n", 15, 3);
	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
	printf("%03d %03d\n", 15, 3);
	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO
	printf("%.8d\n", 12345);
	printf("\033[31;01mNUMERO 11\033[00m\n"); //NUMERO
	printf("%08d\n", 12345);
	printf("\033[31;01mNUMERO 12\033[00m\n"); //NUMERO
 	printf("%12.8d\n", 12345);
	printf("\033[31;01mNUMERO 13\033[00m\n"); //NUMERO
  	printf("%8.12d\n", 12345);
	printf("\033[31;01mNUMERO 14\033[00m\n"); //NUMERO
  	printf("%-12d\n", 12345);
	printf("\033[31;01mNUMERO 15\033[00m\n"); //NUMERO
  	printf("%-12.8d\n", 12345);
	printf("\033[31;01mNUMERO 16\033[00m\n"); //NUMERO
  	printf("%012.8d\n", 12345);
	printf("\033[31;01mNUMERO 17\033[00m\n"); //NUMERO
  	printf("%012.d\n", 12345);
	printf("\033[31;01mNUMERO 18\033[00m\n"); //NUMERO
  	printf("%012.0d\n", 12345);
	printf("\033[31;01mNUMERO 19\033[00m\n"); //NUMERO
  	printf("%-.12d\n", 12345);
	printf("\033[31;01mNUMERO 20\033[00m\n"); //NUMERO
  	printf("%.0d\n", 0);
	printf("\033[31;01mNUMERO 21\033[00m\n"); //NUMERO
  	printf("% .0d\n", 0);
	printf("\033[31;01mNUMERO 22\033[00m\n"); //NUMERO
	printf("-%4d-%-4d-\n", 7, 7);
	printf("\033[31;01mNUMERO 23\033[00m\n"); //NUMERO
  	printf("%04d %-04d %0-4d\n", 7, 7, 7);
	printf("\033[31;01mNUMERO 24\033[00m\n"); //NUMERO
  	printf("%0-4d\n", 7);
	printf("\033[31;01mNUMERO 25\033[00m\n"); //NUMERO
  	printf("-%0d-\n", 7);
	printf("\033[31;01mNUMERO 26\033[00m\n"); //NUMERO
  	printf("-%012d-\n", -1234);
	printf("\033[31;01mNUMERO 27\033[00m\n"); //NUMERO
  	printf("%04d %0.4d\n", -12, -12);
	printf("\033[31;01mNUMERO 28\033[00m\n"); //NUMERO
  	printf("%d\n", 258733);
	printf("\033[31;01mNUMERO 29\033[00m\n"); //NUMERO
  	printf("%i\n", 258733);
	printf("\033[31;01mNUMERO 30\033[00m\n"); //NUMERO
  	printf("%u\n", 258733U);
	printf("\033[31;01mNUMERO 31\033[00m\n"); //NUMERO
  	printf("%x\n", 258733U);
	printf("\033[31;01mNUMERO 32\033[00m\n"); //NUMERO
  	printf("%X\n", 258733U);
	printf("\033[31;01mNUMERO 33\033[00m\n"); //NUMERO
  	printf("%d\n", 0);
	printf("\033[31;01mNUMERO 34\033[00m\n"); //NUMERO
  	printf("%i\n", 0);
	printf("\033[31;01mNUMERO 35\033[00m\n"); //NUMERO
  	printf("%u\n", 0);
	printf("\033[31;01mNUMERO 36\033[00m\n"); //NUMERO
  	printf("%x\n", 0);
	printf("\033[31;01mNUMERO 37\033[00m\n"); //NUMERO
  	printf("%X\n", 0);
	printf("\033[31;01mNUMERO 38\033[00m\n"); //NUMERO
  	printf("%d\n", -258733);
	printf("\033[31;01mNUMERO 39\033[00m\n"); //NUMERO
  	printf("%d\n", INT_MAX);
	printf("\033[31;01mNUMERO 40\033[00m\n"); //NUMERO
  	printf("%d\n", INT_MIN);
	printf("\033[31;01mNUMERO 41\033[00m\n"); //NUMERO
  	printf("%u\n", UINT_MAX);
	printf("\033[31;01mNUMERO 42\033[00m\n"); //NUMERO
  	printf("%x\n", UINT_MAX);
	printf("\033[31;01mNUMERO 43\033[00m\n"); //NUMERO
	printf("%d %hd %d", 7, 7, 7);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 43\033[00m\n"); //NUMERO
	printf("%000012x", 3735928559U);
	printf("-%3d-%3d-%3d-", 12, 123, 1234);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 44\033[00m\n"); //NUMERO
  	printf("-%3d-%3d-%3d-", -1, -12, -123);
	printf("\033[31;01mNUMERO 45\033[00m\n"); //NUMERO
  	printf("-%.3d-%.3d-%.3d-", 12, 123, 1234);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 46\033[00m\n"); //NUMERO
 	printf("-%08.0d-", 0);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 47\033[00m\n"); //NUMERO
  	printf("-%2.0d-\n", 7);
	printf("\033[31;01mNUMERO 48\033[00m\n"); //NUMERO
  	printf("-%2.0d-\n", 0);
	printf("\033[31;01mNUMERO 49\033[00m\n"); //NUMERO
  	printf("-%.3d-%.3d-%.3d-", -12, -123, -1234);	
	printf("\033[31;01mNUMERO 50\033[00m\n"); //NUMERO
	printf("-%d-%.0d-%.8d-%8.0d-%8.8d-", 0, 0, 0, 0, 0);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 51\033[00m\n"); //NUMERO
  	printf("%.3d %.-3d", 21, 21);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 52\033[00m\n"); //NUMERO
 	printf("%-*d", 10, 1234);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 53\033[00m\n"); //NUMERO
  	printf("%*d",  10, 1234);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 54\033[00m\n"); //NUMERO
	printf("%08x", 543);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 55\033[00m\n"); //NUMERO
 	printf("%x", 0x12345);	
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 56\033[00m\n"); //NUMERO
	printf("%X", 0x12345);	
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 57\033[00m\n"); //NUMERO
	printf("%d %d %d", 0, 42, 2147483647);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 58\033[00m\n"); //NUMERO
	printf("%d %d %d", -0, -42, -2147483647);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 59\033[00m\n"); //NUMERO
	printf("%d %d %d %d %d %d %d %d %d %d %d %d", 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC);	
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 60\033[00m\n"); //NUMERO

	//CHAINES DE CARACTERES//
	printf("\n\033[34;01m   [!] CHAINES DE CARACTERES [!]\033[00m\n"); //TITRE
	printf("\033[34;01m///////////////////////////////////////\033\n"); //LIGNE
	printf("some text\n");
  	printf("abcdefghijklmnopqrstuvwxyz0123\n");
  	printf("abcdefghijklmnopqrstuvwxyz01234\n");
  	printf("abcdefghijklmnopqrstuvwxyz012345\n");
	printf("%s\n", NULL);
	printf("%s\n", "");
	printf("%s\n", "ABCDEF");
	printf("%10s", "Salut");
	printf("\n"); //SAUT DE LIGNE
  	printf("%-10s", "Salut");
	printf("\n"); //SAUT DE LIGNE
  	printf("%10s", "Salut tout le monde");
	printf("\n"); //SAUT DE LIGNE
  	printf("%10.10s", "Salut tout le monde");
	printf("\n"); //SAUT DE LIGNE
	
	//CARACTERES//
	printf("\n\033[34;01m       [!] CARACTERES [!]\033[00m\n"); //TITRE
 	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
 	printf("%c %c\n", 'a', '&');

	//POINTEURS//
 	printf("\n       [!] POINTEURS [!]\n"); //TITRE
 	printf("///////////////////////////////////////\n"); //LIGNE
	printf("%p\n", NULL);
	printf("%p\n", 0x123);
	printf("%p\n", main);

	//POINTEURS DESIGNANT UN ENTIER//
	printf("\n[!] POINTEURS DESIGNANT UN ENTIER [!]\n"); //TITRE
 	printf("///////////////////////////////////////\n"); //LIGNE

	//POURCENT//
	printf("\n       [!] POURCENT [!]\n"); //TITRE
 	printf("///////////////////////////////////////\n"); //LIGNE
	printf("%d %% %d\n", 1, 2);

	//MODIFICATEURS//
	printf("\n      [!] MODIFICATEURS [!]\n"); //TITRE
 	printf("///////////////////////////////////////\n"); //LIGNE
	printf("-%4d-%-4d-%4d-\n", 7, 54, 12345);
  	printf("-%4s-%4s-\n", "A", "ABCDEF");
  	printf("-%-4d-\n", 7);
  	printf("-%4p-\n", main);
  	printf("-%*d-\n", 4, 7);
  	printf("-%*d-\n", -4, 7);
  	printf("-%0*d-\n", 4, 7);
  	printf("-%3c-%-3c-\n", 'a', 'b');
  	printf("-%3s-%-3s-\n", "A", "B");
  	printf("-%.4d-%.4d-%.d-%.0d-\n", 7, 12345, 1, 9);
  	printf("-%.4s-%.4s-%.s-\n", "A", "ABCDEF", "ABC");
  	printf("-%.*d-\n", 4, 7);
  	printf("-%.*d-\n", -4, 7);
  	printf("%.1d %.0d %.1u %.0u %.1o %.0o %.1x %.0x\n", 0, 0, 0, 0, 0, 0, 0, 0);
  	printf("%.5d\n", -17);
  	printf("-%6.4d-%4.6d-\n", 12345, 12345);
  	printf("-%*.*d-%*.*d-\n", 6, 4, 12345, 4, 6, 12345);
  	printf("-%.012d-\n", -1234);
  	printf("-%6.4s-%4.6s-\n", "ABCDE", "ABCDE");
	
	//COMBINAISONS//
	printf("\n     [!] COMBINAISONS [!]\n"); //TITRE
 	printf("///////////////////////////////////////\n"); //LIGNE
	printf("%c %d %s", 42, 42, str);
	printf("\n"); //SAUT DE LIGNE
	printf("%X %p %d", 0x12345, str, 42);
	printf("\n"); //SAUT DE LIGNE

	//ERREURS//
	printf("\n       [!] ERREURS [!]\n"); //TITRE
 	printf("///////////////////////////////////////\n"); //LIGNE
 	printf("-%.4p-", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("-%.-4d-", 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%#s %0s", "ABC", "ABC");
	printf("\n"); //SAUT DE LIGNE
  	printf("-%%-%-%-%0%-%1%-%2%-%.2%-%.%-%-2%-");
	printf("\n"); //SAUT DE LIGNE
  	printf("%k", 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%02k", 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%2");	
	printf("\n"); //SAUT DE LIGNE
	printf("%?d", 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%2*d", 4, 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.0*d", 4, 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%*2d", 4, 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.*2d", 4, 7);
	printf("\n"); //SAUT DE LIGNE
	printf("%*.*k", -32, 5);
	printf("\n"); //SAUT DE LIGNE
	printf("%16k");
	printf("\n"); //SAUT DE LIGNE
  	printf("%0k %0.1k");
	printf("\n"); //SAUT DE LIGNE
  	printf("%%d", 17);
	printf("\n"); //SAUT DE LIGNE
  	printf("%%%d", 17);
	printf("\n"); //SAUT DE LIGNE
  	printf("%*.*k %0*.*k", 0, 0, 0, 0);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.2p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.12p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%2p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%12p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%012p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("% 12p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%-12p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.2p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.12p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%2p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%12p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%012p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("% 12p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%-12p", NULL);
	printf("\n"); //SAUT DE LIGNE
	printf("%2s", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%10s", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.5s", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.6s", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%zy");
	printf("\n"); //SAUT DE LIGNE

	//BONUS//
	printf("\n          [!] BONUS [!]\n"); //TITRE
 	printf("///////////////////////////////////////\n"); //LIGNE
	printf("%+d\n", 12345);
	printf("%d %d %+d %+d % d % d %+ d %+ d % +d % +d\n", 7, -7, 7, -7, 7, -7, 7, -7, 7, -7);
	printf("%d %hd %d\n", 123456, 123456, 123456);
  	printf("%u %hu %u\n", 123456U, 123456U, 123456U);
  	printf("%d %ld %d\n", 123456, 123456, 123456);
	printf("%#012x\n", 3735928559U);
  	printf("%#-*.*lX\n", 16, 12, 3735928559UL);
	printf("-%+-+4d-", 1);
	printf("\n"); //SAUT DE LIGNE
	printf("-%+3d-%+.3d", 12, 12);
	printf("\n"); //SAUT DE LIGNE
  	printf("-%+8.4d-%8.0d-%+8.0d-", 13, 0, 0);	
	printf("\n"); //SAUT DE LIGNE
 	printf("%+010d", 543);
	printf("\n"); //SAUT DE LIGNE
  	printf("%-+10d", 543);
	printf("\n"); //SAUT DE LIGNE
  	printf("%-+10d", 1234567890);
	printf("\n"); //SAUT DE LIGNE
  	printf("%-+10.10d", 1234567890);	
	printf("\n"); //SAUT DE LIGNE

	//ERREURS BONUS//
	printf("\n    [!] ERREURS BONUS [!]\n"); //TITRE
 	printf("///////////////////////////////////////\n"); //LIGNE
	printf("%+s %0-s", "ABC", "ABC");
	printf("\n"); //SAUT DE LIGNE
  	printf("%+c %0-c %.2c", 'a', 'b', 'c');
	printf("\n"); //SAUT DE LIGNE
  	printf("%d %2n", 1, &n);
	printf("\n"); //SAUT DE LIGNE
  	printf("%d %.2n", 1, &n);
	printf("\n"); //SAUT DE LIGNE
  	printf("%d %02n", 1, &n);
	printf("\n"); //SAUT DE LIGNE
  	printf("%d %+n", 1, &n);
	printf("\n"); //SAUT DE LIGNE
  	printf("%d %-2n", 1, &n);
	printf("\n"); //SAUT DE LIGNE
 	printf("%+0# -2.k");	
	printf("\n"); //SAUT DE LIGNE
	printf("%+ *.*k", -32, 5);	
	printf("\n"); //SAUT DE LIGNE
	printf("%hp", main);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[0m");


	return (EXIT_SUCCESS);
}
