/*
**从10个数中找出其中最大值和最小值。
**调用一个函数只能得到一个返回值，今用全局变量在函数之间“传递”数据。
*/

#include<stdio.h>

int max, min;   /*全局变量*/

main(){
	int i, number[10];
	printf("enter 10 integer numbers:\n");
	for(i = 0; i < 10; i++)
		scanf("%d", &number[i]);
	max_min_value(number, 10);
	printf("max = %d, min = %d\n", max, min);
}

max_min_value(int array[], int n){
	int *p, *array_end;
	array_end = array + n;
	max = min = *array;
	for(p = array + 1; p < array_end; p++)
		if(*p > max)
			max = *p;
		else if(*p < min)
			min = *p;
	return;
}