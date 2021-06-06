#include <iostream>
using namespace std;

class student
{
	private:
		string name;
		string USN;
	public:
		void inputDetails();
		void outputDetails();
};

void student::inputDetails()
{
	cout<<"Name : ";
	cin>>name;
	cout<<"USN : ";
	cin>>USN;
}

void student::outputDetails()
{
	cout<<"Name : "<<name<<endl;
	cout<<"USN : "<<USN<<endl;
}

class marks:public student
{
	private:
		int marks[3][6];
		float avgMarks[6];
	public:
		void inputMarks();
		void calculateAvgMarks();
		void outputAvgMarks();
};

void marks::inputMarks()
{
	for(int i=0;i<3;++i)
	{
		cout<<"Enter test "<<i+1<<" marks of 6 subjects in order: ";
		for(int j=0;j<6;++j)
			cin>>marks[i][j];
	}
}

void marks::calculateAvgMarks()
{
	int subMarks1,subMarks2;
	for(int i=0;i<6;++i)
	{
		if(marks[0][i]>=marks[1][i])
		{
			subMarks1=marks[0][i];
			if(marks[2][i]>=marks[1][i])
				subMarks2=marks[2][i];
			else
				subMarks2=marks[1][i];
		}
		else
		{
			subMarks1=marks[1][i];
			if(marks[2][i]>=marks[0][i])
				subMarks2=marks[2][i];
			else
				subMarks2=marks[0][i];
		}
		avgMarks[i]=static_cast<float>(subMarks1+subMarks2)/2;//****************
	}
}

void marks::outputAvgMarks()
{
	cout<<"Average Marks : ";
	for(int j=0;j<6;++j)
		cout<<avgMarks[j]<<" ";
	cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter number of students : ";
	cin>>n;
	marks m[n];
	for(int i=0;i<n;++i)
	{
		cout<<"Enter the details of student "<<i+1<<endl;
		m[i].inputDetails();
		m[i].inputMarks();
		m[i].calculateAvgMarks();
		m[i].outputAvgMarks();
	}
	return 0;
}
