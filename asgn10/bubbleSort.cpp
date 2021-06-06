#include <iostream>
using namespace std;

template <class T>
inline void Swap(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

template <class T>
void bubbleSort(T arr[], int size)
{
	for(int i = 0; i < size-1; ++i)
		for(int j = 0; j < size-i-1; ++j)
			if(arr[j] > arr[j+1])
				Swap<T>(arr[j], arr[j+1]);//Swap *****capital S in Swap, coz swap already exists
}

template <class T>
void printArray(T arr[], int size)
{
	cout << "The sorted array elements are : " ;
	for(int i = 0; i < size; ++i)
		cout << arr[i] << " " ;
	cout << endl << endl;
}

int main()
{
	int n;
	cout << "Enter the size of the integer array : " ;
	cin >> n;
	int a[n];
	cout << "Enter the integer array elements : " ;
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	bubbleSort<int>(a, n);
	printArray<int>(a, n);
	int n2;
	cout << "Enter the size of the char array : " ;
	cin >> n2;
	char ch[n2];
	cout << "Enter the char array elements : " ;
	for(int i = 0; i < n2; ++i)
		cin >> ch[i];
	bubbleSort<char>(ch, n2);
	printArray<char>(ch, n2);
	return 0;
}
