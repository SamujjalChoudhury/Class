%{
#include<stdio.h>
int line = 0;
%}


%% 
[\n]	{line++;}
%% 

int yywrap() {return 0;}
  
int main() 
{ 
	yyin = fopen("input.txt", "r");
	yylex(); 
	printf("Numbers of line : %d", line);
	return 0;
}  


/*SamujjalChoudhury*/