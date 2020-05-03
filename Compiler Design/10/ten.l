%{
#include<stdio.h>
int n=0;
%} 

KEYWORD auto|break|continue|switch|case|default|char|const|do|while|double|float|if|else|enum|extern|for|goto|int|short|long|signed|unsigned|return|sizeof|register|static|struct|typedef|union|void|volatile

%% 
{KEYWORD}	printf("%s", yytext);
[a-zA-Z_][a-zA-Z0-9_]*		printf("%s", yytext);
"<="|"=="|"="|"++"|"-"|"*"|"+"		printf("%s", yytext); 
[(){}|, ;]	printf("%s", yytext);
[0-9]*"."[0-9]+		printf("%s", yytext);
[0-9]+		printf("%s", yytext);
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