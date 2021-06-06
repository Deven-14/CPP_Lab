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
		bool operator==(matrix);
		matrix operator+(matrix);
		matrix operator-(matrix);
		void display();
};

void matrix::read()
{
	cout<<"Enter the elements of a matrix of order "<<m<<" x "<<n<<" : "<<endl;
	for(int i = 0; i < m; ++i)
		for(int j = 0 ; j < n; ++j)
			cin >> a[i][j];
}

bool matrix::operator==(matrix m2)
{
	for(int i = 0; i < m; ++i)
		for(int j = 0 ; j < n; ++j)
			if(a[i][j]!=m2.a[i][j])
				return false;
	return true;
}

matrix matrix::operator+(matrix m2)
{
	matrix m3;
	for(int i = 0; i < m; ++i)
		for(int j = 0 ; j < n; ++j)
			m3.a[i][j] = a[i][j] + m2.a[i][j];
	return m3;
}

matrix matrix::operator-(matrix m2)
{
	matrix m3;
	for(int i = 0; i < m; ++i)
		for(int j = 0 ; j < n; ++j)
			m3.a[i][j] = a[i][j] - m2.a[i][j];
	return m3;
}

void matrix::display()
{
	cout << "The matrix is : " << endl;
	for(int i = 0; i < m; ++i)
	{
		for(int j = 0 ; j < n; ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

int main()
{
	matrix m1, m2;
	cout << "Matrix 1 : " << endl;
	m1.read();
	m1.display();
	cout << "Matrix 2 : " << endl;
	m2.read();
	m2.display();
	if(m1==m2)
		cout << "Matrix 1 is equal to Matrix 2" << endl << endl;
	else
		cout << "Matrix 1 is not equal to Matrix 2" << endl << endl;
	matrix m3 = m1 + m2;
	cout << "Matrix 1 + Matrix 2 = " << endl;	
	m3.display();
	matrix m4 = m1 - m2;
	cout << "Matrix 1 - Matrix 2 = " << endl;	
	m4.display();
	return 0;
}
