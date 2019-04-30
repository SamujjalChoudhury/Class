#include <iostream>
using namespace std;

class B
{
	int a;
	public:
		int b;
		void set()
		{
			a = 5; b = 10;
		}

		int getA()
		{
			return a;
		}


		void show()
		{
			cout<<"a = "<<a<<endl;
		}
};

class D : public B
{
	int c;
	public:
		void multi()
		{
			c =b * getA();
		}

		void display()
		{
			cout<<"a = "<<getA()<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"c = "<<c<<endl;
		}
};

int main()
 {
 	D d;
 	d.set();
 	d.multi();
 	d.show();
 	d.display();
 	d.b = 20;
 	d.multi();
 	d.display();

 	return 0;
 } 