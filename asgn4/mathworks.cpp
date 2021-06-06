#include <iostream>
using namespace std;

class MathWorks
{
	private:
		int x,y;
	public:
		MathWorks(int x=0,int y=0):x(x),y(y){}
		void read()
		{
			cout<<"Enter two integers :";
			cin>>x>>y;
		}
		int	add()
		{
			return x+y;
		}
		int sub()
		{
			return x-y;
		}
		int mul()
		{
			return x*y;
		}
		int div()
		{
			return static_cast<float>(x)/y;
		}
		void disp()
		{
			cout<<"The two integers are : "<<x<<" "<<y<<endl;
		}
};

int main()
{
	//MathWorks m(10,5);
	MathWorks m;
	m.read();
	m.disp();
	cout<<"The sum of the two integers = "<<m.add()<<endl;
	cout<<"The difference of the two integers = "<<m.sub()<<endl;
	cout<<"The product of the two integers = "<<m.mul()<<endl;
	cout<<"The quotient on division of the two integers = "<<m.div()<<endl;
	return 0;
}
