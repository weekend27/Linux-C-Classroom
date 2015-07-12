/*
**输出数组中的全部元素（通过数组名计算元素的地址，找出元素的值）。
*/

#include<stdio.h>

main(){
	int a[10],i;
	for(i = 0; i < 10; i++)
		*(a + i) = i;
	for(i = 0; i < 10; i++)
		printf("a[%d] = %d\n", i, *(a + i));
}
