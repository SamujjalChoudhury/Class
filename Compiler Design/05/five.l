%{
#include<stdio.h>
int vowel=0, consonant=0;
%}


%% 
[aeiouAEIOU]	{vowel++;}
[a-zA-Z]	{consonant++;}
%% 

int yywrap() {return 0;}
  
int main() 
{ 
	FILE *yyin = fopen("input.c", "r"), *yyout = fopen("output.txt", "w");
	fprintf(yyout, "Vowel : %d\nConsonant : %d", vowel, consonant);
	yylex(); 
	return 0;
} 


/*SamujjalChoudhury*/