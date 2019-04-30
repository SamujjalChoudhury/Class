#include <iostream>
using namespace std;

class ABC;
class XYZ
{
	int x;

	public:
		void setValue(int i)
		{
			x = i;
		}

		friend void max(XYZ, ABC);
};
class ABC
{
	int a;

	public:
		void setValue(int i){
			a = i;
		}

		friend void max(XYZ, ABC);
};

void max(XYZ m, ABC n)
{
	if(m.x >= n.a)
		cout<<m.x;
	else
		cout<<n.a;
	cout<<endl;
}

int main()
{
	ABC a1;
	XYZ x1;

	a1.setValue(10);
	x1.setValue(20);
	max(x1, a1);

	return 0;
}