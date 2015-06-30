/*
**read several text lines and print the longest line
*/

#include <stdio.h>
#define MAXLINE 1000			//the maxline for input

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

//print the longest line
main(){
	int len;					//the length of present line
	int max;					//the longest length of lines up to now
	char line[MAXLINE];			//the present line
	char longest[MAXLINE];		//save the longest line

	max = 0;
	while((len = getlines(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest, line);
		}

	if (max > 0){
		printf("%s\n", longest);
	}
	return 0;
}

//read a line to s and return the length
int getlines(char s[], int lim){
	int c, i;

	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]){
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
