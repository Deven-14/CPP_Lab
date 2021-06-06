#include <iostream>
using namespace std;

const float Pi=3.14;

inline float volume(float radius=1, float height=1)
{
	cout<<"The volume of the cylinder with radius = "<<radius<<" and height = "<<height<<" is : ";
	return Pi*radius*radius*height;
}

int main()
{
	float radius,height;
	cout<<"Enter the radius and height of a cylinder : ";
	cin>>radius>>height;
	cout<<volume()<<endl;
	cout<<volume(radius)<<endl;
	cout<<volume(radius,height)<<endl;
	return 0;
}
