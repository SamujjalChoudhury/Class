%{ 
	#include<stdio.h>
	int count = 0; 
%}

%% 
[a-zA-Z]+	{ 
		if(yyleng<count) { 
			count=yyleng; 
		} 
	} 
%% 

int yywrap() {return 0;}

main() { 
	yylex(); 
	printf("Smallest: %d", count); 
	printf("\n"); 
} 
 


/*SamujjalChoudhury*/
