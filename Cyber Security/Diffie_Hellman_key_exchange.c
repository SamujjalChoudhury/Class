#include<stdio.h>
#include<math.h>

int power(int a, int b, int P)
{ 
	return (((int)pow(a, b)) % P);
}


int main()
{
	int p, q, x, a, y, b, sec_1, sec_2; 
	
	p = 13;
	q = 6;
	
	printf("Prime : %lld\nPrimitive Root : %lld\n\n", p, q);

	// For user 1
	a = 3;
	printf("The Private key of User 1 : %lld\n", a);
	x = power(q, a, p); 	
	
	// For user 2
	b = 10; 
	printf("The Private key of User 2 : %lld\n\n", b);
	y = power(q, b, p); 
	
	// Generate Secret key
	sec_1 = power(y, a, p); 
	sec_2 = power(x, b, p); 
	
	printf("Secret key of User 1 : %lld\n", sec_1);
	printf("Secret Key of User 2 : %lld\n", sec_2);
	
	return 0;
}


// SamujjalChoudhury
