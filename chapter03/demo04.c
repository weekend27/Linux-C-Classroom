/*
**expand: expand shorthand notation in s1 into string s2
**notice the change of i
*/

#include<stdio.h>
#include<string.h>

main(){
	void expand(char s1[],char s2[]);
	char s1[100],s2[100];

	strcpy(s1,"a-z,0-9\nhello,weekend!");
	strcpy(s2,"");

	expand(s1, s2);
}

void expand(char s1[], char s2[]){
	int i, j;
	char c;

	i = j = 0;
	while((c = s1[i++]) != '\0')
		if(s1[i] == '-' && s1[i+1] >= c){
			i++;
			while(c < s1[i])	//expand shorthand
				s2[j++] = c++;
		}else{
			s2[j++] = c;		//copy characters
		}
	s2[j] = '\0';

	printf("the s2 string is : %s\n", s2);
}