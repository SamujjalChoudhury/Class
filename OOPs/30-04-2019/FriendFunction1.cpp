#include <iostream>
using namespace std;

class Sample{
	int a;
	int b;

	public:
		void setValue()
		{
			a = 25;
			b = 40;
		}

		friend float mean(Sample s);
};

float mean(Sample s)
{
	return float(s.a + s.b)/2;
}

int main()
{
	Sample x;
	x.setValue();
	cout<<"Mean value : "<<mean(x)<<endl;

	return 0;
}