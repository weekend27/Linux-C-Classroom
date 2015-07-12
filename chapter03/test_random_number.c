#include<stdlib.h>/*用到了srand函数，所以要有这个头文件*/
#include<stdio.h>
#define MAX 15
 
int main()
{
	int number[MAX] = {0};
	int i;
	unsigned int seed;
	printf("手动输入随机数种子:\n");
	scanf("%d",&seed);/*手动输入种子*/
	srand(seed);
	printf("产生随机数如下:\n");
	for(i = 0; i < MAX; i++){
		number[i] = rand() % 100;/*产生100以内的随机整数*/
		printf("%d\t",number[i]);
	}
	printf("\n");
	return 0;
}

