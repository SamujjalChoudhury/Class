// TODO: Initialize the program with the function given in the question

#include <stdio.h>
#include <math.h>

float f(float x)
{
	return (/*Function*/);
}

float fd(float x)
{
	return (/*Function*/);
}

int main()
{
	float x1, x2, e = 0.00001;

	printf("Newton Rapshon Method \n\nEnter the guess value : ");
	scanf("%f", &x1);

	x2 = x1 - (f(x1)/f(x2));

	while(fabs(x2-x1) > e){
		x1 = x2;
		x2 = x1 - (f(x1)/fd(x1));
	}
	printf("\nThe root is : %f", x2);
	
	return 0;
}
