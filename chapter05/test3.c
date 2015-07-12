/*
**比较两个数的大小
*/
#include<stdio.h>

main(){
    int a,b;
    int *pointer_1,*pointer_2;
    scanf("%d,%d\n",&a,&b);

    pointer_1 = &a;
    pointer_2 = &b;

    if(a < b) 
        swap(pointer_1,pointer_2);

    printf("max = %d, min = %d\n",*pointer_1,*pointer_2);
}

//correct
swap(int *p1,int *p2){
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}

//wrong, 不能企图通过改变指针形参的值而使指针实参的值改变
/*
swap(int *p1,int *p2){
    int *p;
    p=p1;
    p1=p2;
    p2=p;
}
*/

//wrong
/*
swap(int *p1, int *p2){
    int *temp;
    *temp=*p1;      //此语句有问题
    *p1=*p2;
    *p2=temp;
}
*/
