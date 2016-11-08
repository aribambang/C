/* File program : lingkaran.c
	Menghitung keliling dan luas lingkaran
*/

#include <stdio.h>

main()
{
	double radius, keliling, luas;
	
	printf("Masukkan jari-jari lingakran: ");
	scanf("%lf",&radius);
	keliling = 2 * 3.14 * radius;
	luas = 0.5 * 3.14 * radius * radius;
	
	printf("\nData Lingkaran\n");
	printf("jari-jari = %8.2lf\n",radius);
	printf("keliling = %8.2lf\n",keliling);
	printf("luas = %8.2lf\n",luas);
}
