/*
**change string s to higher type
*/

#include<stdio.h>
#include<string.h>

main(){
	char s[30];
	int i, k;

	strcpy(s,"HWJyjOKlOve");

	k = 0;
	for(i = 0; s[i] != '\0'; i++)
		if(s[i] > 'a' && s[i] < 'z')
			s[k++] = s[i] - 'a' + 'A';
		else
			s[k++] = s[i];

	//print s
	printf("the higher type of s is %s\n", s);

}