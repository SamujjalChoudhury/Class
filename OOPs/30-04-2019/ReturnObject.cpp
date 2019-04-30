#include <iostream>
using namespace std;

class Matrix{
	int m[3][3];

	public:
		void read()
		{
			cout<<"Enter the element of the 3x3 matix : "<<endl;
			for (int i = 0; i < 3; ++i)
			{
				for (int j=0; j<3; ++j){
					cin>>m[i][j];
				}
			}
		}

		void display()
		{
			cout<<endl
			for (int i = 0; i < 3; ++i)
			{
				for (int j=0; j<3; ++j){
					cout<<m[i][j]<<"\t";
				}
				cout<<endl;
			}
		}

		friend Matrix trans(Matrix);
};

Matrix trans(Matrix m1)
{
	Matrix m2;
	int i, j;
	for (int i = 0; i < 3; ++i)
			{
				for (int j=0; j<3; ++j){
					m2.m[j][i] = m1.m[i][j];
				}
			}
			return (m2);
}

int main()
{
	Matrix mat1, mat2;
	mat1.read();
	cout<<"\nYou entered the following matrix : ";
	mat1.display();
	mat2 = trans(mat1);
	cout<<"\nTransposed matrix : ";
	mat2.display();

	return 0;
}