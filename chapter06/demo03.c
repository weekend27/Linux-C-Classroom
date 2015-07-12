/*
计算学生的平均成绩
*/

#include<stdio.h>

struct stu{
	char *name;
	int num;
	char sex;
	float score;
}class[] = {
	{"Huang Weijian", 27, 'M', 99.5},
	{"Yu Jia", 23, 'W', 93.4},
	{"Xiao Huangyu", 25, 'M', 90.3},
	{"Weekend", 34, 'W', 98.1}
};

main(){
	int i;
	float average, sum = 0;
	for(i = 0; i < 4; i++){
		sum += class[i].score;
	}
	average = sum / 4;

	printf("sum = %.2f, average = %.2f\n", sum, average);

}