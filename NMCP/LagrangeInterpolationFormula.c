#include <stdio.h>

int main()
{
	int i, j, n;
	
	printf("Lagrange's Interpolation Formula \n\nEnter the total number of data : ");
	scanf("%d", &n);
	
	float x[n], y[n], sum = 0, prod = 1, x1;
	
	printf("\nEnter the data : ");
	for(i=0;i<n;i++){
		printf("\nx%d : ", i);
		scanf("%f", &x[i]);
		printf("f(x%d) : ", i);
		scanf("%f", &y[i]);
	}
	printf("\nEnter the value to interpolate : ");
	scanf("%f", &x1);
	
	for(i=1;i<=n;i++){
		prod = 1;
		for(j=1;j<=n;j++){
			if(j != i)
				prod = prod * (x1 - x[j]) / (x[i] - x[j]);
		}
		sum = sum + prod * y[i];
	}
	
	printf("\nThe required solution is : %f", sum);
	
	return 0;
}
