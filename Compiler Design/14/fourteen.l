%{
	#include<stdio.h>
	int count = 0;
%}

%%
"the"	{++count;}
. ;
%%

int yywrap(){return 1;}

int main()
{
	yylex();
	printf("Number of the : %d", count);
	return 0;
} 


/*SamujjalChoudhury*/