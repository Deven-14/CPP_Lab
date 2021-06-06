#include <iostream>
using namespace std;

class Matrix
{
	private:
		int m,n;
		int **a;
	public:
		Matrix();
		Matrix(int m_, int n_);
		void read();
		Matrix add(int a, Matrix s2);
		Matrix add(Matrix s1, Matrix s2);
		void display();
};

Matrix::Matrix()
{
	cout << "Enter the order of a Matrix m x n : " ;
	cin >> m >> n;
	a = (int**)calloc(m, sizeof(int*));
	for(int i = 0; i < m; ++i)
		a[i] = (int*)calloc(n, sizeof(int));
}

Matrix::Matrix(int m_, int n_) : m(m_), n(n_)
{
	a = (int**)calloc(m, sizeof(int*));
	for(int i = 0; i < m; ++i)
		a[i] = (int*)calloc(n, sizeof(int));
}

void Matrix::read()
{
	cout<<"Enter the elements of the Matrix of order "<<m<<" x "<<n<<" : "<<endl;
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			cin>>a[i][j];
		}
	}
}

Matrix Matrix::add(int a, Matrix s2)
{
	Matrix c(s2.m, s2.n);
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			c.a[i][j] = s2.a[i][j] + a;
		}
	}
	return c;
}

Matrix Matrix::add(Matrix s1, Matrix s2)
{
	if(s1.m != s2.m || s1.n != s2.n)
	{
		cout << "m x n doesn't match" << endl;
		exit(0);
	}
	Matrix c(s1.m, s1.n);
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			c.a[i][j] = s1.a[i][j] + s2.a[i][j];
		}
	}
	return c;
}

void Matrix::display()
{
	cout<<"The Matrix is : "<<endl;
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
	Matrix c1;
	c1.read();
	c1.display();
	int a;
	cout<<"Enter a value to add it to the Matrix : ";
	cin>>a;
	Matrix c2 = c1.add(a, c1);
	c2.display();
	cout << "Enter a Matrix to add " << endl;
	Matrix c3;
	c3.read();
	c3.display();
	cout << "Matrix after adding : " << endl;
	Matrix c4 = c1.add(c1, c3);
	c4.display();
	return 0;
}
