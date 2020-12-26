#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/
/* +----------------------------------------------------+ */
/* |                                                    | */
/* |     Change the value of N as per requirement       | */
/* |                                                    | */
/* | */   #define N 256								               /* | */
/* |                                                    | */
/* |                                                    | */
/* +----------------------------------------------------+ */
// /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/




// Function to swap 2 variables
void swap(unsigned char *a, unsigned char *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Function to perform Initial Permutation
int key_scheduling(char *key, unsigned char *S) {

    int len = strlen(key);
    int j = 0, i;

    for(i = 0; i < N; i++)
        S[i] = i;

    for(i = 0; i < N; i++) {
        j = (j + S[i] + key[i % len]) % N;
        swap(&S[i], &S[j]);
    }

    return 0;
}

// Function to encrypt-decrypt the plaintext
int key_stream_generator(unsigned char *S, char *plaintext, unsigned char *ciphertext) {

    int i = 0;
    int j = 0;
    size_t n, len;

    for(n = 0, len = strlen(plaintext); n < len; n++) {
        i = (i + 1) % N;
        j = (j + S[i]) % N;

        swap(&S[i], &S[j]);
        int rnd = S[(S[i] + S[j]) % N];

        ciphertext[n] = rnd ^ plaintext[n];

    }

    return 0;
}

// Function to perform encryption-decryption
int RC4(char *key, char *plaintext, unsigned char *ciphertext) {

    unsigned char S[N];
    key_scheduling(key, S);

    key_stream_generator(S, plaintext, ciphertext);

    return 0;
}


int main(int argc, char *argv[]) 
{
	char key[] = "Cyber Security", cipher[256], plain[256];
	int i;
	
	printf("Enter the string: ");
	gets(plain);
	
    RC4(key, plain, cipher);
	printf("\nCiphertext: %s", cipher);
	
    RC4(key, cipher, plain);
	printf("\nPlaintext: %s", plain);
	
	return 0;
}


// SamujjalChoudhury
