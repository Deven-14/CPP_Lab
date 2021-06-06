#include <iostream>
using namespace std;

const float Pi=3.14;

inline float areaOfCircle(float radius)
{
	return Pi*radius*radius;
}

int main()
{
	float radius;
	cout<<"Enter the radius of a circle : ";
	cin>>radius;
	cout<<"The area of the circle is : "<<areaOfCircle(radius)<<" sq units"<<endl;
	return 0;
}
