// TODO: Initialize the program with the function given in the question

#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
	return (/*Function*/);
}


int main()
{
	float x0, y0, x1, y1, h, xn, k1, k2, k3, k4;
	
	printf("\nEnter the initial value of x0 and y0 : \n");
	scanf("%f%f", &x0, &y0);
	printf("\nEnter the value of h : ");
	scanf("%f", &h);
	printf("\nEnter the value of xn, for which y is required : ");
	scanf("%f", &xn);
	
	while(x0 != xn) {
		
		k1 = h*f(x0, y0);
		k2 = h*f(x0+h/2, y0+(k1/2));
		k3 = h*f(x0+h/2, y0+(k2/2));
		k4 = h*f(x0+h, y0+k3);
	
		y1 = y0 + (k1 + 2*k2 + 2*k3 + k4)/6;
		
		x1 = x0 + h;
		x0 = x1;
		y0 = y1;
		
		printf("\nWhen x = %f\tthen y(%f) = %f", x0, x0, y0);
	}
}
