#include <iostream>
#include <cstdlib>
using namespace std;

int fibonacci(int n)
{
	if(n == 1)
		return 0;
	if(n == 2)
		return 1;
	return (fibonacci(n - 2) + fibonacci(n - 1));
}

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		cout << "Input fail" << endl;
		exit(0);
	}
	int n = atoi(argv[1]);
	if(n <= 0)
	{
		cout << "Wrong Input" << endl;
		exit(0);
	}
	int num = fibonacci(n);
	cout << "The " << n <<"th number of the fibonacci series is : " << num << endl;
	return 0;
}
