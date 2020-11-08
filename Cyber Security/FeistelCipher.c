/* THIS PROGRAM ONLY WORKS WITH INT VALUES. NO STRING IS ACCEPTTED */

#include<stdio.h>
#define ROUNDS 8

typedef unsigned __int32 uint;

uint f(uint  block, uint  key);
void encrypt(uint left, uint right);
void decrypt(uint left, uint right);

uint keys[ROUNDS] = { 0xDEADBEEF, 0xBAADF00D, 0xFEEDFACE, 0xCAFEBABE, 0xDEADBABE, 0xD15EA5E, 0xDECEA5ED, 0xBAADAC1D };

int main()
{
	int ch;
	uint left, right;
	printf("1. Encrypt\n2. Decrypt\n\nChoice (1/2) : ");
	scanf("%d", &ch);
	
	switch(ch) {
		case 1: printf("\nEnter Plaintext.\n\tLeft: ");
				scanf("%u", &left);
				printf("\tRight: ");
				scanf("%u", &right);
				encrypt(left, right);
				break;
				
		case 2: printf("\nEnter Ciphertext.\n\tLeft: ");
				scanf("%u", &left);
				printf("\tRight: ");
				scanf("%u", &right);
				decrypt(left, right);
				break;
		
		default: printf("Wrong Input. Try again...");
	}
	return 0;
}


// Round Function (AND Operation)
uint f(uint  block, uint  key)
{ return block & key; }


// The whole encryption mechanism
void encrypt(uint left, uint right) 
{
    uint i, left1, right1;
    printf("\n\nPlaintext: %d %d\n", left, right);
        
    for(i = 0;i < ROUNDS;i++) {
        right1 = f(right,keys[i]) ^ left;
        left1 = right;
        
        if(i == (ROUNDS-1)) {
            right = left1;
            left = right1;
        } 
		else {
			left = left1;
            right = right1;        
		}
    }                    
    printf("Ciphertext: %d %d", left, right);
    return;
}


// The whole decryption mechanism
void decrypt(uint left, uint right) 
{
    uint i, left1, right1;
    printf("\n\nCiphertext: %d %d\n", left, right);
        
   for(i = 0;i < ROUNDS;i++) {
        right1 = f(right,keys[ROUNDS-i-1]) ^ left;
        left1 = right;
        
        if(i == (ROUNDS-1)) {
            right = left1;
            left = right1;
        } 
		else {
			left = left1;
            right = right1;        
		}
    }
    printf("Plaintext: %d %d", left, right);
    return;
}


// SamujjalChoudhury
