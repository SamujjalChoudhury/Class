// WAP to search a particular element in the array. T
// he program should accept n integer as input from the user and store them in the array. 
// The program should then accept a key and determine whether or not it is present in the array using function.

#include <iostream>
using namespace std;

int linSearch(int [], int, int);

int main()
{

	int n, loc;
	cout<<"Enter the size : ";
	cin>>n;

	int arr[n], key;

	for (int i = 0; i < n; ++i)		cin>>arr[i];

	cout<<"Enter the value to be searched : ";
	cin>>key;

	loc = linSearch(arr, n, key);
	
	if(loc==-1)		cout<<key<<" not found";
	else	cout<<key<<" is found in "<<loc+1<<" position"<<endl;

	return 0;
}

int linSearch(int arr[], int n, int key)
{
	for (int i = 0; i < n; ++i)		if(key == arr[i])	return i;
	
	return -1;
}
