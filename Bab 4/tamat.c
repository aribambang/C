// file program: tamat.c
//pemakaian break untuk keluar dari looping
#include <stdio.h>
main()
{	
	char kar;
	printf("Ketik sembarang kalimat");
	printf("dan akhiri dengan ENTER \n\n");
	for ( ; ; )
	{
		kar = getchar();
		if(kar=='\n')
		break;
	}
	printf("selesai\n");
}
