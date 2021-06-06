#include <iostream>
using namespace std;

class Student
{
	private:
		string name;
		int usn;
		int marks[3][6];
		float avgMarks[6];
	public:
		void inputData();
		void calculateAvgMarks();
		void outputData();
};

void Student::inputData()
{
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter USN : ";
	cin >> usn;
	for(int i = 0; i < 3; ++i)
	{
		cout << "Enter the 6 subjects marks in order of test " << i + 1 << " : ";
		for(int j = 0; j < 6; ++j)
			cin >> marks[i][j];
	}
}

void Student::calculateAvgMarks()
{
	int mark1, mark2;
	for(int i = 0; i < 6; ++i)
	{
		if(marks[0][i] >= marks[1][i])
		{
			mark1 = marks[0][i];
			if(marks[1][i] >= marks[2][i])
				mark2 = marks[1][i];
			else
				mark2 = marks[2][i];
		}
		else
		{
			mark1 = marks[1][i];
			if(marks[0][i] >= marks[2][i])
				mark2 = marks[0][i];
			else
				mark2 = marks[2][i];
		}
		avgMarks[i] = static_cast<float>(mark1 + mark2) / 2;
	}
}

void Student::outputData()
{
	cout << endl << "Student details : " << endl;
	cout << "Name : " << name << endl;
	cout << "USN : " << usn << endl;
	cout << "Average Marks  : ";
	for(int i = 0; i < 6; ++i)
		cout << avgMarks[i] << " ";
	cout << endl;
}

int main()
{
	int n;
	cout << "Enter the number of students : " << endl;
	cin >> n;
	Student s[n];
	for(int i = 0; i < n; ++i)
	{
		cout << endl << "Student " << i + 1 << endl;
		s[i].inputData();
		s[i].calculateAvgMarks();
		s[i].outputData();
	}
	return 0;
}
