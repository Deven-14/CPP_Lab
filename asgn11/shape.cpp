#include <iostream>
using namespace std;

class Shape
{
	protected:
		double x, y;
	public:
		void getData();
		virtual void displayArea() = 0;
};

void Shape::getData()
{
	cout << "Enter the values of x and y : " << endl;
	cin >> x >> y;
	cout << endl;
}

class Triangle : public Shape
{
	public:
		void displayArea();
};

void Triangle::displayArea()
{
	cout << "Triangle : " << endl;
	cout << "x : " << x << ", y : " << y << endl;
	cout << "Area : " << x*y/2 << endl << endl;
}

class Rectangle : public Shape
{
	public:
		void displayArea();
};

void Rectangle::displayArea()
{
	cout << "Rectangle : " << endl;
	cout << "x : " << x << ", y : " << y << endl;
	cout << "Area : " << x*y << endl;
}

int main()
{
	Shape *ptr;
	cout << "Triangle : " << endl;
	ptr = new Triangle();
	ptr->getData();
	ptr->displayArea();
	delete ptr;
	cout << "Rectangle : " << endl;
	ptr = new Rectangle();
	ptr->getData();
	ptr->displayArea();
	delete ptr;
	return 0;
}
