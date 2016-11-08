/* File program : pre_post.c
	Contoh penggunaan pre & post Increment operator
*/

#include <stdio.h>

main()
{
	int count=1, loop;
	loop= ++count; /* count=count+1; loop=count*/
	printf("loop = %d, count = %d\n", loop,count);
	loop= count++; /* loop=count; count=count+1 */
	printf("loop = %d, count = %d\n", loop,count);
}
