#include <iostream>
using namespace std;

template <class T>
class Array
{
	private:
		T *ele;
		int size;
		T min;
		T max;
	public:
		Array()
		{ 
			cout << "Enter the size of the array : " ;
			cin >> size;
			ele = new T[size]; 
		}
		Array(int s) : size(s) { ele = new T[size]; }
		~Array(){ delete[] ele; }
		void getData();
		Array operator+(Array&);
		void calMinMax();
		void display();
};

template <class T>
void Array<T>::getData()
{
	cout << "Enter the array elements : " ;
	for(int i = 0; i < size; ++i)
		cin >> ele[i];
}

template <class T>
Array<T> Array<T>::operator+(Array<T> &a2)//***** & is imp******
{
	if(size != a2.size)
	{
		cout << "Array sizes are not equal" << endl;
		exit(0);
	}
	Array<T> a3(size);
	for(int i = 0; i < size; ++i)
		a3.ele[i] = ele[i] + a2.ele[i];
	return a3;
}

template <class T>
void Array<T>::calMinMax()
{
	min = ele[0];
	max = ele[0];
	for(int i = 1; i < size; ++i)
	{
		if(ele[i] > max)
			max = ele[i];
		if(ele[i] < min)
			min = ele[i];
	}
}

template <class T>
void Array<T>::display()
{
	cout << "The array elements are : ";
	for(int i = 0; i < size; ++i)
		cout << ele[i] << " ";
	cout << endl << "The maximum element of the array is : " << max << endl;
	cout << "The minimum element of the array is : " << min << endl << endl;
}

int main()
{
	cout << "Integer : " << endl;
	cout << "Array 1 : " << endl;
	Array<int> a1;
	a1.getData();
	a1.calMinMax();
	a1.display();
	cout << "Array 2 : " << endl;
	Array<int> a2;
	a2.getData();
	a2.calMinMax();
	a2.display();
	Array<int> a3 = a1 + a2;
	cout << "Array 1 + Array 2 = " << endl;
	a3.calMinMax();
	a3.display();
	cout << "Float : " << endl;
	Array<float> f1;
	cout << "Array 1 : " << endl;
	f1.getData();
	f1.calMinMax();
	f1.display();
	Array<float> f2;
	cout << "Array 2 : " << endl;
	f2.getData();
	f2.calMinMax();
	f2.display();
	Array<float> f3 = f1 + f2;
	cout << "Array 1 + Array 2 = " << endl;
	f3.calMinMax();
	f3.display();
	return 0;
}
