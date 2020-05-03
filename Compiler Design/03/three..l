%{
	#include<stdio.h>
	int i;
%}

%%
[AEIOUaeiou]+[a-zA-Z0-9]* {printf("%say", yytext); return 0;}

[a-zA-Z0-9]+	{
			i=1;
			while(yytext[i] != '\0')
				printf("%c", yytext[i++]);
			printf("%cay", yytext[0]);
			return 0;
		}
%%

int yywrap(){ return 0;}

int main()
{	
	printf("Enter a string : ");
	yylex();
	return 0;
}

/*SamujjalChoudhury*/