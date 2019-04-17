// TODO: Initialize the program with the function given in the question

#include<stdio.h>
#include<math.h>

//Function given in the question
float fun(float x)
{
	return (/*Function*/);
}

int main()
{
	float x, x1, x2,  f, f1, f2, e = 0.00001;

	printf("x1 : ");	scanf("%f", &x1);
	printf("x2 : ");	scanf("%f", &x2); 

	f = fun(x);		f1 = fun(x1);	f2 = fun(x2);
	
	if(f1*f2 < 0){
		
		while((x2-x1)>=e){
			x = (x1 + x2)/2;
			if(f*f2<0)		x2 = x;
			else	x1 = x;
			f = fun(x);		f1 = fun(x1);	f2 = fun(x2);
		}
		
		printf("\n\nThe required solution is : %f", x);
		return 0;
	}
	else
		printf("Re-enter the guess values");

	return 0;
}
