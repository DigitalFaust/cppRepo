#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int b_search(int* a, int val);

int main() {
	int* a = new int[20];

	for(int i = 0; i < 20; i++)
		*(a + i) = i;

	for(int i = 0; i < 20; i++)
		cout << a[i] << " ";

	cout << endl;
	cout << "Enter value you want to find: ";
	int var = 0;
	cin >> var;
	cout <<	b_search(a, var) << endl;

	return 0;
}

int b_search(int* a, int val) {
	int left = 0, rght = 19;
	int mid = (left + rght)/2;

	while(a[mid] != val)
	{
		if(val >= mid)
			left = mid;
		else
			rght = mid;
		mid = (left + rght)/2;
	}

	return mid;
}
