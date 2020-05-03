%{ 
	#include<stdio.h>
	#include <stdlib.h>
	int sum = 0; 
%} 

%%
[0-9]+	{sum+= atoi(yytext);}
%%  
  
  
int yywrap(){return 0;}

int main()                                               
{ 
	yylex(); 
	printf("Sum : ", sum);
	return 0;  
} 


/*SamujjalChoudhury*/