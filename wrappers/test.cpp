#include"boolean.h"
#include"double.h"
#include"floating.h"
#include"integer.h"
#include<unistd.h>
using std::cin;
using std::cout;
using std::endl;
using namespace faustWrap;

int main()
{
	int delay = 3;
	cout << "--------------Checking constructors-------------------------------------------\n";

	Integer firstSample;
	Integer secondSample(3);
	Integer thirdSample(secondSample); 
/*
	Floating firstSample;
	Floating secondSample(5/(float)3);
	Floating thirdSample(secondSample); 
*/
/*	Double firstSample;
	Double secondSample(5/(double)3);
	Double thirdSample(secondSample);*/
/*
	Boolean firstSample;
	Boolean secondSample(1);
	Boolean thirdSample(secondSample);	 
*/
	sleep(delay);
	cout << "firstSample = " << firstSample << endl;
	cout << "secondSample = " << secondSample << endl;
	cout << "thirdSample = " << thirdSample << endl;
	cout << endl;

	cout << "--------------Checking assignement and short arithmetic operators-------------\n";
	
	sleep(delay);
	cout << "--------------Short addition---------------\n";
	firstSample += secondSample;
	cout << "firstSample = " << firstSample << endl;
	
	sleep(delay);
	cout << "--------------Short multiplication---------\n";
	firstSample *= secondSample;
	cout << "firstSample = " << firstSample << endl;

	sleep(delay);
	cout << "--------------Short subtraction------------\n";
	firstSample -= secondSample;
	cout << "firstSample = " << firstSample << endl;

	sleep(delay);
	cout << "--------------Short division---------------\n";
	firstSample /= secondSample;
	cout << "firstSample = " << firstSample << endl;

	sleep(delay);
	cout << "---------------Assignement-----------------\n";
	thirdSample = firstSample;
	cout << "thirdSample = " << thirdSample << endl;
	cout << endl;

	cout << "---------------Checking arithmetic operators----------------------------------\n";
	
	sleep(delay);
	cout << "---------------Addition--------------------\n";
	firstSample = thirdSample + secondSample;
	cout << "firstSample = " << firstSample << endl;

	sleep(delay);
	cout << "---------------Multiplication--------------\n";
	firstSample = thirdSample * secondSample;
	cout << "firstSample = " << firstSample << endl;

	sleep(delay);
	cout << "---------------Subtraction-----------------\n";
	firstSample = firstSample - secondSample;
	cout << "firstSample = " << firstSample << endl;

	sleep(delay);
	cout << "---------------Division--------------------\n";
	firstSample = firstSample / secondSample;
	cout << "firstSample = " << firstSample << endl;
	cout << endl;

	cout << "---------------Checking increment and decrement----------------------\n";
	
	sleep(delay);
	cout << "---------------Post-fix increment----------\n";
	cout << "firstSample = " << firstSample << endl;
	firstSample++;
	cout << "firstSample = " << firstSample << endl;

	sleep(delay);
	cout << "---------------Post-fix decrement----------\n";
	cout << "secondSample = " << secondSample << endl;
	secondSample--;
	cout << "secondSample = " << secondSample << endl;
	cout << endl;

	sleep(delay);
	cout << "---------------Pre-fix increment-----------\n";
	cout << "firstSample = " << firstSample << endl;
	++firstSample;
	cout << "firstSample = " << firstSample << endl;

	sleep(delay);
	cout << "---------------Pre-fix decrement-----------\n";
	cout << "secondSample = " << secondSample << endl;
	--secondSample;
	cout << "secondSample = " << secondSample << endl;
	cout << endl;

	cout << "---------------Checking input operator----------------------------------------\n";
	
	sleep(delay);
	cout << "Enter value: ";
	cin >> thirdSample;
	cout << "thirdSample = " << thirdSample << endl;
	cout << endl;

	sleep(delay);
	cout << "---------------Checking comparison operators----------------------------------\n";
	cout << "firstSample = " << firstSample << endl;
	cout << "secondSample = " << secondSample << endl;

	sleep(delay);
	cout << "---------------Checking > operator---------\n";
	if(firstSample > secondSample)
		cout << "firstSample is more than secondSample\n";
	else
		cout << "firstSample is not more than secondSample\n";
	
	sleep(delay);
	cout << "---------------Checking < operator---------\n";
	if(firstSample < secondSample)
		cout << "firstSample is less than secondSample\n";
	else
		cout << "firstSample is not less than secondSample\n";
	
	sleep(delay);
	cout << "---------------Checking == operator--------\n";
	if(firstSample == secondSample)
		cout << "firstSample is equal secondSample\n";
	else
		cout << "firstSample is not equal secondSample\n";
	
	sleep(delay);
	cout << "---------------Checking >= operator--------\n";
	if(firstSample >= secondSample)
		cout << "firstSample is more or equal secondSample\n";
	else
		cout << "firstSample is not more or equal secondSample\n";
	
	sleep(delay);
	cout << "---------------Checking <= operator--------\n";
	if(firstSample <= secondSample)
		cout << "firstSample is less or equal secondSample\n";
	else
		cout << "firstSample is not less or equal secondSample\n";
	
	sleep(delay);
	cout << "---------------Checking != operator--------\n";
	if(firstSample != secondSample)
		cout << "firstSample is not equal secondSample\n";
	else
		cout << "firstSample is equal secondSample\n";

	cout << "\nThat's all.Goodbye, world!\n";

	return 0;
}
