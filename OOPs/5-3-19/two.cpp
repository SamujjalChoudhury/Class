// WAP to determine the number of occerance of an element in an array.

#include<iostream>
using namespace std;

int main()
{
	int n;

	cout<<"Enter the total numbers of integers : ";
	cin>>n;

	int arr[n], flag[n];

	cout<<"Enter the numbers :"<<endl;

	for (int i = 0; i < n; ++i)	{	
		cin>>arr[i];
		flag[i] = 0;}

	for (int i = 0; i < n; ++i)
	{
		// int tempNum;
		 int count = 0;
		// int temp = arr[i];

		for (int j = i; j < n; ++j)
		{
			if (flag[j] == 1)
			{
				continue;
			}

			if(arr[i] == arr[j]){
				count++;
				flag[j] = 1;
			}
		}
		if(count == 0)		continue;

		cout<<arr[i]<<" : "<<count<<endl;
	}


	return 0;
}
