//COunts number of lines in input

#include <stdio.h>

#define IN 1   
#define OUT 0



main(){
	int c,nl,nw,nc,state;

	/* 
	nl = line count
	nw = word count
	nc = character count

	*/

	state = OUT;
	nl = nw = nc = 0;
	
	while((c = getchar())!=EOF){
		++nc;
		if(c=='\n')
			++nl;
		if(c ==' '|| c == '\n' || c == '\t')
			state = OUT
		else if (state == OUT){
			state = IN;
			++nw;
		}
			
	}
}