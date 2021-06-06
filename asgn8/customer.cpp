#include <iostream>
using namespace std;

class PersonData
{
	private :
		string firstName, lastName, address, city, state;
		int phoneNo;
	public :
		PersonData(string &f, string &l, string &a, string &c, string &s, int p) : firstName(f), lastName(l), address(a), city(c), state(s), phoneNo(p) {}
		
		void setFirstName(string &f){ firstName = f; }
		void setLastName(string &l){ lastName = l; }
		void setAddress(string &a){ address = a; }
		void setCity(string &c){ city = c; }
		void setState(string &s){ state = s; }
		void setPhoneNo(int p){ phoneNo = p; }
		
		string getFirstName(){ return firstName; }
		string getLastName(){ return lastName; }
		string getAddress(){ return address; }
		string getCity(){ return city; }
		string getState(){ return state; }
		int getPhoneNo(){ return phoneNo; }
};

class CustomerData : public PersonData
{
	private :
		string emailId;
		int customerNo;
	public :
		CustomerData(string f, string l,  string a, string c, string s, int p, string e, int cno) : PersonData(f, l, a, c, s, p), emailId(e), customerNo(cno) {}
		
		void setCustomerNo(int cNo){ customerNo = cNo; }
		void setEmailId(string &e){ emailId = e; }
		
		int getCustomerNo(){ return customerNo; }
		string getEmailId(){ return emailId; }
};

void display(CustomerData &c)//wrote separate fucntion to show the use of get functions
{
	cout << "CustomerData : " << endl << endl;
	cout << "First Name : " << c.getFirstName() << endl;
	cout << "Lirst Name : " << c.getLastName() << endl;
	cout << "Address : " << c.getAddress() << endl;
	cout << "City : " << c.getCity() << endl;
	cout << "State : " << c.getState() << endl;
	cout << "Phone Number : " << c.getPhoneNo() << endl;
	cout << "Customer Number : " << c.getCustomerNo() << endl;
	cout << "Email Id : " << c.getEmailId() << endl;
}

int main()
{
	CustomerData c("Dev", "P", "#389,Basavanagudi", "Bangalore", "Karanataka", 1234567890, "dev@xyz.com", 2345678);
	display(c);
	string s;
	int n;
	cout << endl;
	cout << "Edit : " << endl;
	cout << "Enter First Name : ";
	cin >> s;
	c.setFirstName(s);
	cout << "Enter Last Name : ";
	cin >> s;
	c.setLastName(s);
	cout << "Enter Email : ";
	cin >> s;
	c.setEmailId(s);
	cout << "Enter Phone Number : ";
	cin >> n;
	c.setPhoneNo(n);
	cout << endl;
	display(c);
	return 0;
}
