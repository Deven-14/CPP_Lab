#include <iostream>
#include <cmath>
using namespace std;

inline float sqroot(float n)
{
	return sqrt(n);
}

int main()
{
	float n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"The square root of "<<n<<" is "<<sqroot(n)<<endl;
	return 0;
}
