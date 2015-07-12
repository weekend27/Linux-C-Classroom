/*
**my_strcat:concatenate t to the end of s; pointer version
*/
#include<stdio.h>
#include<string.h>

#define MAXNUM 200

void my_strcat(char *s, char *t);

main(){
	char s[MAXNUM],t[MAXNUM];

	strcpy(s, "hello, ");
	strcpy(t, "weekend!");

	my_strcat(s, t);

	printf("result : %s\n", s);

}

void my_strcat(char *s, char *t){
	while(*s)
		s++;
	while(*s++ = *t++)
		;
}