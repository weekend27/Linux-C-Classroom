/*
1!+2!+...+9!+10! 
*/
#include <stdio.h>

// 函数声明
long factorial(int n);
long sum(long n);

main(){
    printf("1!+2!+...+9!+10! = %ld\n", sum(10));
}

//求阶乘
long factorial(int n){
    int i;
    long result1 = 1;
    for(i = n; i > 0; i--){
        result1 *= i;
    }

    return result1;
}

// 求累加的和
long sum(long n){
    int i;
    long result = 0;
    for(i = 1; i <= n; i++){
        //嵌套调用
        result += factorial(i);
    }

    return result;
}
