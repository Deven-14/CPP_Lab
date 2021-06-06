#include <iostream>
using namespace std;

class Person
{
	private :
		string name;
		int phoneNo;
	public :
		Person(string &n, int p) : name(n), phoneNo(p) {}
		void display()
		{
			cout << "Name : " << name << endl << "Phone Number : " << phoneNo << endl;
		}
};

class Faculty : public Person
{
	private :
		int facultyNo;
	public : 
		Faculty(string n, int p, int fno) : Person(n, p), facultyNo(fno) {}
		void display()
		{
			cout << "Faculty : " << endl;
			Person::display();
			cout << "Faculty Number : " << facultyNo << endl << endl;
		}
};

class NonTeachingStaff : public Person
{
	private :
		int nonTeachingStaffNo;
	public : 
		NonTeachingStaff(string n, int p, int no) : Person(n, p), nonTeachingStaffNo(no) {}
		void display()
		{
			cout << "Non Teaching Staff : " << endl;
			Person::display();
			cout << "Non Teaching Staff Number : " << nonTeachingStaffNo << endl << endl;
		}
};

class OfficeStaff : public Person
{
	private :
		int officeStaffNo;
	public : 
		OfficeStaff(string n, int p, int no) : Person(n, p), officeStaffNo(no) {}
		void display()
		{
			cout << "Office Staff : " << endl;
			Person::display();
			cout << "Office Staff Number : " << officeStaffNo << endl << endl;
		}
};

int main()
{
	Faculty f("A", 12345, 987);
	NonTeachingStaff n("B", 23456, 345);
	OfficeStaff o("C", 34567, 567);
	f.display();
	n.display();
	o.display();
	return 0;
}
