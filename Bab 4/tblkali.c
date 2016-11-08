//file program: tblkali.c
//loop for besarang untuk membuat tabel perkalian
#include <stdio.h>
#define MAKS 10
main()
{
	int baris,kolom,hasil_kali;
	for(baris=1; baris<= MAKS; baris++)
		{
			for (kolom=1; kolom<=MAKS;kolom++)
			{
				hasil_kali=baris*kolom;
				printf("%4d", hasil_kali);
			}
			printf("\n\n");
		}
}
