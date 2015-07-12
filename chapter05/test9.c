/*
**print all numbers in the array
*/

#include<stdio.h>

main(){
	int a[10],i,*p;
	p = a;
	for(i = 0; i < 10; i++){
		*p = i;		//same as a[i] = i;
		printf("a[%d] = %d\n", i, *p++); 	//取出p所指当前位置的值后,再将指针向后移动一位
	}
}
