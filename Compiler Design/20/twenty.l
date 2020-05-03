%{ 
	#include<stdio.h> 
	int length; 
%} 

%% 
[a-z A-Z 0-9]+		{printf("Length : %d", yyleng);}
%% 

int yywrap() {return 0;}

int main() 
{ 
	printf("Enter the string : ");
	yylex();
	return 0; 
}  


/*SamujjalChoudhury*/
