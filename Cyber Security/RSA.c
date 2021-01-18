#include<stdio.h>
#include<math.h>

// finds GCD of a and b
int gcd(int a, int b)
{
	int temp;
	
	while (1) {
	temp = a%b;
	
	if (temp == 0)
		return b;
		
	a = b;
	b = temp;
	}
}


// RSA algorithm
int main()
{
//	initialize with two random prime numbers
	double p = 3;
	double q = 7;
	
//	Public Key part 1
	double n = p*q;
	
	// Finding other part of public key.
	double e = 2;
	double phi = (p-1)*(q-1);
	
	while (e < phi)
	{
		if (gcd(e, phi)==1)
			break;
		else
			e++;
	}
	// Private key
	int k = 2;
	double d = (1 + (k*phi))/e;
	
	// Plaintext
	double plaintext = 12;
	printf("Plaintext: %lf", plaintext);
	
	// Encryption
	double ciphertext = pow(plaintext, e);
	ciphertext = fmod(ciphertext, n);
	printf("\nCiphertext: %lf", ciphertext);
	
	// Decryption
	double msg = pow(ciphertext, d);
	msg = fmod(msg, n);
	printf("\nRetrived Plaintext: %lf",msg);
	
	return 0;
}

// SamujjalChoudhury
