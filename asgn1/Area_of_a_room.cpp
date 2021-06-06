#include <iostream>
using namespace std;

struct Distance
{
	int feet;
	float inch;
};

struct Room
{
	Distance length;
	Distance width;
};

int main()
{
	Room dinning;
	float total_length,total_width;
	
	cout<<"Enter the length in feet and inch"<<endl;
	cin>>dinning.length.feet>>dinning.length.inch;
	cout<<"Enter the width in feet and inch"<<endl;
	cin>>dinning.width.feet>>dinning.width.inch;
	
	total_length=dinning.length.feet+dinning.length.inch;
	total_width=dinning.width.feet+dinning.width.inch;
	
	cout<<"The area of the room is "<<total_length*total_width<<endl;
	
	return 0;
}
