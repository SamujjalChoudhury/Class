// Question : Write a program to find the GCD and LCM of two given numbers.


#include <iostream>
using namespace std;

int gcd(int a, int b)  
 {  
    // Everything divides 0  
    if (a == 0 || b == 0)  
        return 0;  
   
    // Base case     
    if (a == b)  
        return a;  
   
    // a is greater  
    if (a > b)  
        return gcd(a-b, b);  
    return gcd(a, b-a);  
 } 


 int lcm(int a, int b)  
 {  
    return (a*b)/gcd(a, b);  
 }  


int main()
{
	int num1, num2;
	cout<<"Enter two numbers to find GCD and LCM"<<endl;

	// Input
	cin>>num1>>num2;

	cout<<"GCD is : "<<gcd(num1, num2)
	<<endl
	<<"LCM is : "<<lcm(num1, num2)<<endl;

	return 0;
}