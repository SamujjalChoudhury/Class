%{
#include<stdio.h>
int line = 0;
%}


%% 
[//][a-zA-Z0-9]*	{line++;fprintf(yyout, "");}
%% 

int yywrap() {return 0;}
  
int main() 
{ 
	yyin = fopen("input.c", "r");
	yyout = fopen("output.c", "w");
	yylex(); 
	printf("Numbers of line : %d", line);
	return 0;
}  


/*SamujjalChoudhury*/