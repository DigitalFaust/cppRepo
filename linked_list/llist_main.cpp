#include<iostream>
#include"ld_list.h"
using std::cout;
using namespace faustSpace;

int main()
{
	SList firstSample;
	SList secondSample(5);
	
	cout << "firstSample.outputList(): ";
	firstSample.outputList();
	cout << "secondSample.outputList(): ";
	secondSample.outputList(); 

	firstSample.addElem(12);
	cout << "firstSample.addElem(12):  ";
	firstSample.outputList();

	secondSample.addElem(13, 2);
	cout << "secondSample.addElem(13, 2): ";
	secondSample.outputList();

	firstSample.replElem(20, 6);
	cout << "firstSample.replElem(20, 6): ";
	firstSample.outputList(); 

	secondSample.delElem();
	cout << "secondSample.delElem(): ";
	secondSample.outputList();

	firstSample.delElem(8);
	cout << "firstSample.delElem(8): ";
	firstSample.outputList(); 

	secondSample = firstSample;
	cout << "secondSample = firstSample: ";
	secondSample.outputList(); 

	SList thirdSample(firstSample);
	cout << "thirdSample(firstSample): ";
	thirdSample.outputList();
	
	cout << "Enter value to add that in the end of list: ";
	std::cin >> thirdSample;
	cout << thirdSample << std::endl;

	return 0;
}
