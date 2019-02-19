// Question : Write a program to print the following pattern :-

// 	    A
// 	   ABA
// 	  ABCBA
// 	 ABCDCBA
// 	ABCDEDCBA


#include <iostream>
using namespace std;

int main()
{

	int i = 1, j, iTemp, jTemp, space, spaceTemp, calc = 1, flag = 0;

	char ch;

	// Input
	j = 5;
	space = j;

	// Extrenal loog for vertical activity
	for(jTemp = 1; jTemp<=j; jTemp++){

		// Printing space
		for(spaceTemp = 1; spaceTemp<space; spaceTemp++){
			cout<<" ";
		}

		// Printing values
		for(iTemp = 1; iTemp<=i; iTemp++){

			// calc = iTemp;
			if((i+1)/2 == calc)		flag = 1;

			// Select right output
			if(flag==0)		ch = 64+calc++;
			else	ch = 64+calc--;

			cout<<ch;
		}

		i += 2;
		cout<<endl;
		space--;
		calc = 1;
		flag = 0;
	}

	return 0;
}
