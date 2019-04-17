// TODO: Initialize the program with the function given in the question

#include <stdio.h>
#include <math.h>

float f(float x)
{
	return (/*Function*/);
}

int main()
{
	float x1, x2, x3,  e = 0.00001;

	printf("Secant Method \n\nx1 : ");
	scanf("%f", &x1);
	printf("x2 : ");
	scanf("%f", &x2);

	x3 = ((x1*f(x2)) - (x2*f(x1))) / (f(x2) - f(x1));

	while(fabs(x2-x1) > e){
		x1 = x2;
		x2 = x3;
		x3 = ((x1*f(x2)) - (x2*f(x1))) / (f(x2) - f(x1));
	}
	printf("\nThe root is : %f", x2);
	
	return 0;
}
