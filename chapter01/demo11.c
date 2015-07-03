/*
**replace strings of blanks with tabs and blanks
*/

#include<stdio.h>

#define TABINC 15		//tab increment size, that means tab character will appear after 8 positions every time

main(){
	int c, nb, nt, pos;

	nb = 0;				//num of blanks necessary
	nt = 0;				//num of tabs necessary
	for(pos = 1;(c = getchar()) != EOF; ++pos){
		if(c == ' '){
			if(pos % TABINC != 0)
				++nb;
			else{
				nb = 0;			//reset num of blanks
				++nt;			//one more tab
			}
		}else{
			for( ; nt > 0; --nt)
				putchar('\t');	//output tabs
			if(c == '\t')		//forget the blanks
				nb = 0;
			else				//output blanks
				for( ; nb > 0; --nb)
					putchar(' ');
			putchar(c);
			if(c == '\n')
				pos = 0;
			else if(c == '\t')
				pos = pos + (TABINC - (pos - 1) % TABINC) - 1;
		}
	}
}
