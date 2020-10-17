#ifndef INTEGER_H
#define INTEGER_H

#include"decimal.h"
#include<iostream>
using std::ostream;
using std::istream;
using namespace faustWrap;

namespace faustWrap
{
	class Integer : public Decimal<int>
	{
		public:
			Integer();
			Integer(int initVal);
			Integer(Integer& initVal);
			friend Integer& operator+(Integer& lftTerm, Integer& rghtTerm);
			friend Integer& operator-(Integer& lftTerm, Integer& rghtTerm);
			friend Integer& operator*(Integer& lftTerm, Integer& rghtTerm);
			friend Integer& operator/(Integer& lftTerm, Integer& rghtTerm);		
			friend ostream& operator<<(ostream& outStream, Integer& outValue);
			friend istream& operator>>(istream& inStream, Integer& inValue);
	};
}

#endif //INTEGER_H
