//file program : keluar.c
//pemakaian exit() untuk menghentikan eksekusi program
#include <stdio.h>
#include <stdlib.h>
main()
{
	char kar;
	printf("Tekanlah X untuk menghentikan program.\n");
	for ( ; ; )
	{
		while ((kar=getchar()) == 'X')
			exit(0);
	}
}
