#include <iostream>
using namespace std;

class Hexa
{
	private :
		string number;
	public :
		Hexa(string n = "0") : number(n) {}
		void read()
		{
			cout << "Enter a Hexadecimal number : ";
			cin >> number;
		}
		void display(){ cout << "The Hexadecimal number is : " << number << endl; }
		friend int toDecimal(Hexa);
};

class Oct
{
	private :
		int number;
	public :
		Oct(int n = 0) : number(n) {}
		void read()
		{
			cout << "Enter a Octal number : ";
			cin >> number;
		}
		void display(){ cout << "The Octal number is : " << number << endl; }
		friend int toDecimal(Oct);
};

int toDecimal(Hexa h)
{
	int len = h.number.size();
	int base = 1; // 16^0 = 1************************************
	int decimalNum = 0;
	for(int i = len-1; i >= 0; --i)
	{
		if(h.number[i] >= '0' && h.number[i] <= '9')
			decimalNum += (h.number[i] - '0') * base; //or h.num - 48 coz '0'=48 and 'A'=65
		else//if(h.numer[i]>='A' && h.number[i]<='F')
			decimalNum += (h.number[i] - 'A' + 10) * base;// or use pow();//+10 coz 0 to 9 then from 10 to 15
		base *= 16;//base is 16, so 16^0, 16^1, 16^2 etc
		//make no spaces in the number coz, we are doing base*=16 for all i in loop*****
	}
	return decimalNum;
}

int toDecimal(Oct o)
{
	int base = 1;
	int decimalNum = 0;
	int octalNum = o.number, rem;
	while(octalNum != 0)
	{
		rem = octalNum % 10;
		decimalNum += (rem * base);//do using base like this or use pow();
		base *= 8;
		octalNum /= 10;
	}
	return decimalNum;
}

int main()
{
	Hexa h;
	h.read();
	h.display();
	cout << "The decimal form of this number is : " << toDecimal(h) << endl;
	Oct o;
	o.read();
	o.display();
	cout << "The decimal form of this number is : " << toDecimal(o) << endl;
	return 0;
}
