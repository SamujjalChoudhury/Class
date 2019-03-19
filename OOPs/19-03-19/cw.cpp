// WAP to find the smallest and the largest element of an array and find its position using function using recurssion

#include <iostream>
using namespace std;

int max(int [], int);
int min(int [], int);
void setArray(int [], int);

int main()
{	
	int n;

	cout<<"Enter the total numbers of integers : ";
	cin>>n;

	int arr[n], m, M;

	cout<<"Enter the numbers : "<<endl;
	setArray(arr, n-1);

	M = max(arr, n-1);
	m = min(arr, n-1);

	cout<<"\nMaximum is : "<<M<<endl<<endl;
	cout<<"Minimum is : "<<m<<endl;

	return 0;
}

// Finds the maximun
int max(int arr[], int n)
{
	static int m = arr[0];
	if(n>=0){
		if(arr[n]>m)	m = arr[n];
		max(arr, n-1);
	}

	return m;
}

// Finds the minimun
int min(int arr[], int n)
{
	static int min = arr[0];
	if(n>=0){
		if(arr[n]<min)	min = arr[n];
	}

	return min;
}

// Takes the input of the array
 void setArray(int arr[], int n)
{
	if(n>=0){
		cin>>arr[n];
		setArray(arr, n-1);
	}

}
