/*
用指针变量输出结构体数组

应该注意的是，一个结构体指针变量虽然可以用来访问结构体变量或结构体数组元素的成员，
但是，不能使它指向一个成员。也就是说不允许取一个成员的地址来赋予它。
所以，下面的赋值是错误的：
ps=&boy[1].sex;
而只能是：
ps=boy;  // 赋予数组首地址
或者是：
ps=&boy[0];  //赋予0号元素首地址


*/
#include <stdio.h>

struct stu{
    int num;
    char *name;
    char sex;
    float score;
} *ps, stu1[5]={
    {101, "Zhou ping", 'M', 45},
    {102, "Zhang ping", 'M', 62.5},
    {103, "Liou fang", 'F', 92.5},
    {104, "Cheng ling", 'F', 87},
    {105, "Wang ming", 'M', 58}
};

int main(){
    printf("No\tName\t\tSex\tScore\t\n");
    for(ps=stu1; ps<stu1+5; ps++)
        printf("%d\t%s\t%c\t%.2f\t\n", ps->num, ps->name, ps->sex, ps->score);

    return 0;
}