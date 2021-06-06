#include <iostream>
using namespace std;

struct distance
{
	float feet,inches;
};
typedef struct distance Distance;

void display(Distance d)
{
	cout<<"Feet : "<<d.feet<<endl;
	cout<<"Inches : "<<d.inches<<endl;
}

void display(float f)
{
	cout<<"Entered value : "<<f<<endl;
}

int main()
{
	Distance d={5,10};
	display(d);
	float f;
	cout<<"Enter a float value : ";
	cin>>f;
	display(f);
	return 0;
}
