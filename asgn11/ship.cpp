#include <iostream>
using namespace std;

class Ship
{
	protected:
		string name;
		int builtYear;
	public:
		Ship(string n = "", int by = 0) : name(n), builtYear(by) {}
		string getName() { return name; }
		int getBuiltYear() { return builtYear; }
		virtual void print();
};

void Ship::print()
{
	cout << "Ship's Name : " << name << endl;
	cout << "Built Year : " << builtYear << endl;
}

class CruiseShip : public Ship
{
	private:
		int maxNoPass;
	public:
		CruiseShip(string n = "", int by = 0, int m = 0) : Ship(n, by), maxNoPass(m) {}
		int getMaxNoPass() { return maxNoPass; }
		virtual void print();
};

void CruiseShip::print()
{
	cout << "Cruise Ship's Name : " << name << endl;
	cout << "Cruise Ship's Maximum Number of Passengers : " << maxNoPass << endl;
}

class CargoShip : public Ship
{
	private:
		int cargoCapacity;
	public:
		CargoShip(string n = "", int by = 0, int c = 0) : Ship(n, by), cargoCapacity(c) {}
		int getCargoCapacity() { return cargoCapacity; }
		virtual void print();
};

void CargoShip::print()
{
	cout << "Cargo Ship's Name : " << name << endl;
	cout << "Cargo Ship's Cargo : " << cargoCapacity << endl;
}

int main()
{
	int n;
	cout << "Enter the number of ships : ";
	cin >> n;
	Ship *s[n];
	string name;
	int builtYear;
	for(int i = 0; i < n; ++i)
	{
		cout << endl << "Ship " << i+1 << " : " << endl;
		cout << "Enter Ship's Name : ";
		cin >> name;
		cout << "Enter Ship's built year : ";
		cin >> builtYear;
		int type;
		cout << "Enter Ship's type (1.Cruise Ship, 2.CargoShip) : ";
		cin >> type;
		if(type == 1)
		{
			int maxNoPass;
			cout << "Enter Cruise Ship's Maximum number of passengers : ";
			cin >> maxNoPass;
			s[i] = new CruiseShip(name, builtYear, maxNoPass);
		}
		else
		{
			int cargoCapacity;
			cout << "Enter Cargo Ship's cargo Capacity : ";
			cin >> cargoCapacity;
			s[i] = new CargoShip(name, builtYear, cargoCapacity);
		}
	}
	for(int i = 0; i < n; ++i)
	{
		cout << endl << "Ship " << i+1 << " : " << endl;
		s[i]->print();
		delete s[i];
	}
	return 0;
}
