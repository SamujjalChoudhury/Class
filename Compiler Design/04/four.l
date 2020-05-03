%{
#include<stdio.h> 
%} 

KEYWORD auto|break|continue|switch|case|default|char|const|do|while|double|float|if|else|enum|extern|for|goto|int|short|long|signed|unsigned|return|sizeof|register|static|struct|typedef|union|void|volatile

%% 
^{KEYWORD}	printf("Invalid Identifier");
^[a-zA-Z_][a-zA-Z0-9_]*		fprintf(yyout, "%s\n", yytext);
^[^a-zA-Z_]	printf("Invalid Identifier"); 
.;
%% 

int yywrap() {return 0;}
  
int main() 
{ 
	FILE *yyin = fopen("input.c", "r"), *yyout = fopen("output.txt", "w");
	yylex(); 
	return 0;
} 


/*SamujjalChoudhury*/