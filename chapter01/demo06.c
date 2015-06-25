/*
**count the number of lines , words and characters
*/

#include<stdio.h>

#define IN  1	//in a word
#define OUT 0	//outside a word

void main(){
	int c,nl,nw,nc,state;

	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar())!= EOF){
		++nc;										//count the number of characters
		if (c == '\n')
			++nl;									//count the number of lines
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("The number of lines is %d\n", nl);
	printf("The number of words is %d\n", nw);
	printf("The number of characters is %d\n", nc);
}
