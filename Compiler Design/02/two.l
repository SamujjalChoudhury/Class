%{
#include<stdio.h>
%}

%%
"float"	fprintf(yyout,"double");
.|\n	{fprintf(yyout,"%s",yytext);}
%%

int yywrap(){return 1;}

int main(void)
{
	FILE *yyin, *yyout;
	yyin=fopen("input.c","r");
	yyout=fopen("output.c","w");
	yylex();
	return 0;
}


/*SamujjalChoudhury*/