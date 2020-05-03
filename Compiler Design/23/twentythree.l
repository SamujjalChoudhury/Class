%{ 
	#include<stdio.h>
	int i;
%}

%% 
[A-Z]	printf("%s", yytext);
[a-z]	{for(i=0;i<yyleng;i++)
		yytext[i] -= 32;
	printf("%s", yytext);
	}
%% 

int yywrap() {return 0;}

int main() { 
	yylex();
	return 0;
}  


/*SamujjalChoudhury*/
