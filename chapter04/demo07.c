/*
在同一个源文件中，如果全局变量与局部变量同名，那么在局部变量的作用范围内，外部变量被“屏蔽”，也就是它不起作用。

在C语言中，所有的函数定义，包括主函数main在内，都是平行的
*/

#include<stdio.h>

int compare(int a, int b);

int a = 3, b = 5;

int compare(int a, int b){
	return (a > b) ? a : b;
}

main(){
	int a = 7;
	printf("max = %d\n", compare(a, b));
}