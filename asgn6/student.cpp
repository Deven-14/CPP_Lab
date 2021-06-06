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
		friend void predictGrade(student);
};

void student::read()
{
	cout<<"Enter the student's id and name : "<<endl;
	cin>>id>>name;
	cout<<"Enter the 4 courses marks : "<<endl;
	for(int i=0;i<4;++i)
		cin>>marks[i];
}

void student::display()
{
	cout<<"Student details : "<<endl;
	cout<<"Id : "<<id<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Marks in the 4 courses : "<<endl;
	for(int i=0;i<4;++i)
		cout<<marks[i]<<" ";
	cout<<endl;
}

void predictGrade(student s)
{
	for(int i=0;i<4;++i)
	{
		cout<<"Grade of course "<<i+1<<" : ";
		if(s.marks[i]>=90)
			cout<<"S"<<endl;
		else if(s.marks[i]>=80)
			cout<<"A"<<endl;
		else if(s.marks[i]>=70)
			cout<<"B"<<endl;
		else if(s.marks[i]>=60)
			cout<<"C"<<endl;
		else if(s.marks[i]>=50)
			cout<<"D"<<endl;
		else if(s.marks[i]>=40)
			cout<<"E"<<endl;
		else
			cout<<"F"<<endl;
	}
}

int main()
{
	student s;
	s.read();
	s.display();
	predictGrade(s);
	return 0;
}
