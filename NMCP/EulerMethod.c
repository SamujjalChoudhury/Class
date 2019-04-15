// TODO: Initialize the program with the function given in the question

#include<stdio.h>

//Function given in the question
float f(float x, float y)
{
	return (/*Function*/);
}

int main()
{
	float x0, y0, x1, y1, h, xn;
	int i = 0;

	//Input of the data
	printf("Euler's Method : \nx0 : ");
	scanf("%f", &x0);	// x0
	printf("y0 : ");
	scanf("%f", &y0);	//y0
	printf("h : ");
	scanf("%f", &h);	//h
	printf("Xn : ");
	scanf("%f", &xn);	//xn
	
	printf("\n\n\n");
	
	while(x0<=xn){
		y1 = y0 + h*f(x0, y0);
		x1 = x0 + h;
		x0 = x1;
		y0 = y1;
		printf("When x(%d) = %f\ty(%d) = %f\n", i, x0, ++i, y0);
	}

	return 0;
}
