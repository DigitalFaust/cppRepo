#ifndef FLOATING_H
#define FLOATING_H

#include"metaType.h"
#include<iostream>
using std::ostream;
using std::istream;
using namespace faustWrap;

namespace faustWrap
{
	class Floating : public MetaType<float>
	{
		public:
			Floating();
			Floating(float initValue);
			Floating(Floating& initValue);
			friend Floating& operator+(Floating& lftTerm, const Floating& rghtTerm);
			friend Floating& operator-(Floating& lftTerm, const Floating& rghtTerm);
			friend Floating& operator*(Floating& lftTerm, const Floating& rghtTerm);
			friend Floating& operator/(Floating& lftTerm, const Floating& rghtTerm);
			friend ostream& operator<<(ostream& outStream, const Floating& outVal);
			friend istream& operator>>(istream& inStream, Floating& inVal);
	};
}

#endif //FLOATING_H
