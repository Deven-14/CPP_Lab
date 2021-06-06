#include <iostream>
using namespace std;

namespace student
{
	int id = 500;
	string name = "Deven";
	namespace marks
	{
		int subject1 = 50;
		int subject2 = 60;
		int subject3 = 70;
	}
}

int main()
{
	cout<<"Student id : "<<student::id<<endl;
	cout<<"Student name : "<<student::name<<endl;
	cout<<"Student marks : "<<endl;
	cout<<"Subject 1 = "<<student::marks::subject1<<endl;
	cout<<"Subject 2 = "<<student::marks::subject2<<endl;
	cout<<"Subject 3 = "<<student::marks::subject3<<endl;
	return 0;
}
	
