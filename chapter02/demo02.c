/*
**change string s from char type to int type
*/

#include<stdio.h>
#include<string.h>

main(){
	//initialization
	char s[50];
	int i, n;

	//assignment
	strcpy(s,"789234651");

	//change
	n = 0;
	for(i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');

	//print n
	printf("the int number of the number string is: %d\n", n);
}
