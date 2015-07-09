/*
**unescape:convert escape sequences into real characters while copying the string t to s
*/

#include<stdio.h>
#include<string.h>

main(){
	char s[50],t[20];
	void unescape(char s[], char t[]);

	strcpy(t,"hello\\t,weekend.\\nhello,\\tc++.");
	strcpy(s,"");

	unescape(s,t);

}

void unescape(char s[], char t[]){
	int i, j;
	for(i = j = 0;t[i] != '\0'; i++)
		if(t[i] != '\\')
			s[j++] = t[i];
		else{
			switch(t[++i]){
				case 'n':
					s[j++] = '\n';
					break;
				case 't':
					s[j++] = '\t';
					break;
				default:			//all other chars
					s[j++] = '\\';
					s[j++] = t[i];
					break;
			}			
		}

	s[j] = '\0';

	printf("the s string is : %s\n", s);
}
