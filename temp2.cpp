#include <iostream>
using namespace std;

class Octal
{
	private :
		int number;
	public :
		int toOctal(int);
		Octal(int n = 0)
		{
			number = toOctal(n);
		}
		int operator+(int k);
		int toDecimal();
		friend ostream& operator<<(ostream &out, Octal o);
};

int Octal::toDecimal()
{
	int base = 1;
	int decimalNum = 0;
	int octalNum = number, rem;
	while(octalNum != 0)
	{
		rem = octalNum % 10;
		decimalNum += (rem * base);
		base *= 8;
		octalNum /= 10;
	}
	return decimalNum;
}

int Octal::toOctal(int decimalNumber)
{
	int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

int Octal::operator+(int k)
{
	int y = this->toDecimal() + k;
	return y;
}

ostream& operator<<(ostream &out, Octal o)
{
	out << "Octal number is : " << o.number << endl;
	return out;
}

int main()
{
	int x;
	cout << "Enter an integer number : " << endl;
	cin >> x;
	Octal h = x;
	cout << h;
	int k;
	cout << "Enter an integer number to add to the octal number: " << endl;
	cin >> k;
	int y = h + k;
	cout << "Value of the integer after adding the octal number is : " << y << endl;
	return 0;
}
