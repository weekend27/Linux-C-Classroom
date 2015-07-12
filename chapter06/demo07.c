/*
实际问题中，有些变量的取值被限制在一定范围内。例如，一个星期内只有七天，一年只有十二个月，一个班每周有六门课程等。

C语言提供了一种枚举（Enum）类型，可以列出所有可能的取值。定义形式为：
enum 变量名{ 枚举值列表 };
这些值也称为枚举元素。注意最后的分号;不能少。

例如，列出一个星期有几天：
enum week{sun, mon, tue, wed, thu, fri, sat};
和结构体一样，枚举变量可以先定义后说明，也可以在定义的同时说明，例如：
enum week a, b, c;
或者：
enum week{sun, mon, tue, wed, thu, fri, sat} a, b, c;
枚举值为常量，不是变量，不能赋值。枚举值默认从0开始，逐个加1。
也就是说，上面的代码定义了7个常量，分别为 sun、mon…sat，它们的值分别为 0、1…6。

只能把枚举值赋予枚举变量，例如：
a = sun;
b = sat;
同时，不建议把数值直接赋给枚举变量，例如：
a = 1;
b = 6;
如果一定要使用数值，必须使用强制类型转换：
a = (enum week)1;
b = (enum week)6;
因为已经使用了 sun、mon…sat 几个标识符，所以不能再使用它们来定义变量等，例如：
int sun = 3;
char mon;
都是错误的。
*/

#include<stdio.h>

main(){
	enum week{
		sun, mon, tue, wed, thu, fri, sat
	}a, b, c;
	a = sun;
	b = mon;
	c = tue;
	printf("%d, %d, %d\n", a, b, c);
}