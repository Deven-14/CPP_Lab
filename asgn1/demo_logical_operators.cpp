#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	cout<<"Enter the value of a, b, c and d : "<<endl;
	cin>>a>>b>>c>>d;
	cout<<"a="<<a<<",b="<<b<<",c="<<c<<",d="<<d<<endl;
	if(a>b && c==d)
		cout<<"a is greater than b AND c is equal to d"<<endl;
	else
		cout<<"AND condition not satisfied"<<endl;
	if(a>b || c==d)
		cout<<"a is greater than b OR c is equal to d"<<endl;
	else
		cout<<"OR condition is not satisfied"<<endl;
	if(!a)
		cout<<"The value of a is 0"<<endl;
	else 
		cout<<"The value of a is not 0"<<endl;
	return 0;
}
