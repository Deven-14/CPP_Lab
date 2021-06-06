#include <iostream>
using namespace std;

class employee
{
	private:
		string name;
		int employeeId;
		int salary;
	public:
		employee(string n = "NULL", int id = 0, int s = 0): name(n), employeeId(id), salary(s){}
		int getSalary(){ return salary; }
		void display();
};

void employee::display()
{
	cout << "Employee Details : " << endl;
	cout << "Name : " << name << endl;
	cout << "Employee Id : " << employeeId << endl;
	cout << "Salary : " << salary << endl;
}

class salesPerson : public employee
{
	private:
		int deptId;
	public:
		salesPerson(string n = "NULL", int id = 0, int s = 0, int dId = 0) : employee(n, id, s), deptId(dId) {}
		void display();
};

void salesPerson::display()
{
	employee::display();
	cout << "Department : Sales" << endl;
	cout << "Department Id : " << deptId << endl;
}

class fullTimeSalesPerson : public salesPerson
{
	private:
		int bonus, workHours;
	public:
		fullTimeSalesPerson(string n = "NULL", int id = 0, int s = 0, int dId = 0) : salesPerson(n, id, s, dId)
		{
			bonus = static_cast<float>(getSalary() * 10) / 100;
			workHours = 10;
		}
		void display();
};

void fullTimeSalesPerson::display()
{
	salesPerson::display();
	cout << "Type : Full Time" << endl;
	cout << "Bonus : " << bonus << endl;
	cout << "Work Hours : " << workHours << endl << endl;
}

class halfTimeSalesPerson : public salesPerson
{
	private:
		int workHours;
		float bonus;
	public:
		halfTimeSalesPerson(string n = "NULL", int id = 0, int s = 0, int dId = 0) : salesPerson(n, id, s, dId)
		{
			bonus = static_cast<float>(getSalary() * 7) / 100;
			workHours = 5;
		}
		void display();
};

void halfTimeSalesPerson::display()
{
	salesPerson::display();
	cout << "Type : Half Time" << endl;
	cout << "Bonus : " << bonus << endl;
	cout << "Work Hours : " << workHours << endl << endl;
}

int main()
{
	fullTimeSalesPerson f("Dev1", 12345, 20000, 7890);
	f.display();
	halfTimeSalesPerson h("Dev2", 34567, 10000, 4574);
	h.display();
	return 0;
}
