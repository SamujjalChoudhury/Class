/*Write an interactive and menu driven program that will access the file and implement the following tasks.

1) Determine the numbers of character in uppercase
2) Determine the numbers of character in lowercase
3) Determine the numbers of lines
4) Determine the numbers of words
5) Determine the numbers of characters
6) Determine the numbers of spaces
7) Determine the numbers of digits*/


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

fstream fin("ABC.txt", ios::in);

//1
int countUppercase()
{
	int temp = 0;
	char count;
	fstream fin("ABC.txt", ios::in);

	while(!fin.eof()){
		fin.get(count);
		if((count>='A') && (count<='Z')){
			temp++;
			
		}
	}
	fin.close();
	return temp;
}

//2
int countLowercase()
{
	int temp = 0;
	char count;
	fstream fin("ABC.txt", ios::in);

	while(!fin.eof()){
		fin.get(count);
		if((count>='a') && (count<='z')){
			temp++;
		}
	}
	fin.close();
	return temp-1;
} 

//3
int countSpace()
{
	int temp = 0;
	char count;
	fstream fin("ABC.txt", ios::in);

	while(!fin.eof()){
		fin.get(count);
		if(count == ' '){
			temp++;
		}
	}
	fin.close();
	return temp;
}

//4
int countCharacter()
{
	int temp = 0;
	char count;
	fstream fin("ABC.txt", ios::in);

	while(!fin.eof()){
		fin.get(count);
		temp++;
	}
	fin.close();
	return temp-1;
}

// 5
int countDigit()
{
	int temp = 0;
	char count;
	fstream fin("ABC.txt", ios::in);

	while(!fin.eof()){
		fin.get(count);
		if((count>='0') && (count<='9')){
			temp++;
		}
	}
	fin.close();
	return temp;
} 

// 6
int countLine()
{
	int temp = 1;
	char count;
	fstream fin("ABC.txt", ios::in);

	while(!fin.eof()){
		fin.get(count);
		if(count == '\n'){
			temp++;
		}
	}
	fin.close();
	return temp;
}

// 7
int countWord()
{
	int temp = 0;
	char count;
	fstream fin("ABC.txt", ios::in);

	while(!fin.eof()){
		fin.get(count);
		if(count == ' ' || count == '\n'){
			temp++;
		}
	}
	fin.close();
	return temp;
}


int main()
{	
	int ch;
	
	while(1){
		cout<<"Welcome"
			<<"\n\t1) Determine the numbers of character in uppercase"
			<<"\n\t2) Determine the numbers of character in lowercase"
			<<"\n\t3) Determine the numbers of lines"
			<<"\n\t4) Determine the numbers of words"
			<<"\n\t5) Determine the numbers of characters"
			<<"\n\t6) Determine the numbers of spaces"
			<<"\n\t7) Determine the numbers of digits)"
			<<"\n\t0) Exit\n"
			<<"\nChoice(1/2/3/4/5/6/7/0) : ";
			
		cin>>ch;

		switch(ch){
			case 1 : cout<<"Numbers of characters in uppercase : "<<countUppercase()<<endl;
					break;
					
			case 2 : cout<<"Numbers of characters in lowercase : "<<countLowercase()<<endl;
					break;
					
			case 3 : cout<<"Numbers of lines : "<<countLine()<<endl;
					break;
					
			case 4 : cout<<"Numbers of word : "<<countWord()<<endl;
					break;
					
			case 5 : cout<<"Numbers of total characters : "<<countCharacter()<<endl;
					break;
					
			case 6 : cout<<"Numbers of spaces : "<<countSpace()<<endl;
					break;
					
			case 7 : cout<<"Number of digits : "<<countDigit()<<endl;
					break;
			case 0 : exit(0);
			default : cout<<"Invalid input";
		}
		cout<<endl<<endl;
	}

	return 0;
}
