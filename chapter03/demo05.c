/*
**shellsort:increasing for v array
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

main(){
	void shellsort(int v[], int n);

	int i,n,v[10]={0};
	n = 10;
	srand(time(0));
	printf("original v[] is :\n");
	for(i=0;i<10;i++){
		v[i] = rand()%20;
		printf("%d  ",v[i]);
	}
	printf("\n");

	shellsort(v,n);

}

void shellsort(int v[], int n){
	int gap, i, j, temp;

	for(gap = n/2; gap > 0; gap /= 2){
		for(i = gap; i < n; i++){
			for(j = i-gap; j >= 0 && v[j] > v[j+gap]; j-=gap){
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
		}
	}

	//print v
	printf("after shellsort, the new v[] is: \n");
	for(i = 0; i < n; i++)
		printf("%d  ",v[i]);
	printf("\n");
}