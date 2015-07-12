/*
输出字符串中n个字符后的所有字符。
*/

#include<stdio.h>

main(){
    char *ps="this is a book";
    int n=10;
    ps=ps+n;
    printf("%s\n",ps);
}