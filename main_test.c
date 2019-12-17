#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	int	n = 42;
	char *str = "est-ce que ca marche ?";
	printf("\033[32;01m%hp\033[00m", main); //MYPRINTF

	//ENTIERS
	printf("\n"); //SAUT DE LIGNE
	printf("\033[34;01m           [!] ENTIERS [!]\033[00m\n"); //TITRE
	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	printf("%d %d %d %d %d %d %d %d\n", 0, 1, 9, 10, 11, 9999, 10000, 100001);
	printf("\033[32;01m%d %d %d %d %d %d %d %d\033[00m\n", 0, 1, 9, 10, 11, 9999, 10000, 100001); //MYPRINTF
	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
	printf("%d %d %d %d %d %d %d %d", 0, -1, -9, -10, -11, -9999, -10000, -100001);
	printf("\n"); //SAUT DE LIGNE
	printf("\033[32;01m%d %d %d %d %d %d %d %d\033[00m", 0, -1, -9, -10, -11, -9999, -10000, -100001); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
	printf("%d\n", 12345);
	printf("\033[32;01m%d\033[00m\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
	printf("%d\n", -12345);
	printf("\033[32;01m%d\033[00m\n", -12345); //MYPRINTF
	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
	printf("% d\n", 12345);
	printf("\033[32;01m% d\033[00m\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
	printf("% d\n", -12345);
	printf("\033[32;01m% d\033[00m\n", -12345); //MYPRINTF
	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
	printf("%3d %3d\n", 15, 3);
	printf("\033[32;01m%3d %3d\033[00m\n", 15, 3); //MYPRINTF
	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
	printf("%03d %03d\n", 15, 3);
	printf("\033[32;01m%03d %03d\033[00m\n", 15, 3); //MYPRINTF
	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
	printf("%.8d\n", 12345);
	printf("\033[32;01m%.8d\n\033[00m", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO
	printf("%08d\n", 12345);
	printf("\033[32;01m%08d\033[00m\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 11\033[00m\n"); //NUMERO
 	printf("%12.8d\n", 12345);
 	printf("\033[32;01m%12.8d\033[00m\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 12\033[00m\n"); //NUMERO
  	printf("%8.12d\n", 12345);
  	printf("\033[32;01m%8.12d\033[00m\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 13\033[00m\n"); //NUMERO
  	printf("%-12d\n", 12345);
  	printf("\033[32;01m%-12d\033[00m\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 14\033[00m\n"); //NUMERO
  	printf("%-12.8d\n", 12345);
  	printf("\033[32;01m%-12.8d\033[00m\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 15\033[00m\n"); //NUMERO
  	printf("%012.8d\n", 12345);
  	printf("\033[32;01m%012.8d\033[00m\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 16\033[00m\n"); //NUMERO
  	printf("%012.d\n", 12345);
  	printf("\033[32;01m%012.d\033[00m\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 17\033[00m\n"); //NUMERO
  	printf("%012.0d\n", 12345);
  	printf("\033[32;01m%012.0d\033[00m\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 18\033[00m\n"); //NUMERO
  	printf("%-.12d\n", 12345);
  	printf("\033[32;01m%-.12d\033[00m\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 19\033[00m\n"); //NUMERO
  	printf("%.0d\n", 0);
  	printf("\033[32;01m%.0d\033[00m\n", 0); //MYPRINTF
	printf("\033[31;01mNUMERO 20\033[00m\n"); //NUMERO
  	printf("% .0d\n", 0);
  	printf("\033[32;01m% .0d\033[00m\n", 0); //MYPRINTF
	printf("\033[31;01mNUMERO 21\033[00m\n"); //NUMERO
	printf("-%4d-%-4d-\n", 7, 7);
	printf("\033[32;01m-%4d-%-4d\033[00m-\n", 7, 7); //MYPRINTF
	printf("\033[31;01mNUMERO 22\033[00m\n"); //NUMERO
  	printf("%04d %-04d %0-4d\n", 7, 7, 7);
  	printf("\033[32;01m%04d %-04d %0-4d\033[00m\n", 7, 7, 7); //MYPRINTF
	printf("\033[31;01mNUMERO 23\033[00m\n"); //NUMERO
  	printf("%0-4d\n", 7);
  	printf("\033[32;01m%0-4d\033[00m\n", 7); //MYPRINTF
	printf("\033[31;01mNUMERO 24\033[00m\n"); //NUMERO
  	printf("-%0d-\n", 7);
  	printf("\033[32;01m-%0d\033[00m-\n", 7); //MYPRINTF
	printf("\033[31;01mNUMERO 25\033[00m\n"); //NUMERO
  	printf("-%012d-\n", -1234);
  	printf("\033[32;01m-%012d\033[00m-\n", -1234); //MYPRINTF
	printf("\033[31;01mNUMERO 26\033[00m\n"); //NUMERO
  	printf("%04d %0.4d\n", -12, -12);
  	printf("\033[32;01m%04d %0.4d\033[00m\n", -12, -12); //MYPRINTF
	printf("\033[31;01mNUMERO 27\033[00m\n"); //NUMERO
  	printf("%d\n", 258733);
  	printf("\033[32;01m%d\033[00m\n", 258733); //MYPRINTF
	printf("\033[31;01mNUMERO 28\033[00m\n"); //NUMERO
  	printf("%i\n", 258733);
  	printf("\033[32;01m%i\033[00m\n", 258733); //MYPRINTF
	printf("\033[31;01mNUMERO 29\033[00m\n"); //NUMERO
  	printf("%u\n", 258733U);
  	printf("\033[32;01m%u\033[00m\n", 258733U); //MYPRINTF
	printf("\033[31;01mNUMERO 30\033[00m\n"); //NUMERO
  	printf("%x\n", 258733U);
  	printf("%x\n", 258733U); //MYPRINTF
	printf("\033[31;01mNUMERO 31\033[00m\n"); //NUMERO
  	printf("%X\n", 258733U);
  	printf("%X\n", 258733U); //MYPRINTF
	printf("\033[31;01mNUMERO 32\033[00m\n"); //NUMERO
  	printf("%d\n", 0);
  	printf("%d\n", 0); //MYPRINTF
	printf("\033[31;01mNUMERO 33\033[00m\n"); //NUMERO
  	printf("%i\n", 0);
  	printf("%i\n", 0); //MYPRINTF
	printf("\033[31;01mNUMERO 34\033[00m\n"); //NUMERO
  	printf("%u\n", 0);
  	printf("%u\n", 0); //MYPRINTF
	printf("\033[31;01mNUMERO 35\033[00m\n"); //NUMERO
  	printf("%x\n", 0);
  	printf("%x\n", 0); //MYPRINTF
	printf("\033[31;01mNUMERO 36\033[00m\n"); //NUMERO
  	printf("%X\n", 0);
  	printf("%X\n", 0); //MYPRINTF
	printf("\033[31;01mNUMERO 37\033[00m\n"); //NUMERO
  	printf("%d\n", -258733);
  	printf("%d\n", -258733); //MYPRINTF
	printf("\033[31;01mNUMERO 38\033[00m\n"); //NUMERO
  	printf("%d\n", INT_MAX);
  	printf("%d\n", INT_MAX); //MYPRINTF
	printf("\033[31;01mNUMERO 39\033[00m\n"); //NUMERO
  	printf("%d\n", INT_MIN);
  	printf("%d\n", INT_MIN); //MYPRINTF
	printf("\033[31;01mNUMERO 40\033[00m\n"); //NUMERO
  	printf("%u\n", UINT_MAX);
  	printf("%u\n", UINT_MAX); //MYPRINTF
	printf("\033[31;01mNUMERO 41\033[00m\n"); //NUMERO
  	printf("%x\n", UINT_MAX);
  	printf("%x\n", UINT_MAX); //MYPRINTF
	printf("\033[31;01mNUMERO 42\033[00m\n"); //NUMERO
	printf("%d %hd %d", 7, 7, 7);
	printf("\n"); //SAUT DE LIGNE
	printf("%d %hd %d", 7, 7, 7); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 43\033[00m\n"); //NUMERO
	printf("%000012x", 3735928559U);
	printf("\n"); //SAUT DE LIGNE
	printf("%000012x", 3735928559U); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 44\033[00m\n"); //NUMERO
  	printf("-%3d-%3d-%3d-", -1, -12, -123);
	printf("\n"); //SAUT DE LIGNE
  	printf("-%3d-%3d-%3d-", -1, -12, -123); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 45\033[00m\n"); //NUMERO
  	printf("-%.3d-%.3d-%.3d-", 12, 123, 1234);
	printf("\n"); //SAUT DE LIGNE
  	printf("-%.3d-%.3d-%.3d-", 12, 123, 1234); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 46\033[00m\n"); //NUMERO
 	printf("-%08.0d-", 0);
	printf("\n"); //SAUT DE LIGNE
 	printf("-%08.0d-", 0); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 47\033[00m\n"); //NUMERO
  	printf("-%2.0d-\n", 7);
  	printf("-%2.0d-\n", 7); //MYPRINTF
	printf("\033[31;01mNUMERO 48\033[00m\n"); //NUMERO
  	printf("-%2.0d-\n", 0);
  	printf("-%2.0d-\n", 0); //MYPRINTF
	printf("\033[31;01mNUMERO 49\033[00m\n"); //NUMERO
  	printf("-%.3d-%.3d-%.3d-", -12, -123, -1234);	
	printf("\n"); //SAUT DE LIGNE
  	printf("-%.3d-%.3d-%.3d-", -12, -123, -1234); //MYPRINTF	
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 50\033[00m\n"); //NUMERO
	printf("-%d-%.0d-%.8d-%8.0d-%8.8d-", 0, 0, 0, 0, 0);
	printf("\n"); //SAUT DE LIGNE
	printf("-%d-%.0d-%.8d-%8.0d-%8.8d-", 0, 0, 0, 0, 0); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 51\033[00m\n"); //NUMERO
  	printf("%.3d %.-3d", 21, 21);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.3d %.-3d", 21, 21); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 52\033[00m\n"); //NUMERO
 	printf("%-*d", 10, 1234);
	printf("\n"); //SAUT DE LIGNE
 	printf("%-*d", 10, 1234); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 53\033[00m\n"); //NUMERO
  	printf("%*d",  10, 1234);
	printf("\n"); //SAUT DE LIGNE
  	printf("%*d",  10, 1234); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 54\033[00m\n"); //NUMERO
	printf("%08x", 543);
	printf("\n"); //SAUT DE LIGNE
	printf("%08x", 543); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 55\033[00m\n"); //NUMERO
 	printf("%x", 0x12345);	
	printf("\n"); //SAUT DE LIGNE
 	printf("%x", 0x12345); //MYPRINTF	
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 56\033[00m\n"); //NUMERO
	printf("%X", 0x12345);	
	printf("\n"); //SAUT DE LIGNE
	printf("%X", 0x12345); //MYPRINTF	
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 57\033[00m\n"); //NUMERO
	printf("%d %d %d", 0, 42, 2147483647);
	printf("\n"); //SAUT DE LIGNE
	printf("%d %d %d", 0, 42, 2147483647); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 58\033[00m\n"); //NUMERO
	printf("%d %d %d", -0, -42, -2147483647);
	printf("\n"); //SAUT DE LIGNE
	printf("%d %d %d", -0, -42, -2147483647); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 59\033[00m\n"); //NUMERO
	printf("%d %d %d %d %d %d %d %d %d %d %d %d", 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC);	
	printf("\n"); //SAUT DE LIGNE
	printf("%d %d %d %d %d %d %d %d %d %d %d %d", 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC); //MYPRINTF	
	printf("\n"); //SAUT DE LIGNE

	//CHAINES DE CARACTERES//
	printf("\n\033[34;01m   [!] CHAINES DE CARACTERES [!]\033[00m\n"); //TITRE
	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	printf("some text\n");
	printf("some text\n"); //MYPRINTF
	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
  	printf("abcdefghijklmnopqrstuvwxyz0123\n");
  	printf("abcdefghijklmnopqrstuvwxyz0123\n"); //MYPRINTF
	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
  	printf("abcdefghijklmnopqrstuvwxyz01234\n");
  	printf("abcdefghijklmnopqrstuvwxyz01234\n"); //MYPRINTF
	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
  	printf("abcdefghijklmnopqrstuvwxyz012345\n");
  	printf("abcdefghijklmnopqrstuvwxyz012345\n"); //MYPRINTF
	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
	printf("%s\n", "");
	printf("%s\n", ""); //MYPRINTF
	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
	printf("%s\n", "ABCDEF");
	printf("%s\n", "ABCDEF"); //MYPRINTF
	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
	printf("%10s", "Salut");
	printf("\n"); //SAUT DE LIGNE
	printf("%10s", "Salut"); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
  	printf("%10s", "Salut tout le monde");
	printf("\n"); //SAUT DE LIGNE
  	printf("%10s", "Salut tout le monde"); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
  	printf("%10.10s", "Salut tout le monde");
	printf("\n"); //SAUT DE LIGNE
  	printf("%10.10s", "Salut tout le monde");//MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	
	//CARACTERES//
	printf("\n\033[34;01m       [!] CARACTERES [!]\033[00m\n"); //TITRE
 	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
 	printf("%c %c\n", 'a', '&');
 	printf("%c %c\n", 'a', '&'); //MYPRINTF

	//POINTEURS//
 	printf("\n\033[34;01m       [!] POINTEURS [!]\033[00m\n"); //TITRE
 	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	printf("%p\n", NULL);
	printf("%p\n", NULL); //MYPRINTF
	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
	printf("%p\n", 0x123);
	printf("%p\n", 0x123); //MYPRINTF
	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
	printf("%p\n", main);
	printf("%p\n", main); //MYPRINTF

	//POINTEURS DESIGNANT UN ENTIER//
	printf("\n\033[34;01m[!] POINTEURS DESIGNANT UN ENTIER [!]\033[00m\n"); //TITRE
 	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE

	//POURCENT//
	printf("\n\033[34;01m       [!] POURCENT [!]\033[00m\n"); //TITRE
 	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	printf("%d %% %d\n", 1, 2);
	printf("%d %% %d\n", 1, 2); //MYPRINTF

	//MODIFICATEURS//
	printf("\n\033[34;01m      [!] MODIFICATEURS [!]\033[00m\n"); //TITRE
 	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	printf("-%4d-%-4d-%4d-\n", 7, 54, 12345);
	printf("-%4d-%-4d-%4d-\n", 7, 54, 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
  	printf("-%4s-%4s-\n", "A", "ABCDEF");
  	printf("-%4s-%4s-\n", "A", "ABCDEF"); //MYPRINTF
	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
  	printf("-%-4d-\n", 7);
  	printf("-%-4d-\n", 7); //MYPRINTF
	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
  	printf("-%4p-\n", main);
  	printf("-%4p-\n", main); //MYPRINTF
	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
  	printf("-%*d-\n", 4, 7);
  	printf("-%*d-\n", 4, 7); //MYPRINTF
	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
  	printf("-%*d-\n", -4, 7);
  	printf("-%*d-\n", -4, 7); //MYPRINTF
	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
  	printf("-%0*d-\n", 4, 7);
  	printf("-%0*d-\n", 4, 7); //MYPRINTF
	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
  	printf("-%3c-%-3c-\n", 'a', 'b');
  	printf("-%3c-%-3c-\n", 'a', 'b'); //MYPRINTF
	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
  	printf("-%3s-%-3s-\n", "A", "B");
  	printf("-%3s-%-3s-\n", "A", "B"); //MYPRINTF
	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO
  	printf("-%.4d-%.4d-%.d-%.0d-\n", 7, 12345, 1, 9);
  	printf("-%.4d-%.4d-%.d-%.0d-\n", 7, 12345, 1, 9); //MYPRINTF
	printf("\033[31;01mNUMERO 11\033[00m\n"); //NUMERO
  	printf("-%.4s-%.4s-%.s-\n", "A", "ABCDEF", "ABC");
  	printf("-%.4s-%.4s-%.s-\n", "A", "ABCDEF", "ABC"); //MYPRINTF
	printf("\033[31;01mNUMERO 12\033[00m\n"); //NUMERO
  	printf("-%.*d-\n", 4, 7);
  	printf("-%.*d-\n", 4, 7); //MYPRINTF
	printf("\033[31;01mNUMERO 13\033[00m\n"); //NUMERO
  	printf("-%.*d-\n", -4, 7);
  	printf("-%.*d-\n", -4, 7); //MYPRINTF
	printf("\033[31;01mNUMERO 14\033[00m\n"); //NUMERO
  	printf("%.1d %.0d %.1u %.0u %.1o %.0o %.1x %.0x\n", 0, 0, 0, 0, 0, 0, 0, 0);
  	printf("%.1d %.0d %.1u %.0u %.1o %.0o %.1x %.0x\n", 0, 0, 0, 0, 0, 0, 0, 0); //MYPRINTF
	printf("\033[31;01mNUMERO 15\033[00m\n"); //NUMERO
  	printf("%.5d\n", -17);
  	printf("%.5d\n", -17); //MYPRINTF
	printf("\033[31;01mNUMERO 16\033[00m\n"); //NUMERO
  	printf("-%6.4d-%4.6d-\n", 12345, 12345);
  	printf("-%6.4d-%4.6d-\n", 12345, 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 17\033[00m\n"); //NUMERO
  	printf("-%*.*d-%*.*d-\n", 6, 4, 12345, 4, 6, 12345);
  	printf("-%*.*d-%*.*d-\n", 6, 4, 12345, 4, 6, 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 18\033[00m\n"); //NUMERO
  	printf("-%.012d-\n", -1234);
  	printf("-%.012d-\n", -1234); //MYPRINTF
	printf("\033[31;01mNUMERO 19\033[00m\n"); //NUMERO
  	printf("-%6.4s-%4.6s-\n", "ABCDE", "ABCDE");
  	printf("-%6.4s-%4.6s-\n", "ABCDE", "ABCDE"); //MYPRINTF
	
	//COMBINAISONS//
	printf("\n\033[34;01m     [!] COMBINAISONS [!]\033[00m\n"); //TITRE
 	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	printf("%c %d %s", 42, 42, str);
	printf("\n"); //SAUT DE LIGNE
	printf("%c %d %s", 42, 42, str); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
	printf("%X %p %d", 0x12345, str, 42);
	printf("\n"); //SAUT DE LIGNE
	printf("%X %p %d", 0x12345, str, 42); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE

	//ERREURS//
	printf("\n\033[34;01m       [!] ERREURS [!]\033[00m\n"); //TITRE
 	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
 	printf("-%.4p-", main);
	printf("\n"); //SAUT DE LIGNE
 	printf("-%.4p-", main); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
  	printf("-%.-4d-", 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("-%.-4d-", 7); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
  	printf("%#s %0s", "ABC", "ABC");
	printf("\n"); //SAUT DE LIGNE
  	printf("%#s %0s", "ABC", "ABC"); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
  	printf("-%%-%-%-%0%-%1%-%2%-%.2%-%.%-%-2%-");
	printf("\n"); //SAUT DE LIGNE
  	printf("-%%-%-%-%0%-%1%-%2%-%.2%-%.%-%-2%-"); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
  	printf("%k", 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%k", 7); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
  	printf("%02k", 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%02k", 7); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
  	printf("%2");	
	printf("\n"); //SAUT DE LIGNE
  	printf("%2"); //MYPRINTF	
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
	printf("%?d", 7);
	printf("\n"); //SAUT DE LIGNE
	printf("%?d", 7); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
  	printf("%2*d", 4, 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%2*d", 4, 7); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO
  	printf("%.0*d", 4, 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.0*d", 4, 7); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 11\033[00m\n"); //NUMERO
  	printf("%*2d", 4, 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%*2d", 4, 7); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 12\033[00m\n"); //NUMERO
  	printf("%.*2d", 4, 7);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.*2d", 4, 7); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 13\033[00m\n"); //NUMERO
	printf("%*.*k", -32, 5);
	printf("\n"); //SAUT DE LIGNE
	printf("%*.*k", -32, 5); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 14\033[00m\n"); //NUMERO
	printf("%16k");
	printf("\n"); //SAUT DE LIGNE
	printf("%16k"); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 15\033[00m\n"); //NUMERO
  	printf("%0k %0.1k");
	printf("\n"); //SAUT DE LIGNE
  	printf("%0k %0.1k"); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 16\033[00m\n"); //NUMERO
  	printf("%%d", 17);
	printf("\n"); //SAUT DE LIGNE
  	printf("%%d", 17); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 17\033[00m\n"); //NUMERO
  	printf("%%%d", 17);
	printf("\n"); //SAUT DE LIGNE
  	printf("%%%d", 17); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 18\033[00m\n"); //NUMERO
  	printf("%*.*k %0*.*k", 0, 0, 0, 0);
	printf("\n"); //SAUT DE LIGNE
  	printf("%*.*k %0*.*k", 0, 0, 0, 0); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 19\033[00m\n"); //NUMERO
  	printf("%.2p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.2p", main); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 20\033[00m\n"); //NUMERO
  	printf("%.12p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.12p", main); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 21\033[00m\n"); //NUMERO
  	printf("%2p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%2p", main); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 22\033[00m\n"); //NUMERO
  	printf("%12p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%12p", main); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 23\033[00m\n"); //NUMERO
  	printf("%012p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%012p", main); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 24\033[00m\n"); //NUMERO
  	printf("% 12p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("% 12p", main); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 25\033[00m\n"); //NUMERO
  	printf("%-12p", main);
	printf("\n"); //SAUT DE LIGNE
  	printf("%-12p", main); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 26\033[00m\n"); //NUMERO
  	printf("%.2p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.2p", NULL); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 27\033[00m\n"); //NUMERO
  	printf("%.12p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.12p", NULL); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 28\033[00m\n"); //NUMERO
  	printf("%2p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%2p", NULL); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 29\033[00m\n"); //NUMERO
  	printf("%12p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%12p", NULL); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 30\033[00m\n"); //NUMERO
  	printf("%012p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%012p", NULL); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 31\033[00m\n"); //NUMERO
  	printf("% 12p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("% 12p", NULL); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 32\033[00m\n"); //NUMERO
  	printf("%-12p", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%-12p", NULL); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 33\033[00m\n"); //NUMERO
	printf("%2s", NULL);
	printf("\n"); //SAUT DE LIGNE
	printf("%2s", NULL); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 34\033[00m\n"); //NUMERO
  	printf("%10s", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%10s", NULL); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 35\033[00m\n"); //NUMERO
  	printf("%.5s", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.5s", NULL); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 36\033[00m\n"); //NUMERO
  	printf("%.6s", NULL);
	printf("\n"); //SAUT DE LIGNE
  	printf("%.6s", NULL); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 37\033[00m\n"); //NUMERO
  	printf("%zy");
	printf("\n"); //SAUT DE LIGNE
  	printf("%zy"); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE

	//BONUS//
	printf("\n\033[34;01m          [!] BONUS [!]\033[00m\n"); //TITRE
 	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	printf("%+d\n", 12345);
	printf("%+d\n", 12345); //MYPRINTF
	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
	printf("%d %d %+d %+d % d % d %+ d %+ d % +d % +d\n", 7, -7, 7, -7, 7, -7, 7, -7, 7, -7);
	printf("%d %d %+d %+d % d % d %+ d %+ d % +d % +d\n", 7, -7, 7, -7, 7, -7, 7, -7, 7, -7); //MYPRINTF
	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
	printf("%d %hd %d\n", 123456, 123456, 123456);
	printf("%d %hd %d\n", 123456, 123456, 123456); //MYPRINTF
	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
  	printf("%u %hu %u\n", 123456U, 123456U, 123456U);
  	printf("%u %hu %u\n", 123456U, 123456U, 123456U); //MYPRINTF
	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
  	printf("%d %ld %d\n", 123456, 123456, 123456);
  	printf("%d %ld %d\n", 123456, 123456, 123456); //MYPRINTF
	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
	printf("%#012x\n", 3735928559U);
	printf("%#012x\n", 3735928559U); //MYPRINTF
	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
  	printf("%#-*.*lX\n", 16, 12, 3735928559UL);
  	printf("%#-*.*lX\n", 16, 12, 3735928559UL); //MYPRINTF
	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
	printf("-%+-+4d-", 1);
	printf("\n"); //SAUT DE LIGNE
	printf("-%+-+4d-", 1); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
	printf("-%+3d-%+.3d", 12, 12);
	printf("\n"); //SAUT DE LIGNE
	printf("-%+3d-%+.3d", 12, 12); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO
  	printf("-%+8.4d-%8.0d-%+8.0d-", 13, 0, 0);	
	printf("\n"); //SAUT DE LIGNE
  	printf("-%+8.4d-%8.0d-%+8.0d-", 13, 0, 0); //MYPRINTF	
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 11\033[00m\n"); //NUMERO
 	printf("%+010d", 543);
	printf("\n"); //SAUT DE LIGNE
 	printf("%+010d", 543); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 12\033[00m\n"); //NUMERO
  	printf("%-+10d", 543);
	printf("\n"); //SAUT DE LIGNE
  	printf("%-+10d", 543); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 13\033[00m\n"); //NUMERO
  	printf("%-+10d", 1234567890);
	printf("\n"); //SAUT DE LIGNE
  	printf("%-+10d", 1234567890); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 14\033[00m\n"); //NUMERO
  	printf("%-+10.10d", 1234567890);	
	printf("\n"); //SAUT DE LIGNE
  	printf("%-+10.10d", 1234567890); //MYPRINTF	
	printf("\n"); //SAUT DE LIGNE

	//ERREURS BONUS//
	printf("\n\033[34;01m    [!] ERREURS BONUS [!]\033[00m\n"); //TITRE
 	printf("\033[34;01m///////////////////////////////////////\033[00m\n"); //LIGNE
	printf("\033[31;01mNUMERO 1\033[00m\n"); //NUMERO
	printf("%+s %0-s", "ABC", "ABC");
	printf("\n"); //SAUT DE LIGNE
	printf("%+s %0-s", "ABC", "ABC"); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 2\033[00m\n"); //NUMERO
  	printf("%+c %0-c %.2c", 'a', 'b', 'c');
	printf("\n"); //SAUT DE LIGNE
  	printf("%+c %0-c %.2c", 'a', 'b', 'c'); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 3\033[00m\n"); //NUMERO
  	printf("%d %2n", 1, &n);
	printf("\n"); //SAUT DE LIGNE
  	printf("%d %2n", 1, &n); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 4\033[00m\n"); //NUMERO
  	printf("%d %.2n", 1, &n);
	printf("\n"); //SAUT DE LIGNE
  	printf("%d %.2n", 1, &n); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 5\033[00m\n"); //NUMERO
  	printf("%d %02n", 1, &n);
	printf("\n"); //SAUT DE LIGNE
  	printf("%d %02n", 1, &n); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 6\033[00m\n"); //NUMERO
  	printf("%d %+n", 1, &n);
	printf("\n"); //SAUT DE LIGNE
  	printf("%d %+n", 1, &n); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 7\033[00m\n"); //NUMERO
  	printf("%d %-2n", 1, &n);
	printf("\n"); //SAUT DE LIGNE
  	printf("%d %-2n", 1, &n); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 8\033[00m\n"); //NUMERO
 	printf("%+0# -2.k");	
	printf("\n"); //SAUT DE LIGNE
 	printf("%+0# -2.k"); //MYPRINTF	
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 9\033[00m\n"); //NUMERO
	printf("%+ *.*k", -32, 5);	
	printf("\n"); //SAUT DE LIGNE
	printf("%+ *.*k", -32, 5); //MYPRINTF	
	printf("\n"); //SAUT DE LIGNE
	printf("\033[31;01mNUMERO 10\033[00m\n"); //NUMERO
	printf("%hp", main);
	printf("\n"); //SAUT DE LIGNE
	printf("%hp", main); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE
	printf("\033[32;01m%hp\033[00m", main); //MYPRINTF
	printf("\n"); //SAUT DE LIGNE

	return (EXIT_SUCCESS);
}
