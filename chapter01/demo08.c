/*
**count the number of digits, blank characters and other characters
*/

#include<stdio.h>

void main()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for(i = 0; i < 10; i++)
		ndigit[i] = 0;

	while((c = getchar()) != EOF){
		if(c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if(c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}

	
	for (i = 0; i < 10; i++)
		printf("the number of %d is %d\n", i,ndigit[i]);

	printf("the number of blank characters is %d\n", nwhite);
	printf("the number of other characters is %d\n", nother);

}
