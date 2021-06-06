#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter 2 integers : ";
	cin >> a >> b;
	cout << "a = " << a << " b = " << b <<endl;
	if(b == 0)
	{
		cout << "Error - division by 0 " << endl;
		exit(0);
	}
	cout << "a % b = " << a % b << endl;
	cout << "b % a = " << b % a << endl;
	return 0;
}
