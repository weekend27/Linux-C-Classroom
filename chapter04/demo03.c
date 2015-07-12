/*
C语言允许宏带有参数。在宏定义中的参数称为形式参数，在宏调用中的参数称为实际参数。

对带参数的宏，在调用中，不仅要宏展开，而且要用实参去代换形参。
*/

#include<stdio.h>

#define MAX(a, b) (a > b) ? a : b

main(){
	int x, y, max;
	printf("input two numbers:\n");
	scanf("%d %d", &x, &y);
	max = MAX(x, y);
	printf("max = %d\n", max);
}