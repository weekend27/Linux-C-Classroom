#include<stdlib.h>
#include<stdio.h>
#include<time.h>/*用到了time函数，所以要有这个头文件*/
#define MAX 15
 
int main(void)
{
	int number[MAX] = {0};
	int i;
	srand((unsigned)time(NULL));/*播种子*/
	printf("产生随机数序列如下:\n");
	for(i = 0; i < MAX; i++)
	{
		number[i] = rand() % 100;/*产生100以内的随机整数*/
		printf("%d\t",number[i]);
	}
	printf("\n");
	return 0;
}
