//file progarm: jumkar.c
//menghitung jumlah kata dan karakter dalam suatu kalimat
#include <stdio.h>
main()
{
	char kar;
	int jumkar=0,jumspasi=0;
	puts("Masukkan sebuah kalimat dan akiri dengan ENTER.\n");
	puts("Saya akan menghitung jumlah karakter.\n");
	puts("Pada kalimat tersebut.\n");
	while((kar=getchar()) != '\n')
		{
			jumkar++;
			if(kar==' ') jumspasi++;
			
		} 
	printf("\nJumlah karakter	=%d", jumkar);
	printf("\nJumlah SPASI	=%d", jumspasi);	
}
