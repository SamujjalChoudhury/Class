// WAP to accept a month numeber as input from the user and to print the month name using function.

#include<iostream>
using namespace std;

void monthPrint(int);

int main()
{

	int ch;
	cout<<"Enter the number of the month : ";
	cin>>ch;
	monthPrint(ch);

	return 0;
}

void monthPrint(int ch)
{
	
	switch(ch){
		case 1 : cout<<"January"<<endl;
				break;
		case 2 : cout<<"February"<<endl<<endl;
				break;
		case 3 : cout<<"March"<<endl;
				break;
		case 4 : cout<<"April"<<endl;
				break;
		case 5 : cout<<"May"<<endl;
				break;
		case 6 : cout<<"June"<<endl;
				break;
		case 7 : cout<<"July"<<endl;
				break;
		case 8 : cout<<"August"<<endl;
				break;
		case 9 : cout<<"September"<<endl;
				break;
		case 10 : cout<<"October"<<endl;
				break;
		case 11 : cout<<"November"<<endl;
				break;
		case 12 : cout<<"December"<<endl;
				break;
		default : cout<<"Invalid input. Try again..."<<endl;
	}
}
