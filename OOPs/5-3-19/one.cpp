// WAP to create an integer type array that can store n integer. Display the count of positive number, negative number and zero present in the array.

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size : ";
	cin>>n;

	int arr[n], positive=0, negative=0, zero=0;

	cout<<"Enter the numbers : ";

	for (int i = 0; i < n; ++i)		cin>>arr[i];

	for (int i = 0; i < n; ++i)
	{
		if(arr[i]>0)	positive++;
		else if(arr[i]<0)		negative++;
		else	zero++;
	}

	cout<<"Positive : "<<positive<<endl
		<<"Negative : "<<negative<<endl
		<<"Zero : "<<zero<<endl;

	return 0;
}
