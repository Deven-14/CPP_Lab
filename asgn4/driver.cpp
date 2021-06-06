#include <iostream>
#include "addition.cpp"
#include "subtraction.cpp"

using namespace std;

int add(int ,int );//**************function prototype is needed
int sub(int ,int );

int main()
{
	int x,y;
	cout<<"Enter two integers : ";
	cin>>x>>y;
	cout<<"Sum = "<<add(x,y)<<endl;
	cout<<"Difference = "<<sub(x,y)<<endl;
	return 0;
}
