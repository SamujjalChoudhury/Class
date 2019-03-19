// WAP to read an array of n integers and reverse the order of the element in the array of n integer and to reverse the order of element in the array without using temporary.

#include<iostream>
using namespace std;


void setArray(int [], int);
void getArray(int [], int);
void reverse(int [], int);

int main()
{
	int n;

	cout<<"Enter the total numbers of integers : ";
	cin>>n;

	int arr[n];
	
	cout<<"Enter the numbers :"<<endl;
	setArray(arr, n-1);
	cout<<"Array : ";
	getArray(arr, n-1);
	reverse(arr, n-1);
	cout<<endl<<"\nRevArray : ";
	getArray(arr, n-1);

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

// Prints the array
void getArray(int arr[], int n){
	if(n>=0){
		cout<<arr[n]<<"  ";
		getArray(arr, n-1);
	}
}

// Makes the array reverse
void reverse(int arr[], int n)
{
	static int i=0;
	int temp;
	if (i<n){
		temp = arr[i];
		arr[i] = arr[n];
		arr[n] = temp;
		i++;
		reverse(arr, n-1);
	}
}
