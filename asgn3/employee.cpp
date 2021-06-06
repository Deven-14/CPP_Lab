#include <iostream>
#include <string>
using namespace std;

class employee
{
	private:
		string name;
		int number;
		float basicSalary,netSalary;
	public:
		employee():name("NULL"),number(0),basicSalary(0.0){}
		employee(string name,int no,float bsly):name(name),number(no),basicSalary(bsly){}
		void calculateNetSalary();
		void displayDetails();
		int addSalary(employee e);
};

void employee::calculateNetSalary()
{
	float dearnessAllowance,grossSalary,incomeTax;//no need to display these, these are needed only to calculate,so not declaring in private but here
	dearnessAllowance=(basicSalary*52)/100;
	grossSalary=basicSalary+dearnessAllowance;
	incomeTax=(grossSalary*30)/100;
	netSalary=basicSalary+dearnessAllowance-incomeTax;
}

int employee::addSalary(employee e)
{
	int total=0;
	total=netSalary+e.netSalary;
	return total;
}

void employee::displayDetails()
{
	cout<<"Employee Name : "<<name<<endl;
	cout<<"Employee Number : "<<number<<endl;
	cout<<"Basic Salary : "<<basicSalary<<endl;
	cout<<"Net Salary : "<<netSalary<<endl<<endl;
}

int main()
{
	employee e1("Deven",125678,100000.0);
	employee e2("Dev",234567,200000.0);
	e1.calculateNetSalary();
	e1.displayDetails();
	e2.calculateNetSalary();
	e2.displayDetails();
	int total=e1.addSalary(e2);
	cout<<"Total Salary = "<<total<<endl;
	return 0;
}
