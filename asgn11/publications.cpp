#include <iostream>
using namespace std;

class Publication
{
	private:
		string title;
		float price;
	public:
		void getData();
		void displayData();
};

void Publication::getData()
{
	cout << "Enter Publication Data : " << endl;
	cout << "Enter Title : ";
	cin >> title;
	cout << "Enter Price : ";
	cin >> price;
}

void Publication::displayData()
{
	cout << endl << "Publication Data : " << endl;
	cout << "Title : " << title << endl;
	cout << "Price : " << price << endl;
}

class Book : public Publication
{
	private:
		int pageCount;
	public:
		void getData();
		void displayData();
};

void Book::getData()
{
	cout << "Book : " << endl;
	Publication::getData();
	cout << "Enter page count : ";
	cin >> pageCount;
}

void Book::displayData()
{
	Publication::displayData();
	cout << "Page count : " << pageCount << endl << endl;
}

class Tape : public Publication
{
	private:
		int time;
	public:
		void getData();
		void displayData();
};

void Tape::getData()
{
	cout << "Tape : " << endl;
	Publication::getData();
	cout << "Enter time in minutes : ";
	cin >> time;
}

void Tape::displayData()
{
	Publication::displayData();
	cout << "Time in minutes is : " << time << endl << endl;
}

int main()
{
	Book b;
	b.getData();
	b.displayData();
	Tape t;
	t.getData();
	t.displayData();
	return 0;
}
