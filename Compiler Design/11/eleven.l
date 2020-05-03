%{
#include<stdio.h>
int n=0;
%} 

KEYWORD auto|break|continue|switch|case|default|char|const|do|while|double|float|if|else|enum|extern|for|goto|int|short|long|signed|unsigned|return|sizeof|register|static|struct|typedef|union|void|volatile

%% 
{KEYWORD}	n++;
[a-zA-Z_][a-zA-Z0-9_]*		n++;
"<="|"=="|"="|"++"|"-"|"*"|"+"		n++; 
[(){}|, ;]	n++;
[0-9]*"."[0-9]+		n++;
[0-9]+		n++;
.;
%% 

int yywrap() {return 0;}
  
int main() 
{ 
	FILE *yyin = fopen("input.c", "r");
	yylex(); 
	printf("Total numbers of token : %d", n);
	return 0;
}  


/*SamujjalChoudhury*/