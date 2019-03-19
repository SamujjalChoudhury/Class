// WAP to search a particular element in the array. T
// he program should accept n integer as input from the user and store them in the array. 
// The program should then accept a key and determine whether or not it is present in the array using recurssion.

#include <iostream>
using namespace std;

void setArray(int [], int);
int linSearch(int [], int, int);

int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;

	int arr[n], key, loc;
	cout<<"Enter the numbers : "<<endl;
	setArray(arr, n-1);

	cout<<"Enter the value to be searched : ";
	cin>>key;

	loc = linSearch(arr, n-1, key);
	if (loc==-1)
		cout<<key<<" not found"<<endl;
	else 
		cout<<key<<" is found"<<endl;

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

int linSearch(int arr[], int n, int key)
{
	static int loc = -1;
	if (n>=0)
	{
		if(key == arr[n]){
			loc = n+1;
			n = -1;
		}
		linSearch(arr, n-1, key);
	}

	return loc;
}
