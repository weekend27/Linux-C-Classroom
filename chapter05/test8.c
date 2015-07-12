/*
**输出数组中的全部元素（用指针变量指向元素）。
*/

#include<stdio.h>

main(){
	int a[10],i,*p;
	p = a;
	//p = &a[0];
	for(i = 0; i < 10; i++)
		*(p + i) = i;
	for(i = 0; i < 10; i++)
		printf("a[%d] = %d\n", i, *(p + i));
}
