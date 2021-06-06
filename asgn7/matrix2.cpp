#include <iostream>
using namespace std;

class matrix
{
	private:
		int m,n;
		int **a;
	public:
		matrix();
		matrix(int m_, int n_);//constructor for nameless temporyary object, here both the arguments should be passed or else the normal constructor will be called and asked to input values m, n from user, that's y i didn't put default arguments here*********
		~matrix();
		void read();
		bool operator==(const matrix&);
		matrix operator+(const matrix&);
		matrix operator-(const matrix&);
		void display();
};

matrix::matrix()
{
	cout << "Enter the order of a matrix m x n : " ;
	cin >> m >> n;
	a = (int**)calloc(m, sizeof(int*));
	for(int i = 0; i < m; ++i)
		a[i] = (int*)calloc(n, sizeof(int));
}

matrix::matrix(int m_, int n_) : m(m_), n(n_)
{
	a = (int**)calloc(m, sizeof(int*));
	for(int i = 0; i < m; ++i)
		a[i] = (int*)calloc(n, sizeof(int));
}

matrix::~matrix()
{
	for(int i = 0; i < m; ++i)
		free(a[i]);
	free(a);
}

void matrix::read()
{
	cout<<"Enter the elements of a matrix of order "<<m<<" x "<<n<<" : "<<endl;
	for(int i = 0; i < m; ++i)
		for(int j = 0 ; j < n; ++j)
			cin >> a[i][j];
}

bool matrix::operator==(const matrix &m2)
{
	if(m!=m2.m || n!=m2.n)
	{
		cout << "Order of matrix 1 is not equal to order of matrix 2 " <<endl;
		exit(0);
	}
	for(int i = 0; i < m; ++i)
		for(int j = 0 ; j < n; ++j)
			if(a[i][j]!=m2.a[i][j])
				return false;
	return true;
}

matrix matrix::operator+(const matrix &m2)
{
	matrix m3(m,n);
	for(int i = 0; i < m; ++i)
		for(int j = 0 ; j < n; ++j)
			m3.a[i][j] = a[i][j] + m2.a[i][j];
	return m3;
}

matrix matrix::operator-(const matrix &m2)
{
	matrix m3(m,n);
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
	cout << "Matrix 1 : " << endl;
	matrix m1;
	m1.read();
	m1.display();
	cout << "Matrix 2 : " << endl;
	matrix m2;
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
