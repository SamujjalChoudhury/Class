// Question : Write a program to print the following pattern :-
//     *
//    **
//   ***
//  ****
//   ***
//    **
//     *



#include <iostream>
using namespace std;

int main()
{	
	int i = 1, j, iTemp, jTemp, space, spaceTemp, flag=0;

	// Input
	j = 7;
	space = j/2;

	// External loop for vertical activity
	for(jTemp = 1; jTemp<=j; jTemp++){

		// Print space
		for(spaceTemp = 1; spaceTemp<=space; spaceTemp++)		cout<<" ";

		// Print stars
		for(iTemp = 1; iTemp<=i; iTemp++)		cout<<"*";

		// Check the conditions for printing the spaces and stars
		if((i!=(j+1)/2) && flag == 0){
			i++;
			space--;;
		}
		else{
			flag = 1;
			i--;
			space++;
		}

		cout<<endl;
	}

	return 0;
}