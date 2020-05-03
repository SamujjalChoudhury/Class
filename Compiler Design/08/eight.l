%{
#include<stdio.h>
#include <stdlib.h>
int num;
%}


%% 
[0-9]+	{num = atoi(yytext);
		if(num<256)
			printf("True");
		else	printf("False");}
%% 

int yywrap() {return 0;}
  
int main() 
{ 
	printf("Enter the inputs\n");
	yylex();
	return 0;
}  


/*SamujjalChoudhury*/