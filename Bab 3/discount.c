/* File program : discount.c
	Contoh penggunaan if untuk menghitung nilai discount
*/

#include <stdio.h>

main()
{
	double total_pembelian, discount = 0;
	/*discount diinisialisasi dengan nilai 0*/
	
	printf("Total pembelian = Rp ");
	scanf("%lf", &total_pembelian);
	
	if(total_pembelian >= 100000)
	discount = 0.05 * total_pembelian; //discount 5%
	printf("Besarnya discount = RP %.2lf\n", discount);
}
