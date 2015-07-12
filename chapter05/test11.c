/*
**calculate average
*/

#include<stdio.h>

float aver(float *pa);

main(){
	float sco[5], av, *sp;
	int i;
	sp = sco;
	printf("\ninput 5 scores:\n");
	for(i = 0; i < 5; i++)
		scanf("%f", &sco[i]);
	av = aver(sp);
	printf("average score is %5.2f\n", av);
}

float aver(float *pa){
	int i;
	float av, s = 0;
	for(i = 0; i < 5; i++)
		s = s + *pa++;
	av = s / 5;
	return av;
}
