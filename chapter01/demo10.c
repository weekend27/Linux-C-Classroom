/*
**replace tabs with the proper number of blanks
*/

#include<stdio.h>

#define TABINC 15		//tab increment size, that means tab character will appear after 8 positions each

main(){
	int c, nb, pos;

	nb = 0;				//number of blanks necessary
	pos = 1;			//position of character in line
	while((c = getchar()) != EOF){
		if(c == '\t'){			//tab character
			nb = TABINC - (pos - 1) % TABINC;
			while(nb > 0){
				putchar(' ');
				++pos;
				--nb;
			}
		}else if(c == '\n'){	//newline character
			putchar(c);
			pos = 1;
		}else{					//all other characters
			putchar(c);
			++pos;
		}
	}
}

