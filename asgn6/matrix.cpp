#include <iostream>
using namespace std;

class matrix
{
	private:
		int m,n;
		int a[3][3];
	public:
		matrix(): m(3),n(3){}
		void read();
		friend matrix findTranspose(matrix);
		void display();
};

void matrix::read()
{
	cout<<"Enter the elements of the matrix of order "<<m<<" x "<<n<<" : "<<endl;
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			cin>>a[i][j];
		}
	}
}

matrix findTranspose(matrix A)
{
	matrix TA;
	for(int i=0;i<A.m;++i)
	{
		for(int j=0;j<A.n;++j)
		{
			TA.a[j][i] = A.a[i][j];
		}
	}
	return TA;
}

void matrix::display()
{
	cout<<"The matrix is : "<<endl;
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main()
{
	matrix A;
	A.read();
	A.display();
	matrix TA = findTranspose(A);
	cout<<"Transpose : "<<endl;
	TA.display();
	return 0;
}
