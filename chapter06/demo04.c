/*
指针也可以指向一个结构体变量。

应该把结构体变量的首地址赋给 pstu，而不能把结构体名赋给 pstu，而且结构体变量前面要加取地址符&。下面的写法都是错误的：
pstu = &stu;
pstu = stu1;

结构体名和结构体变量是两个不同的概念，不能混淆。
结构体名只能表示一个结构形式，是一种数据类型，编译器并不对它分配内存空间，就像 int、float 这些关键字本身不分配内存一样。
只有当一个变量被定义为这种数据类型时，才对该变量分配内存空间。
所以上面 &stu 这种写法是错误的，不可能去取一个结构体名的首地址。

另外，不要认为结构体和数组类似，数组名表示数组的首地址，而结构体变量不表示首地址，它表示的是结构体本身这块内存空间的整体。
就像int a;，a 不是首地址，而是表示它本身。

有了结构体指针，就可以获取结构体成员了，一般形式为：
(*结构指针变量).成员名
或者：
结构指针变量->成员名
例如：
(*pstu).num
或者：
pstu->num
注意(*pstu)两侧的括号不可少，因为成员符.的优先级高于*。如去掉括号写作*pstu.num，那么等效于*(pstu.num)，这样意义就完全不对了。
*/

#include <stdio.h>

struct stu{
    char *name;
    int num;
    char sex;
    float score;
} *pstu, stu1 = {"He fang", 1, 'F', 92.5};

int main(){
    pstu = &stu1;
    printf("Number=%d, Name=%s\n",stu1.num, stu1.name);
    printf("Sex=%c, Score=%.2f\n\n",stu1.sex, stu1.score);
    printf("Number=%d, Name=%s\n",(*pstu).num, (*pstu).name);
    printf("Sex=%c, Score=%.2f\n\n",(*pstu).sex, (*pstu).score);
    printf("Number=%d, Name=%s\n",pstu->num, pstu->name);
    printf("Sex=%c, Score=%.2f\n",pstu->sex, pstu->score);

    return 0;
}

