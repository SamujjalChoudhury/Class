// WAP to search a particular element in the array. T
// he program should accept n integer as input from the user and store them in the array. 
// The program should then accept a key and determine whether or not it is present in the array.

#include <iostream>
using namespace std;
int main()
{

	int n;
	cout<<"Enter the size : ";
	cin>>n;

	int arr[n], key;

	for (int i = 0; i < n; ++i)		cin>>arr[i];

	cout<<"Enter the value to be searched : ";
	cin>>key;

	// Linear Search
	for (int i = 0; i < n; ++i)
	{
		if(key == arr[i]){
			cout<<key<<" is found in "<<i+1<<" position"<<endl;
			return 0;
		}
	}

	cout<<key<<" not found"<<endl;

	return 0;
}
