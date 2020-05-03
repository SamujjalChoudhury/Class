%{
	#include<stdio.h>
	int i, j, flag, count=0;
%}

%%
[a-zA-Z0-9]*	{
		for(i=0,j =yyleng-1;i<=j;i++,j--){ 
			if(yytext[i]==yytext[j]){ 
			    flag=1; 
			} 
			else{ 
			    flag=0; 
			    break; 
			} 
		    } 
		    if (flag==1){
			count++;
			fprintf(yyout, "%s", yytext);
		    }
		}
%%

int yywrap(){return 0;}

int main()
{
	yyout = fopen("output.txt", "w");
	yylex();
	return 0;
} 


/*SamujjalChoudhury*/