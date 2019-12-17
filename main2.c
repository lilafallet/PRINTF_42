	printf("\033[31;01m");
	printf("NUMERO ");
	printf("1");
	printf("\033[0m|");
	printf("");
	printf("|\033[32;01m|");
	ft_printf("");
	ft_printf("|\n---------------\n");


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


void	do_test(int init, char *format)
{
	static int i = 1;

	if (init == 1)
		i = 1;
	
	printf("\033[31;01m");
	printf("NUMERO %d", i);
	printf(format, );
	printf("");
	printf("|\033[32;01m|");
	ft_printf(format, );
	printf("|\n---------------\n");
	i++;
}


int	main(void)
{
	int	n = 42;
	char *str = "est-ce que ca marche ?";

	do_test(0, "%d %d %d %d %d %d %d %d\n", 0, 1, 9, 10, 11, 9999, 10000, 100001);

	printf("%d %d %d %d %d %d %d %d\n", 0, 1, 9, 10, 11, 9999, 10000, 100001);
	printf("%d\n", 12345);
	printf("%d\n", -12345);
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
  	printf("%x\n", UINT_MAX);
	printf("%d %hd %d", 7, 7, 7);
	printf("%000012x", 3735928559U);
  	printf("-%3d-%3d-%3d-", -1, -12, -123);
  	printf("\033[32;01m-%.3d-%.3d-%.3d-", 12, 123, 1234);
 	printf("-%08.0d-", 0);
  	printf("-%2.0d-\n", 7);
  	printf("-%2.0d-\n", 0);
  	printf("-%.3d-%.3d-%.3d-", -12, -123, -1234);	
	printf("-%d-%.0d-%.8d-%8.0d-%8.8d-", 0, 0, 0, 0, 0);
  	printf("%.3d %.-3d", 21, 21);
 	printf("%-*d", 10, 1234);
  	printf("%*d",  10, 1234);
	printf("%08x", 543);
 	printf("%x", 0x12345);	
	printf("%X", 0x12345);	
	printf("%d %d %d", 0, 42, 2147483647);
	printf("%d %d %d", -0, -42, -2147483647);
	printf("%d %d %d %d %d %d %d %d %d %d %d %d", 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC);	

	printf("some text\n");
  	printf("abcdefghijklmnopqrstuvwxyz0123\n");
  	printf("abcdefghijklmnopqrstuvwxyz01234\n");
  	printf("abcdefghijklmnopqrstuvwxyz012345\n");
	printf("%s\n", "");
	printf("%s\n", "ABCDEF");
	printf("%10s", "Salut");
  	printf("%10s", "Salut tout le monde");
  	printf("%10.10s", "Salut tout le monde");
	
 	printf("%c %c\n", 'a', '&');

	printf("%p\n", NULL);
	printf("%p\n", 0x123);
	printf("%p\n", main);


	printf("%d %% %d\n", 1, 2);

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
	
	printf("%c %d %s", 42, 42, str);
	printf("%X %p %d", 0x12345, str, 42);

 	printf("-%.4p-", main);
  	printf("-%.-4d-", 7);
  	printf("%#s %0s", "ABC", "ABC");
  	printf("-%%-%-%-%0%-%1%-%2%-%.2%-%.%-%-2%-");
  	printf("%k", 7);
  	printf("%02k", 7);
  	printf("%2");	
	printf("%?d", 7);
  	printf("%2*d", 4, 7);
  	printf("%.0*d", 4, 7);
  	printf("%*2d", 4, 7);
  	printf("%.*2d", 4, 7);
	printf("%*.*k", -32, 5);
	printf("%16k");
  	printf("%0k %0.1k");
  	printf("%%d", 17);
  	printf("%%%d", 17);
  	printf("%*.*k %0*.*k", 0, 0, 0, 0);
  	printf("%.2p", main);
  	printf("%.12p", main);
  	printf("%2p", main);
  	printf("%12p", main);
  	printf("%012p", main);
  	printf("% 12p", main);
  	printf("%-12p", main);
  	printf("%.2p", NULL);
  	printf("%.12p", NULL);
  	printf("%2p", NULL);
  	printf("%12p", NULL);
  	printf("%012p", NULL);
  	printf("% 12p", NULL);
  	printf("%-12p", NULL);
	printf("%2s", NULL);
  	printf("%10s", NULL);
  	printf("%.5s", NULL);
  	printf("%.6s", NULL);
  	printf("%zy");

	printf("%+d\n", 12345);
	printf("%d %d %+d %+d % d % d %+ d %+ d % +d % +d\n", 7, -7, 7, -7, 7, -7, 7, -7, 7, -7);
	printf("%d %hd %d\n", 123456, 123456, 123456);
  	printf("%u %hu %u\n", 123456U, 123456U, 123456U);
  	printf("%d %ld %d\n", 123456, 123456, 123456);
	printf("%#012x\n", 3735928559U);
  	printf("%#-*.*lX\n", 16, 12, 3735928559UL);
	printf("-%+-+4d-", 1);
	printf("-%+3d-%+.3d", 12, 12);
  	printf("-%+8.4d-%8.0d-%+8.0d-", 13, 0, 0);	
 	printf("%+010d", 543);
  	printf("%-+10d", 543);
  	printf("%-+10d", 1234567890);
  	printf("%-+10.10d", 1234567890);	

	printf("%+s %0-s", "ABC", "ABC");
  	printf("%+c %0-c %.2c", 'a', 'b', 'c');
  	printf("%d %2n", 1, &n);
  	printf("%d %.2n", 1, &n);
  	printf("%d %02n", 1, &n);
  	printf("%d %+n", 1, &n);
  	printf("%d %-2n", 1, &n);
 	printf("%+0# -2.k");	
	printf("%+ *.*k", -32, 5);	
	printf("%hp", main);

	return (EXIT_SUCCESS);
}
