#ifndef BOOLEAN_H
#define BOOLEAN_H

#include"metaType.h"
#include<iostream>
using std::ostream;
using std::istream;
using namespace faustWrap;

namespace faustWrap
{
	class Boolean : public MetaType<bool>
	{
		public:
			Boolean();
			Boolean(bool initValue);
			Boolean(Boolean& initValue);
			friend Boolean& operator+(Boolean& lftTerm, Boolean& rghtTerm);
			friend Boolean& operator-(Boolean& lftTerm, Boolean& rghtTerm);
			friend Boolean& operator*(Boolean& lftTerm, Boolean& rghtTerm);
			friend Boolean& operator/(Boolean& lftTerm, Boolean& rghtTerm);
			friend ostream& operator<<(ostream& outStream, Boolean& outVal);
			friend istream& operator>>(istream& inStream, Boolean& inVal);
	};
}

#endif //BOOLEAN_H
