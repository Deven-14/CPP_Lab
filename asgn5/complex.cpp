#include <iostream>
using namespace std;

class Complex
{
	private:
		int x,y;
	public:
		Complex(int x_=0,int y_=0): x(x_), y(y_){}
		void get();
		Complex add(int a, Complex s2);
		Complex add(Complex s1, Complex s2);
		void print();
};

void Complex::get()
{
	cout<<"Enter the real part and imaginary part of a Complex number : ";
	cin>>x>>y;
}

Complex Complex::add(int a, Complex s2)
{
	Complex c(s2.x + a, s2.y);
	return c;
}

Complex Complex::add(Complex s1, Complex s2)
{
	Complex c(s1.x + s2.x, s1.y + s2.y);
	return c;
}

void Complex::print()
{
	cout<<x<<" + i"<<y<<endl;
}

int main()
{
	Complex c1;
	c1.get();
	int a;
	cout<<"Enter a value to add it the real part : ";
	cin>>a;
	Complex c2 = c1.add(a, c1);
	cout<<"The Complex number after adding the real part is : ";
	c2.print();
	Complex c3 = c1.add(c1, c2);
	cout<<"Addition of two Complex numbers : "<<endl;
	cout<<"   ";
	c1.print();
	cout<<" + ";
	c2.print();
	cout<<" = ";
	c3.print();
	return 0;
}
