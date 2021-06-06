#include <iostream>
using namespace std;

class student
{
	private:
		int id;
		string name;
		int marks[4];
	public:
		void read();
		void display();
		bool operator==(student);
		bool operator>(student);
};

void student::read()
{
	cout << "Enter the student's id and name : " << endl;
	cin >> id >> name;
	cout << "Enter the 4 courses marks : " << endl;
	for(int i = 0; i < 4; ++i)
		cin >> marks[i];
}

void student::display()
{
	cout << "Student details : " << endl;
	cout << "Id : " << id << endl;
	cout << "Name : " << name << endl;
	cout << "Marks in the 4 courses : " << endl;
	for(int i = 0; i < 4; ++i)
		cout << marks[i] <<" ";
	cout << endl;
}

bool student::operator==(student s2)
{
	int sum1 = 0, sum2 = 0;
	for(int i = 0; i < 4; ++i)
	{
		sum1 += marks[i];
		sum2 += s2.marks[i];
	}
	if(sum1==sum2)
		return true;
	return false;
}

bool student::operator>(student s2)
{
	int sum1 = 0, sum2 = 0;
	for(int i = 0; i < 4; ++i)
	{
		sum1 += marks[i];
		sum2 += s2.marks[i];
	}
	if(sum1>sum2)
		return true;
	return false;
}

int main()
{
	student s1, s2;
	cout << "Student 1 :" << endl;
	s1.read();
	s1.display();
	cout << "Student 2 :" << endl;
	s2.read();
	s2.display();
	if(s1 == s2)
		cout << "Total marks of student 1 is equal to total marks student 2" << endl;
	else if(s1 > s2)
		cout << "Total marks of student 1 is greater than total marks student 2" << endl;
	else
		cout << "Total marks of student 2 is greater than total marks student 1" << endl;
	return 0;
}
