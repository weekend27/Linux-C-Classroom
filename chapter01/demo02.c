
/*
**getchar接收一个字符,putchar输出一个字符
*/


#include<stdio.h>

main(){
	char c;
	printf("请输入一个字符:\n");
	c = getchar();
	printf("输出刚才的字符:\n");
	putchar(c);
	printf("\n");
}
