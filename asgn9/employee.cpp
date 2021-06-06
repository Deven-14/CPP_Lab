#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
	private:
		string name;
		int eId;
	public:
		Employee(string n = "NULL", int id = 0) : name(n), eId(id) {}
		void display()
		{
			cout << "Emloyee : " << endl;
			cout << "Name : " << name << endl;
			cout << "Employee Id : " << eId << endl;
		}
};

class Manager : public Employee
{
	private:
		int mId;
	public:
		Manager(string n = "NULL", int eid = 0, int mid = 0) : Employee(n, eid), mId(mid) {}
		void display()
		{
			Employee::display();
			cout << "Manager : " << endl;
			cout << "Manager Id : " << mId << endl;
		}
};

class Director : public Manager
{
	private:
		int dId;
	public:
		Director(string n = "NULL", int eid = 0, int mid = 0, int did = 0) : Manager(n, eid, mid), dId(did) {}
		void display()
		{
			Manager::display();
			cout << "Director : " << endl;
			cout << "Director Id : " << dId << endl;
		}
};

class Temporary
{
	private:
		string name;
		int tId;
	public:
		Temporary(string  n = "NULL", int id = 0) : name(n), tId(id) {}
		void display()
		{
			cout << "Temporary : " << endl;
			cout << "Name : " << name << endl;
			cout << "Temporary Id : " << tId << endl;
		}
};


class Secretary : public Employee
{
	private:
		int sId;
	public:
		Secretary(string n = "NULL", int eid = 0, int sid = 0) : Employee(n, eid), sId(sid) {}
		void display()
		{
			Employee::display();
			cout << "Secretary : " << endl;
			cout << "Secretary Id : " << sId << endl;
		}
};

class Tse : public Temporary, public Secretary
{
	private:
		int tSId;//temporary secretary Id
	public:
		Tse(string en = "NULL", int eid = 0, int sid = 0, string tn = "NULL", int tid = 0, int tsid = 0) : Secretary(en, eid, sid), Temporary(tn, tid), tSId(tsid) {}
		void display()
		{
			Temporary::display();
			Secretary::display();
			cout << "Tse : " << endl;
			cout << "Tse Id : " << tSId << endl;
		}
};

class Consultant : public Temporary, public Manager
{
	private:
		int cId;
	public:
		Consultant(string tn = "NULL", int tid = 0, string en = "NULL", int eid = 0, int mid = 0, int cid = 0) : Temporary(tn, tid), Manager(en, eid, mid), cId(cid) {}
		void display()
		{
			Temporary::display();
			Manager::display();
			cout << "Consultant : " << endl;
			cout << "Consultant Id : " << cId << endl;
		}
};

int main()
{
	cout << "Director class " << endl;
	Director d("Dev1", 123, 234, 456);
	d.display();
	cout << endl << "Tse class " << endl;
	Tse t("Dev2", 987, 876, "Dev3", 765, 654);
	t.display();
	cout << endl << "Consultant class " << endl;
	Consultant c("Dev4", 345, "Dev5", 567, 678, 589);
	c.display();
	return 0;
}
