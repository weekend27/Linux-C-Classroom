/*
**trim:delete blanks, tables and new line character in the end of string
*/

#include<stdio.h>
#include<string.h>

main(){
	int trim(char s[]);
	int pos;
	char s[50];
	strcpy(s,"hello\t");

	pos = trim(s);
	printf("pos = %d\n", pos);
}

int trim(char s[]){
	int n;
	for(n = strlen(s)-1; n >= 0; n--)
		if(s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;
	s[n+1] = '\0';
	return n;
}

