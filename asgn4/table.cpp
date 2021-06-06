#include <iostream>
using namespace std;//for cout

void printTable(int n)
{
	cout << "Table of " << n << " : " << endl;
	for(int i = 1; i <= 10; ++i)
		cout << n << " x " << i << " = " << n * i << endl;
}
