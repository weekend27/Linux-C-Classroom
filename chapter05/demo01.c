/*
**my_strcat:concatenate t to the end of s; pointer version
*/
#include<stdio.h>
#include<string.h>

main(){

	void my_strcat(const char *, const char *);
	char *s, *t;

	//s = "hello, ";
	//t = "weekend!";
	strcpy(s, "hello, ");
	strcpy(t, "weekend!");

	my_strcat(*s, *t);

}

void my_strcat(char *s, char *t){
	while(*s)
		s++;
	while(*s++ = *t++)
		;

	//print s
	printf("new s : %s\n", s);
}