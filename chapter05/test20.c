/*
所谓函数类型是指函数返回值的类型。
在C语言中允许一个函数的返回值是一个指针（即地址），这种返回指针值的函数称为指针型函数。

函数名之前加了*号表明这是一个指针型函数，它的返回值是一个指针。
*/

// 返回两个字符串中较长的一个

#include<stdio.h>
#include<string.h>

char *compare(char *str1, char *str2);

main(){
	char *s1 = "C Language is very nice!";
	char *s2 = "hello, weekend and yoga!";
	char *longstr;
	longstr = compare(s1, s2);
	printf("Long string is \"%s\"\n", longstr);
}

char *compare(char *str1, char *str2){
	if(strlen(str1) >= strlen(str2)){
		return str1;
	}else{
		return str2;
	}
}
