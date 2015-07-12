#include<stdio.h>

main(){
	//数组名代表数组的首地址，也就是第0号元素的地址。
	int a[10] = {1,2,3};
	int *p1, *p2;
	p1 = &a[0];
	p2 = a;

	printf("p1 = %d, p2 = %d\n", *p1, *p2);

}