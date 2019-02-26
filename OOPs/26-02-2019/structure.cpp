#include<iostream>
#include<limits>
#include<cstring>
using namespace std;
void printChar(int, char);

//Structure
struct SGPA{
	float first, second, third;
};
struct DOB{
	char date[12];
};
struct Student{
	char name[30];
	char roll[5];
	DOB dob;
	SGPA sgpa;
	float cgpa;
};

int main()
{
	int n;
	
	cout<<"Enter the total numbers of student : ";
	cin>>n;
	
	Student s[n];
	
	// Take inputs of the records
	for(int i=0;i<n;i++){
		cin.sync();
		cout<<"Name : ";	cin.getline(s[i].name, 30);
		cout<<"Roll No : ";	cin.getline(s[i].roll, 4);
		cout<<"DOB : ";		cin.getline(s[i].dob.date, 12);
		cin.sync();
		cout<<"SGPA \n\tFirst : ";cin>>s[i].sgpa.first;
		cout<<"\tSecond : ";	cin>>s[i].sgpa.second;
		cout<<"\tThird : ";	cin>>s[i].sgpa.third;
		s[i].cgpa = (s[i].sgpa.first + s[i].sgpa.second + s[i].sgpa.third) / 3;
		cout<<"\n\n\n\n\n";
	}
	
	
	//Print all the values in tabular form
	cout<<"\n\n\n\n| NAME";		printChar(35-strlen("NAME"), ' ');
	cout<<"| ROLL NO";	printChar(8-strlen("ROLL NO"), ' ');
	cout<<"| DOB";		printChar(15-strlen("DOB"), ' ');
	cout<<"| CGPA"<<endl;
	printChar(70, '-');
	cout<<endl;
	for(int i=0;i<n;i++){
	
		cout<<"| "<<s[i].name;	printChar(35-strlen(s[i].name), ' ');
		cout<<"| "<<s[i].roll;	printChar(8-strlen(s[i].roll), ' ');
		cout<<"| "<<s[i].dob.date; printChar(15-strlen(s[i].dob.date), ' ');
		cout<<"| "<<s[i].cgpa<<endl;		
	}
	return 0;
}

void printChar(int n, char ch)
{
	for(int i=0;i<n;i++)	cout<<ch;
}
