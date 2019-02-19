// Question : Write a program to print the following pattern :-

// 		*********
//  	 *******
// 		  *****
//         ***
//      	*


#include<iostream>
using namespace std;

int main()
{
	int i, j, iTemp, jTemp, flag = 0, flagTemp;
	
	// Input
	j = 4;
	i = (2*j)-1;

	// Extrenal loog for vertical activity
	for (jTemp = j;jTemp>=0;jTemp--){

		for (flagTemp = flag; flagTemp>=0; flagTemp--)		cout<<" ";

		flag++;;

		for(iTemp = i;iTemp>=-1;iTemp--)		cout<<"*";
		i -= 2;
		cout<<endl;
	}


	return 0;
}
