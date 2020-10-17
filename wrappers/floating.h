#ifndef FLOATING_H
#define FLOATING_H

#include"decimal.h"
#include<iostream>
using std::ostream;
using std::istream;
using namespace faustWrap;

namespace faustWrap
{
	class Floating : public Decimal<float>
	{
		public:
			Floating();
			Floating(float initValue);
			Floating(Floating& initValue);
			friend Floating& operator+(Floating& lftTerm, Floating& rghtTerm);
			friend Floating& operator-(Floating& lftTerm, Floating& rghtTerm);
			friend Floating& operator*(Floating& lftTerm, Floating& rghtTerm);
			friend Floating& operator/(Floating& lftTerm, Floating& rghtTerm);
			friend ostream& operator<<(ostream& outStream, Floating& outVal);
			friend istream& operator>>(istream& inStream, Floating& inVal);
	};
}

#endif //FLOATING_H
