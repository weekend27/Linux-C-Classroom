/*
**reverse:reverse characters in string s
*/

#include<stdio.h>
#include<string.h>

main(){
	void reverse(char s[]);
	char s[30];
	strcpy(s,"hello,weekend!");
	reverse(s);
}

void reverse(char s[]){
	int c, i, j;

	for(i = 0, j = strlen(s)-1; i < j; i++, j--){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}

	printf("the reversed array is : %s\n",s);
}
