/* File program : form_efg.c
	Perbedaan format %g, %e dan %f
*/

#include <stdio.h>

main()
{
	float x = 251000.0f;
	
	printf("Format e => %e\n",x);
	printf("Format f => %f\n",x);
	printf("Format g => %g\n",x);
}
