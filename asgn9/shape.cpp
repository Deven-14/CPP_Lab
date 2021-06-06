#include <iostream>
using namespace std;

class Shape
{
	public:
		Shape() { cout << "Shape()" << endl; }
		void draw()
		{
			cout << "Shape : Initialize brush" << endl;
		}
};

class Triangle : public Shape
{
	public:
		Triangle() { cout << "Triangle()" << endl; }//automatically call shape()
		void draw()
		{
			Shape::draw();
			cout << "Triangle" << endl;
		}
};

class RightTriangle : public Triangle
{
	public:
		RightTriangle() { cout << "Right Triangle()" << endl; }
		void draw()
		{
			Shape::draw();
			cout << "Right triangle" << endl;
		}
};

class Quadilateral : public Shape
{
	public:
		Quadilateral() { cout << "Quadilateral()" << endl; }
		void draw()
		{
			Shape::draw();
			cout << "Quadilateral : " << endl;
		}
};

class Rectangle : public Quadilateral
{
	public:
		Rectangle() { cout << "Rectangle()" << endl; }
		void draw()
		{
			Shape::draw();
			cout << "Rectangle" << endl;
		}
};

class Square : public Rectangle
{
	public:
		Square() { cout << "Square()" << endl; }
		void draw()
		{
			Shape::draw();
			cout << "Square" << endl;
		}
};

int main()
{
	cout << " A triangle " << endl;
	Triangle t;
	t.draw();
	cout << endl << " A right triangle " << endl;
	RightTriangle rt;
	rt.draw();
	cout << endl << " A Rectangle " << endl;
	Rectangle r;
	r.draw();
	cout << endl << " A Square " << endl;
	Square s;
	s.draw();
	cout << endl;
	return 0;
}
