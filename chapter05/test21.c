/*
如果一个指针变量存放的又是另一个指针变量的地址，则称这个变量为指向指针的指针变量或指向指针的指针。

int a =100;
int *p1 = &a;
int **p2 = &p1;

*/

#include<stdio.h>

main(){
	unsigned int a = 100;
	unsigned int *p1 = &a;
	unsigned int **p2 = &p1;

	printf("a = %d,  p1 = %X,  &p1 = %X\n", a, p1, &p1);
	printf("**p2 = %d,  *p2 = %X,  p2 = %X\n", **p2, *p2, p2);
}