// WAP to find the smallest and the largest element of an array and find its position

#include <iostream>
using namespace std;

int max(int [], int);
int min(int [], int);

int main()
{	
	int n;

	cout<<"Enter the total numbers of integers : ";
	cin>>n;

	int arr[n], m, M;

	cout<<"Enter the numbers : "<<endl;
	for (int i = 0; i < n; ++i)		cin>>arr[i];

	M = max(arr, n);
	m = min(arr, n);

	cout<<"\nMaximum is : "<<arr[M]<<"\nand its position is : "<<M+1<<endl<<endl;
	cout<<"Minimum is : "<<arr[m]<<"\nand its position is : "<<m+1<<endl;

	return 0;
}

int max(int arr[], int n)
{
	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[max]<arr[i])		max = i;
	}

	return max;
}


int min(int arr[], int n)
{
	int min = 0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[min]>arr[i])		min = i;
	}

	return min;
}
