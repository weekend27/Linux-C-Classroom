/*
*/

#include<stdio.h>

main(){
	struct stu{
		char *name;
		int num;
		char *sex;
		float score;
	};

	struct stu stu1;
	stu1.name = "Lebron James";
	stu1.num = 23;
	stu1.sex = "Man";
	stu1.score = 96.84;

	printf("Hello everyone! My name is %s, a basketball player, but with good scores(%.2f) and my num is No.%d\n",stu1.name, stu1.score, stu1.num);

}