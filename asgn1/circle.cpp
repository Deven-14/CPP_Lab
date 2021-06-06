#include <iostream>
#include <string>
using namespace std;

struct point
{
	int x;
	int y;
};

struct circle
{
	point center;
	float radius;
	float area;
	string color;
	string fill;
	
	circle(point p,float r,string clr,string fi)//the variable names of classes(like string) used in the structure can't be used here as parameters, eg string color can't be used as a parameter, so changed to string clr
	{
		center=p;
		radius=r;
		area=3.14*r*r;
		color=clr;
		fill=fi;
	}
};

int main()
{
	circle c1({1,2},2,"blue","full");//if we were doing c1={{1,2},2,"blue","full"},i.e normal struct initialization, it wouldn't work coz, in that we have to pass all the arguments, i.e area value also we have to pass
	circle c2({2,4},3,"red","semi");
	cout<<"Circle 1 details : "<<endl;
	cout<<"center = ("<<c1.center.x<<","<<c1.center.y<<")"<<endl;
	cout<<"radius = "<<c1.radius<<endl;
	cout<<"area = "<<c1.area<<endl;
	cout<<"color = "<<c1.color<<endl;
	cout<<"fill = "<<c1.fill<<endl;
	cout<<"Circle 2 details : "<<endl;
	cout<<"center = ("<<c2.center.x<<","<<c2.center.y<<")"<<endl;
	cout<<"radius = "<<c2.radius<<endl;
	cout<<"area = "<<c2.area<<endl;
	cout<<"color = "<<c2.color<<endl;
	cout<<"fill = "<<c2.fill<<endl;
	return 0;
}
