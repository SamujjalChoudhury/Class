// TODO: Initialize the program with the function given in the question

#include <stdio.h>
#include <math.h>

float g(float x)
{
	return (/*Function*/);
}

int main()
{
	float x1, x2, e = 0.00001;

	printf("Method of Successive Approximation \n\nEnter the guess value : ");
	scanf("%f", &x1);

	x2 = g(x1);

	while(fabs(x2-x1) > e){
		x1 = x2;
		x2 = g(x1);
	}
	printf("\nThe root is : %f", x2);
	
	return 0;
}
