/*
结构体变量代表的是结构体本身这个整体，而不是首地址，作为函数参数时传递的整个结构体，也就是所有成员。
如果结构体成员较多，尤其是成员为数组时，传送的时间和空间开销会很大，严重降低程序的效率。
所以最好的办法就是使用指针，也就是用指针变量作为函数参数。这时由实参传向形参的只是地址，非常快速。
*/

//计算一组学生的平均成绩和不及格人数

#include<stdio.h>

#define STU struct stu

STU{
	int num;
    char *name;
    char sex;
    float score;
}stu1[]={
	{101,"Li ping",'M',45},
    {102,"Zhang ping",'M',62.5},
    {103,"He fang",'F',92.5},
    {104,"Cheng ling",'F',87},
    {105,"Wang ming",'M',58}
};

void average(STU *ps);

main(){
	STU *ps = stu1;
	average(ps);
}

void average(struct stu *ps){
	int flunk = 0, i;
	float sum = 0;
	for(i = 0; i < 5; i++, ps++){
		sum += ps->score;
		if(ps->score < 60)
			flunk++;
	}
	printf("sum = %.2f, average = %.2f, flunk = %d\n", sum, sum/5, flunk);
}



