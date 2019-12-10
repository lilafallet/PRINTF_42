#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	//ENTIERS
	printf("\n"); //SAUT DE LIGNE
	printf("           [!] ENTIERS [!]\n"); //TITRE
	printf("///////////////////////////////////////\n"); //LIGNE
	printf("%d %d %d %d %d %d %d %d\n", 0, 1, 9, 10, 11, 9999, 10000, 100001);
	printf("%d %d %d %d %d %d %d %d\n", 0, -1, -9, -10, -11, -9999, -10000, -100001);
	printf("%d\n", 12345);
	printf("%d\n", -12345);
	printf("%+d\n", 12345); //BONUS
	printf("% d\n", 12345);
	printf("% d\n", -12345);
	printf("%3d %3d\n", 15, 3);
	printf("%03d %03d\n", 15, 3);
	printf("%.8d\n", 12345);
	printf("%08d\n", 12345);
 	printf("%12.8d\n", 12345);
  	printf("%8.12d\n", 12345);
  	printf("%-12d\n", 12345);
  	printf("%-12.8d\n", 12345);
  	printf("%012.8d\n", 12345);
  	printf("%012.d\n", 12345);
  	printf("%012.0d\n", 12345);
  	printf("%-.12d\n", 12345);
  	printf("%.0d\n", 0);
  	printf("% .0d\n", 0);
	printf("-%4d-%-4d-\n", 7, 7);
  	printf("%d %d %+d %+d % d % d %+ d %+ d % +d % +d\n", 7, -7, 7, -7, 7, -7, 7, -7, 7, -7); //BONUS
  	printf("%04d %-04d %0-4d\n", 7, 7, 7);
  	printf("%0-4d\n", 7);
  	printf("-%0d-\n", 7);
  	printf("-%012d-\n", -1234);
  	printf("%04d %0.4d\n", -12, -12);
  	printf("%d\n", 258733);
  	printf("%i\n", 258733);
  	printf("%u\n", 258733U);
  	printf("%x\n", 258733U);
  	printf("%X\n", 258733U);
  	printf("%d\n", 0);
  	printf("%i\n", 0);
  	printf("%u\n", 0);
  	printf("%x\n", 0);
  	printf("%X\n", 0);
  	printf("%d\n", -258733);
  	printf("%d\n", INT_MAX);
  	printf("%d\n", INT_MIN);
  	printf("%u\n", UINT_MAX);
  	printf("%x\n", UINT_MAX);printf("%d %hd %d", 7, 7, 7);
  	printf("%d %hd %d\n", 123456, 123456, 123456); //BONUS
  	printf("%u %hu %u\n", 123456U, 123456U, 123456U); //BONUS
  	printf("%d %ld %d\n", 123456, 123456, 123456); //BONUS

	//CHAINES DE CARACTERES//
	printf("\n   [!] CHAINES DE CARACTERES [!]\n"); //TITRE
	printf("///////////////////////////////////////\n"); //LIGNE
	printf("some text\n");
  	printf("abcdefghijklmnopqrstuvwxyz0123\n");
  	printf("abcdefghijklmnopqrstuvwxyz01234\n");
  	printf("abcdefghijklmnopqrstuvwxyz012345\n");
	printf("%s\n", NULL);
	printf("%s\n", "");
	printf("%s\n", "ABCDEF");

	//CARACTERES//
	printf("\n       [!] CARACTERES [!]\n"); //TITRE
 	printf("///////////////////////////////////////\n"); //LIGNE
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

	return (EXIT_SUCCESS);
}
