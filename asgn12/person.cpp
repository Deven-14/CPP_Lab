#include <iostream>
using namespace std;

class Person
{
	private:
		string name;
		int age;
	public:
		Person(string n = "", int age_ = 0) : name(n), age(age_) {}
		void display();
};

void Person::display()
{
	cout << "Person : " << endl;
	cout << "  Name : " << name << endl;
	cout << "  Age : " << age << endl;
}

class Student : virtual public Person
{
	private:
		int usn;
	public:
		//Student(string n = "", int age = 0, int no = 0) : Person(n, age), usn(no) {}
		Student(int no) : usn(no) {}//for the ta class coz it'll call person's parameterized constructor directly first and so here we need not call person's parameterized constructor, person is already initialized with values and student is called, instead of calling person(n,age), student(n, age, usn), Fac... in TA... we can call, person(n,age), student(usn).... coz person is already initialized, we don't need to call person's parameterized cons. in student
		void display();
};

void Student::display()
{
	cout << "Student : " << endl;
	cout << "  USN : " << usn << endl;
}

class Faculty : virtual public Person
{
	private:
		int facId;
	public:
		Faculty(int id) : facId(id) {}
		//Faculty(string n = "", int age = 0, int id = 0) : Person(n, age), facId(id) {}
		void display();
};

void Faculty::display()
{
	cout << "Faculty : " << endl;
	cout << "  Id : " << facId << endl;
}

class TA : public Student, public Faculty
{
	private:
		int salary;
	public:
		TA(string n = "", int age = 0, int usn = 0, int id = 0, int sal = 0) : Person(n, age), Student(usn), Faculty(id), salary(sal) {}
		void display();
};

void TA::display()
{
	Person::display();
	Student::display();
	Faculty::display();
	cout << "TA : " << endl;
	cout << "  Salary : " << salary << endl;
}

int main()
{
	TA t("Dev", 22, 123, 789, 20000);
	cout << "TA details : " << endl << endl;
	t.display();
	return 0;
}
