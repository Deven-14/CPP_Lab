#include <iostream>
using namespace std;

class Student
{
	private:
		string name;
		int id;
		int marks[4];
	public:
		void inputData();
		bool operator==(Student s2);
		bool operator>(Student s2);
		void outputData();
};

void Student::inputData()
{
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Id : ";
	cin >> id;
	cout << "Enter the 4 subjects marks in order : ";
	for(int i = 0; i < 4; ++i)
		cin >> marks[i];
}

bool Student::operator==(Student s2)
{
	int totalMarks1 = 0, totalMarks2 = 0;
	for(int i = 0; i < 4; ++i)
	{
		totalMarks1 += marks[i];
		totalMarks2 += s2.marks[i];
	}
	if(totalMarks1 == totalMarks2)	
		return true;
	else
		return false;
}

bool Student::operator>(Student s2)
{
	int totalMarks1 = 0, totalMarks2 = 0;
	for(int i = 0; i < 4; ++i)
	{
		totalMarks1 += marks[i];
		totalMarks2 += s2.marks[i];
	}
	if(totalMarks1 > totalMarks2)	
		return true;
	else
		return false;
}

void Student::outputData()
{
	cout << endl << "Student details : " << endl;
	cout << "Name : " << name << endl;
	cout << "Id : " << id << endl;
	cout << "Marks  : ";
	for(int i = 0; i < 4; ++i)
		cout << marks[i] << " ";
	cout << endl;
}

int main()
{
	Student s1, s2;
	cout << "Student 1 : " << endl;
	s1.inputData();
	s1.outputData();
	cout << endl << "Student 2 : " << endl;
	s2.inputData();
	s2.outputData();
	if(s1 == s2)
		cout << "Student 1 has the same marks as student 2" << endl;
	else if(s1 > s2)
		cout << "Student 1 marks is greater than student 2's marks" << endl;
	else 
		cout << "Student 1 marks is less than student 2's marks" << endl;
	return 0;
}
