// WAP to create an integer type array that can store n integer. 
// Display the count of positive number, negative number and zero present in the array using recurssion

#include <iostream>
using namespace std;

void setArray(int [], int);
void signCount(int [], int);

int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;

	int arr[n];
	cout<<"Enter the numbers : "<<endl;
	setArray(arr, n-1);
	signCount(arr, n-1);
	return 0;
}

// Takes the input of the array
 void setArray(int arr[], int n)
{
	if(n>=0){
		cin>>arr[n];
		setArray(arr, n-1);
	}

}

// Counts the positive, negative, zeros and prints them
void signCount(int arr[], int n)
{
	static int positive = 0, negative = 0, zero = 0;
	if(n>=0){
		if(arr[n]>0)	positive++;
		else if(arr[n]<0)		negative++;
		else	zero++;
		signCount(arr, n-1);
	}
	else{
		cout<<"Positive : "<<positive<<endl
		<<"Negative : "<<negative<<endl
		<<"Zero : "<<zero<<endl;
	}
}
