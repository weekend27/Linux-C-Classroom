/*
**itoa:change number n to string s
*/

#include<stdio.h>
#include<string.h>

main(){
	void itoa(int n, char s[]);

	int n;
	char s[10];
	n = -98767421;
	strcpy(s,"");

	itoa(n,s);
}

void itoa(int n, char s[]){
	void reverse(char s[]);
	int i, sign;

	if((sign = n) < 0)
		n = -n;
	i = 0;
	do{
		s[i++] = n % 10 + '0';  //from '0' code
	}while((n /= 10) > 0);		//n = n / 10
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);

	printf("string s is : %s\n", s);
}

void reverse(char s[]){
	int c, i, j;

	for(i = 0, j = strlen(s)-1; i < j; i++, j--){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}

}
