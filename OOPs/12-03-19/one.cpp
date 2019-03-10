// WAP to create an integer type array that can store n integer. Display the count of positive number, negative number and zero present in the array usng function.

#include<iostream>
using namespace std;

void count_of_positive_negative_and_zeros(int [], int);

int main()
{
	int n;
	cout<<"Enter the size : ";
	cin>>n;

	int arr[n];

	cout<<"Enter the numbers : ";

	for (int i = 0; i < n; ++i)		cin>>arr[i];
	
	count_of_positive_negative_and_zeros(arr, n);
	
	return 0;
}

void count_of_positive_negative_and_zeros(int arr[], int n)
{
	int positive=0, negative=0, zero=0;
	
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]>0)	positive++;
		else if(arr[i]<0)		negative++;
		else	zero++;
	}

	cout<<"Positive : "<<positive<<endl
		<<"Negative : "<<negative<<endl
		<<"Zero : "<<zero<<endl;
}
