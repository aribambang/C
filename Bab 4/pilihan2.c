//file Program: pilihan2.c 
//untuk membaca tombol y atau t
#include <stdio.h>
main()
{
	char pilihan;
	int sudah_benar = 0;
	printf("Pilihlah Y atay T. \n");
	do
	{
		pilihan = getchar();
		sudah_benar = (pilihan == 'Y') || (pilihan == 'y') || 
		(pilihan == 'T') || (pilihan == 't'); 
	} while(! sudah_benar);
	
	switch(pilihan)
	{
		case 'Y':
		case 'y':
			puts("\nPilihan anda adalah Y");
			break;
		case 'T':
		case 't':
			puts("\nPilihan anda adalah T");
			break;
	}
}

