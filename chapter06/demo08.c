/*
共用体（共同体）的定义和结构体类似，
不过结构体的各个成员都会分配相应的内存空间，而共用体的所有成员共享一段内存，
它们的起始地址一样，并且同一时刻只能使用其中的一个成员变量。

共用体定义的一般格式为：
union 共用体名{
    成员列表
};

共用体所占用的内存空间大小等于最长的成员所占用的字节数。
共用体使用了覆盖技术，几个成员变量相互覆盖，从而使几个不同变量共占同一段内存。
这也就意味着，同一时刻只能存放一个成员变量的值，只能有一个成员存在，
不可能像结构体一样同时存放。如果对新的成员变量赋值，就会把原来成员变量的值覆盖掉。

两个不能：
不能使用共用体变量，只能引用共用体变量中的成员。
不能在定义共用体变量时进行初始化。
*/

#include <stdio.h>

union{
	int i;
	char c;
}a;

main(){
	printf("Size of a: %ld\n", sizeof(a));
	a.c = 'W';
	printf("a.i = %d\n", a.i);
	a.i = 0x42;		//0x42为字母B的ASCII码
	printf("a.c = %c\n", a.c);
}