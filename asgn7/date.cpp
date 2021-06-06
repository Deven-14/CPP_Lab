#include <iostream>
using namespace std;

class Date
{
	private :
		int day, month, year;
	public :
		Date(int d = 0, int m = 0, int y = 0) : day(d), month(m), year(y) {}
		void read();
		Date operator++();
		Date operator++(int);
		void display();
};

void Date::read()
{
	cout << "Enter the day, month and year : ";
	cin >> day >> month >> year;
}

Date Date::operator++()
{
	++day;
	month += (day/30);
	year += (month/12);
	month %= 12;
	day %= 30;
	//return Date(day, month, year);
	return *this;
}

Date Date::operator++(int)
{
	int d = day++, m = month, y = year;
	month += (day/30);
	year += (month/12);
	month %= 12;
	day %= 30;
	return Date(d, m, y);
}

void Date::display()
{
	cout << endl;
	cout << "Day = " << day << endl;
	cout << "Month = " << month << endl;
	cout << "Year = " << year << endl;
	cout << endl;
}

int main()
{
	Date d;
	d.read();
	d.display();
	Date e = ++d;
	cout << "After prefix operation : " << endl;
	d.display();
	cout << "Returned object : " << endl;
	e.display();
	e = d++;
	cout << "After postfix operation : " << endl;
	d.display();
	cout << "Returned object : " << endl;
	e.display();
	return 0;
}
