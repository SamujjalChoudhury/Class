#include <iostream>
using namespace std;

int count = 0;
class test
{
	public :
		test()
		{
			count++;
			cout<<"Object number "<<count<<" constructed"<<endl;
		}

		~test()
		{
			cout<<"Object number"<< count<<" destroyed"<<endl;
		}
};

int main()
{
	cout<<"Inside the main block\n";
	test t1;
	{
		cout<<"Inside block ";
		test t2, t3;
		cout<<"Leaving block, ";
	}
	cout<<"Back inside main block";
	
	return 0;
}