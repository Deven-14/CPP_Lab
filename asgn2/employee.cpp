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
		void inputDetails();
		void calculateNetSalary();
		void displayDetails();
};

void employee::inputDetails()
{
	cout<<"Employee Name : ";
	cin>>name;
	cout<<"Employee Number : ";
	cin>>number;
	cout<<"Basic Salary : ";
	cin>>basicSalary;
	cout<<endl;
}

void employee::calculateNetSalary()
{
	float dearnessAllowance,grossSalary,incomeTax;//no need to display these, these are needed only to calculate,so not declaring in private but here
	dearnessAllowance=(basicSalary*52)/100;
	grossSalary=basicSalary+dearnessAllowance;
	incomeTax=(grossSalary*30)/100;
	netSalary=basicSalary+dearnessAllowance-incomeTax;
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
	int n;
	cout<<"Input number of employees : ";
	cin>>n;
	employee e[n];
	for(int i=0;i<n;++i)
	{
		cout<<"Input Employee "<<i+1<<" details : "<<endl;
		e[i].inputDetails();
		e[i].calculateNetSalary();
		cout<<"Employee "<<i+1<<" Details are : "<<endl;
		e[i].displayDetails();
	}
	return 0;
}
