// WAP to check if a string contains in another given string

#include<iostream>
#include<string.h>
using namespace std;

bool isSubstring(char [], char[]);

int main()
{
	char str1[100], str2[100];
	cout<<"Enter the parent string : ";
	cin>>str1;
	cout<<"Search : ";
	cin>>str2;
	
	if(isSubstring(str1, str2))	cout<<"String found";
	else	cout<<"String not found";
	
	return 0;
}


bool isSubstring(char str1[], char str2[])
{
	int flag, k;
	
	for(int i=0;i<=(strlen(str1)-strlen(str2));i++){
		
		flag = 0;
		k = i;
		
		for(int j=0; j<strlen(str2); j++){
			
			if(str1[k] == str2[j]){
				flag = 1;
				k++;
			}
			else{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
			return true;
	}
	
	return false;
}
