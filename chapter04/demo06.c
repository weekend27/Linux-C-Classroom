/*
用递归计算 n!
*/

#include<stdio.h>

long factorial(int n);

main(){
	printf("10! = %ld\n", factorial(10));
}

long factorial(int n){
    int i;
    long result=1;
    if(n==0 || n==1){
        return 1;
    }else{
    	result = factorial(n - 1) * n;    // 递归调用
    }
    
    return result;
}