#include <iostream>
using namespace std;

int main()
{
	int x=10,y=10;
	char direction;
	cout<<"The person is at (10,10)"<<endl;
	while(true)
	{
		cout<<"Enter the direction in which person moves(N,E,W,S) : ";
		cin>>direction;
		switch(direction)
		{
			case 'N':
				y++;
				break;
			case 'E':
				x++;
				break;
			case 'W':
				x--;
				break;
			case 'S':
				y--;
				break;
			default:
				cout<<"Wrong input"<<endl;
		}
		cout<<"The person is at ("<<x<<","<<y<<")"<<endl;
		if(x==7 && y==11)
		{
			cout<<"The person found the Treasure"<<endl;
			break;
		}
		if(x==5 && y==11)
		{
			cout<<"The person was eaten by the Maneater"<<endl;
			break;
		}
	}
	return 0;
}
