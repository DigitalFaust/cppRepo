#include"d_linked_list.h"
using namespace faustSpace;

int main()
{
	DList fSample;
	std::cout << "fSample: " << fSample << std::endl;

	DList sSample(6);
	std::cout << "sSample: " << sSample << std::endl;

	DList thSample(sSample);
	std::cout << "thSample: " << thSample << std::endl;

	thSample.delElem();
	std::cout << "thSample.delElem(): " << thSample << std::endl;

	fSample = thSample;
	std::cout << "fSample = thSample: " << fSample << std::endl;

	std::cout << "Please, enter some value to add that in the end of list: ";
	int var = 0;
	std::cin >> var;
	fSample.addElem(var);
	std::cout << "fSample.addElem(var): " << fSample << std::endl;
	
	std::cout << "Please, enter some another value to add that in the list: ";
	std::cin >> var;
	std::cout << "Please, enter position to put value to: ";
	int pos = 0;
	std::cin >> pos;
	fSample.addElem(var, pos);
	std::cout << "fSample.addElem(var, pos): " << fSample << std::endl;

	std::cout << "Please, enter position of deleting element: ";
	std::cin >> pos;
	fSample.delElem(pos);
	std::cout << "fSample.delElem(pos): " << fSample << std::endl;

	fSample.delRoot();
	std::cout << "fSample.delRoot(): " << fSample << std::endl; 
	
	std::cout << "fSample.revOutput(): ";
	fSample.revOutput();
	std::cout << std::endl; 
	
	fSample.exchange(sSample);
	std::cout << "fSample.exchange(sSample):\n";
	std::cout << "fSample: " << fSample << std::endl;
	std::cout << "sSample: " << sSample << std::endl;

	return 0;
}
