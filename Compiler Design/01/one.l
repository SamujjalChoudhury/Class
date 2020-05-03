%{
#include<stdio.h>
%}

%%
[ ]+ {fprintf(yyout, " ");} 
.       { fprintf(yyout, "%s", yytext); } 
%%

int yywrap() {return 0;}

int main()
{
	yyin = fopen("input.txt", "r");
	yyout = fopen("output.txt", "w");
	yylex();
	return 0;
}


/*SamujjalChoudhury*/