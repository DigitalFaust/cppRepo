#ifndef DOUBLE_H
#define DOUBLE_H

#include"metaType.h"
#include<iostream>
using std::ostream;
using std::istream;
using namespace faustWrap;

namespace faustWrap
{
	class Double : public MetaType<double>
	{
		public:
			Double();
			Double(float initValue);
			Double(Double& initValue);
			friend Double& operator+(Double& lftTerm, const Double& rghtTerm);
			friend Double& operator-(Double& lftTerm, const Double& rghtTerm);
			friend Double& operator*(Double& lftTerm, const Double& rghtTerm);
			friend Double& operator/(Double& lftTerm, const Double& rghtTerm);
			friend ostream& operator<<(ostream& outStream, const Double& outVal);
			friend istream& operator>>(istream& inStream, Double& inVal);
	};
}

#endif //DOUBLE_H
