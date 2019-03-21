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
	setArray(arr, n);

	M = max(arr, n-1);
	m = min(arr, n-1);

	cout<<"\nMaximum is : "<<arr[M]<<endl<<"Position : "<<M+1<<endl<<endl;
	cout<<"Minimum is : "<<arr[m]<<endl<<"Position : "<<m+1<<endl;

	return 0;
}

// Finds the maximun
int max(int arr[], int n)
{
	static int m = 0;
	if(n>=0){
		if(arr[n]>arr[m])	m = n;
		max(arr, n-1);
	}

	return m;
}

// Finds the minimun
int min(int arr[], int n)
{
	static int m = 0;
	if(n>=0){
		if(arr[n]<arr[m])	m = n;
		min(arr, n-1);
	}

	return m;
}

// Takes the input of the array
 void setArray(int arr[], int n)
{
	static int i = 0;
	if(i!=n){
		cin>>arr[i++];
		setArray(arr, n);
	}

}
