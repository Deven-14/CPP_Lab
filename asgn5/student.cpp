#include <iostream>
#include "student.h"
using namespace std;

using student::id;
using student::name;

int main()
{
	cout<<"Enter student id and name : ";
	cin>>id>>name;
	cout<<"Student id : "<<id<<endl;
	cout<<"Student name : "<<name<<endl;
	return 0;
}
