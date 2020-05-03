%{ 
	#include<stdio.h>
	#include<stdlib.h>
	int i;
%}

%% 
[a-zA-Z0-9]*	{
		for(i=yyleng-1;i>=0;i--)
			printf("%c", yytext[i]);
		}
%% 

int yywrap() {return 0;}

int main() { 
	yylex();
	return 0;
}  


/*SamujjalChoudhury*/
