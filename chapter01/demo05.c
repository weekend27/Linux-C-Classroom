/*
**统计输入文本的行数
*/

#include<stdio.h>

void main(){
	int c, nl;

	nl = 0;
	while((c = getchar()) != EOF)
		if(c == '\n')
			++nl;
	printf("输入文本的行数是: %d\n",nl);
}

