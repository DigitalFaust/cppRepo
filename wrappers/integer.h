#ifndef INTEGER_H
#define INTEGER_H

#include"metaType.h"
#include<iostream>
using std::ostream;
using std::istream;
using namespace faustWrap;

namespace faustWrap
{
	class Integer : public MetaType<int>
	{
		public:
			Integer();
			Integer(int initVal);
			Integer(Integer& initVal);
			friend Integer& operator+(Integer& lftTerm, const Integer& rghtTerm);
			friend Integer& operator-(Integer& lftTerm, const Integer& rghtTerm);
			friend Integer& operator*(Integer& lftTerm, const Integer& rghtTerm);
			friend Integer& operator/(Integer& lftTerm, const Integer& rghtTerm);		
			friend ostream& operator<<(ostream& outStream, const Integer& outValue);
			friend istream& operator>>(istream& inStream, Integer& inValue);
	};
}

#endif //INTEGER_H
