// WAP to read an array of n integers and reverse the order of the element in the array of n integer and to reverse the order of element in the array without using temporary.

#include<iostream>
using namespace std;

int main()
{
	int n;

	cout<<"Enter the total numbers of integers : ";
	cin>>n;

	int arr[n];
	cout<<"Enter the numbers :"<<endl;

	for (int i = 0; i < n; ++i)		cin>>arr[i];

	cout<<"Array in forward order : \n";

	for (int i = 0; i < n; ++i)		cout<<arr[i]<<"\t";

	for (int i = 0, j=n-1; i < n/2; ++i, --j)
	{
		int temp;
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}

	cout<<"\nArray in reversed order : \n";

	for (int i = 0; i < n; ++i)		cout<<arr[i]<<"\t";

	return 0;
}
