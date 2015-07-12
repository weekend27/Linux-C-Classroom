/*
**指针基础
*/
#include<stdio.h>

main(){
    int a,b;
    int *pointer_1, *pointer_2;
    int c;

    a=100;
    b=50;
    pointer_1=&a;
    pointer_2=&b;

    //pointer_1--;
    //pointer++;
    //(pointer_1)++;
    //(pointer_2)++;
    c = *pointer_1 + 10;

    //pointer_2 = pointer_1;		//make pointer_2 turn to a
    *pointer_2 = *pointer_1;		//make b = a and *pointer_2 = *pointer_1
    
    printf("%d,%d\n",a,b);
    printf("%d,%d\n",*pointer_1, *pointer_2);
    printf("%d\n", c);
}