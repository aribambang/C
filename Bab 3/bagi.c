/* File program : bagi.c
	Pemakaian if-else untuk menyeleksi bilangan pembbagi
*/

#include <stdio.h>

main()
{
	float a,b;
	
	printf("Masukkan nilai a : ");
	scanf("%f", &a);
	printf("Masukkan nilai b : ");
	scanf("%f", &b);
	
	if(b==0)
		printf("\n%g dibagi dengan nol = TAK BERHINGGA\n", a);
	else
		printf("\n%g dibagi dengan %g = %g", a,b, a/b);
}
