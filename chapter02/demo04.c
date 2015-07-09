/*
**change string s to lower type
*/

#include<stdio.h>
#include<string.h>

main(){
	char s[30];
	int i, k;

	strcpy(s,"HWJyjOKlOve");

	k = 0;
	for(i = 0; s[i] != '\0'; i++)
		if(s[i] > 'A' && s[i] < 'Z')
			s[k++] = s[i] - 'A' + 'a';
		else
			s[k++] = s[i];

	//print s
	printf("the lower type of s is %s\n", s);

}