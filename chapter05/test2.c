#include<stdio.h>

main(){
	//定义指针变量和赋值同时进行。若是int x,y,*px; *px=&x;这样就错了
	int *p1, *p2, *p, a, b;
	scanf("%d,%d\n",&a, &b);
	p1 = &a;
	p2 = &b;
	if(a < b){
		//change a and b, wrong
		/*
		*p = *p1;
		*p1 = *p2;
		*p2 = *p;
		*/
		//a and b do not change, only change p1 and p2
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("a = %d, b = %d\n", a, b);
	printf("max = %d, min = %d\n", *p1, *p2);
}