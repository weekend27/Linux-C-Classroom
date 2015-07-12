/*
本例是把字符串指针作为函数参数的使用。
要求把一个字符串的内容复制到另一个字符串中，并且不能使用strcpy函数。
函数cprstr的形参为两个字符指针变量。pss指向源字符串，pds指向目标字符串。
注意表达式：(*pds=*pss)!=`\0'的用法。
*/

#include<stdio.h>

void cpystr(char *pss, char *pds);

main(){
	char *pa = "weekend", b[10], *pb;
	pb = b;
	cpystr(pa,pb);
	printf("string a = %s\nstring b = %s\n",pa, pb);
}

//版本1
// void cpystr(char *pss, char *pds){
// 	while((*pds = *pss) != '\0'){
// 		pds++;
// 		pss++;
// 	}
// }

//版本2,把指针的移动和赋值合并在一个语句中
// void cpystr(char *pss, char *pds){
// 	while((*pds++=*pss++)!='\0')
// 		;
// }

//版本3,进一步分析还可发现`\0'的ASCⅡ码为0，对于while语句只看表达式的值为非0就循环，为0则结束循环，
//因此也可省去“!=`\0'”这一判断部分
void cpystr(char *pss, char *pds){
	while(*pds++=*pss++)
		;
}



