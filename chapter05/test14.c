/*
用实参指针变量改写将n个整数按相反顺序存放。
*/

#include<stdio.h>

void inv(int *x, int n);

main(){
	int i, number[10], *p;
	p = number;
	printf("enter 10 integer numbers:\n");
	for(i = 0; i < 10; i++, p++)
		scanf("%d", p);
	p = number;

	printf("The original array :\n");
	for(i = 0; i < 10; i++, p++)
		printf("%d ", *p);

	p = number;
	inv(p, 10);


	printf("\nThe array has been inverted :\n");
	for(; p < number + 10; p++)
		printf("%d ", *p);
	printf("\n");
}

void inv(int *x, int n){
	int *p, m, temp, *i, *j;
	m = (n - 1) / 2;
	i = x;
	j = x + n - 1;
	p = x + m;
	for(; i <= p; i++, j--){
		temp = *i;
		*i = *j;
		*j = temp;
	}
	return;
}