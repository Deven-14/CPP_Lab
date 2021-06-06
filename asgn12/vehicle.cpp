#include <iostream>
using namespace std;

class Vehicle
{
	private:
		int regno;
		static int count;
	public:
		Vehicle() { count++; }
		~Vehicle() { count--; }
		void setregno(int no) { regno = no; }
		int getregno() { return regno; }
		static int getVehiclecount() { return count; }
};

int Vehicle::count = 0;

int main()
{	
	Vehicle v1;
	v1.setregno(123);
	cout << "Register no of a vechile : " << v1.getregno() << endl;
	cout << "Total no of vehicles : " << Vehicle::getVehiclecount() << endl;
	Vehicle v2, v3;
	v2.setregno(456);
	v3.setregno(789);
	cout << "Register no of a vechile : " << v2.getregno() << endl;
	cout << "Register no of a vechile : " << v3.getregno() << endl;
	cout << "Total no of vehicles : " << Vehicle::getVehiclecount() << endl;
	return 0;
}
