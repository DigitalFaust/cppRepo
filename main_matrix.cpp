#include"matrix.h"
using namespace kata;

int main()
{
	Matrix firstSample, secondSample(4), thirdSample(3, 3);

	cin >> thirdSample;

	Matrix fourthSample(thirdSample);

	cout << fourthSample << endl;
	
	secondSample = fourthSample;

	cout << secondSample;

	firstSample = secondSample + thirdSample;

	cout << endl;

	cout << firstSample << endl;

	firstSample = secondSample * thirdSample;

	cout << firstSample << endl;
	
	cout << "Enter number of rows: ";
	int rows;
	cin >> rows;
	cout << "Enter number of columns: ";
	int columns;
	cin >> columns;

	firstSample.setSize(rows, columns);

	cin >> firstSample;

	return 0;
}
