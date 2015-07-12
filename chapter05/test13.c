/*
**从10个数中找出其中最大值和最小值。
**调用一个函数只能得到一个返回值，今用全局变量在函数之间“传递”数据。
**函数max_min_value的形参array可以改为指针变量类型。
**实参也可以不用数组名，而用指针变量传递地址。
**
**归纳起来，如果有一个实参数组，想在函数中改变此数组的元素的值，
**实参与形参的对应关系有以下4种：
**1) 形参和实参都是数组名。
**2) 实参用数组，形参用指针变量。
**3) 实参、型参都用指针变量。
**4) 实参为指针变量，型参为数组名。
*/

#include<stdio.h>

int max, min;   /*全局变量*/

void max_min_value(int *array, int n);

main(){
	int i, number[10], *p;
	p = number;
	printf("enter 10 integer numbers:\n");
	for(i = 0; i < 10; i++, p++)
		scanf("%d", p);
	p = number;
	max_min_value(p, 10);
	printf("max = %d, min = %d\n", max, min);
}

void max_min_value(int *array, int n){
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