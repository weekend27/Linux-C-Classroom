/*
将指针变量指向一个格式字符串，用在printf函数中，
用于输出二维数组的各种地址表示的值。但在printf语句中用指针变量PF代替了格式串。 
这也是程序中常用的方法。
*/

#include<stdio.h>

main(){
	static int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	char *PF;
	PF = "%d,%d,%d,%d,%d\n";
	printf(PF,a,*a,a[0],&a[0],&a[0][0]);
	printf(PF,a+1,*(a+1),a[1],&a[1],&a[1][0]);
	printf(PF,a+2,*(a+2),a[2],&a[2],&a[2][0]);
	printf("%d,%d\n",a[1]+1,*(a+1)+1);
	printf("%d,%d\n",*(a[1]+1),*(*(a+1)+1));
}