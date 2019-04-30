#include <iostream>
using namespace std;

class Complex
{
	float x, y;
	public :
	Complex() {}
	Complex(float a)
	{
		x = y = a;
	}
	Complex(float r, float i)
	{
		x = r;
		y = i;
	}

	friend Complex sum(Complex, Complex);
	friend void show(Complex);
};

Complex sum(Complex c1, Complex c2)
{
	Complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;

	return c3;
}

void show(Complex c)
{
	cout<<c.x<<"+j"<<c.y<<endl;
}
int main()
{
	Complex a(2.7, 3.5);
	Complex b(1.6);
	Complex c;
	c = sum(a, b);

	cout<<"A = ";
	show(a);

	cout<<"B = ";
	show(b);

	cout<<"C = ";
	show(c);

	return 0;
}