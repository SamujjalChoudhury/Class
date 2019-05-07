/*WAP that read a text file and creates another file that 
is identical except that every sequence of 
consecutive blank spaces is replaced by a single space. */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fin("Read.txt", ios::in);
	fstream fout("Write.txt", ios::out);

	char prevChar = 'a';
	char curChar;

	while(!fin.eof()){

		fin.get(curChar);

		if(curChar == ' ')
			if(prevChar == ' ')
				continue;

		fout.put(curChar);
		prevChar = curChar;

	}

	cout<<"Done coping!";

	fout.close();
	fin.close();

	return 0;
}

