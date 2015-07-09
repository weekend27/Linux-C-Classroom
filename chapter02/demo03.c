/*
**delete characters from s1 which match to s2
*/

#include<stdio.h>
#include<string.h>

main(){

	//initialize
	char s1[30], s2[30];
	int i, j, k;

	//assignment
	strcpy(s1,"1234567");
	strcpy(s2,"34598");

	//squeeze
	for(i = k = 0; s1[i] != '\0'; i++){
		for(j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
			;
		if (s2[j] == '\0')			//end of string, no match
			s1[k++] = s1[i];
	}
	s1[k] = '\0';

	//print s1
	printf("the new array from s1 is %s\n",s1);
}


