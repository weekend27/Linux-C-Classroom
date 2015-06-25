/*
**print input one word per line
*/

#include<stdio.h>

#define IN  1	//in a word
#define OUT 0	//outside a word

void main(){
	int c, state;

	state = OUT;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			if(state == IN){
				putchar('\n');				//finish the word
				state = OUT;
			}
		}else if(state == OUT){
			state = IN;						//beginning of the word
			putchar(c);
		}else							
			putchar(c);						//inside a word
	}
}
