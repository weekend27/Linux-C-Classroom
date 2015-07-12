/*
**比较三个数的大小
*/
#include<stdio.h>

main(){
	int a, b, c, *pt1, *pt2, *pt3;
	printf("请输入三个整数:\n");
	scanf("%d, %d, %d\n",&a, &b, &c);

	pt1 = &a;
	pt2 = &b;
	pt3 = &c;

	//将变量地址作为参数传递到子函数
	exchange(pt1, pt2, pt3);

	printf("从大到小排序结果:\n");
	printf("%d,%d,%d\n", *pt1, *pt2, *pt3);

}

exchange(int *pt1, int *pt2, int *pt3){
	//将变量地址作为参数传递到子函数
	if(*pt1 < *pt2) swap(pt1, pt2);
	if(*pt1 < *pt3) swap(pt1, pt3);
	if(*pt2 < *pt3) swap(pt2, pt3);
}

swap(int *p1,int *p2){
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}