#include"floating.h"

namespace faustWrap
{
	Floating::Floating() : Decimal()
	{
	}

	Floating::Floating(float initValue) : Decimal(initValue)
	{
	}

	Floating::Floating(Floating& initValue) : Decimal(initValue)
	{
	}

	Floating& operator+(Floating& lftTerm, Floating& rghtTerm)
	{
		lftTerm += rghtTerm;

		return lftTerm;
	}

	Floating& operator-(Floating& lftTerm, Floating& rghtTerm)
	{
		lftTerm -= rghtTerm;

		return lftTerm;
	}

	Floating& operator*(Floating& lftTerm, Floating& rghtTerm)
	{
		lftTerm *= rghtTerm;

		return lftTerm;
	}

	Floating& operator/(Floating& lftTerm, Floating& rghtTerm)
	{
		lftTerm /= rghtTerm;

		return rghtTerm;
	}

	ostream& operator<<(ostream& outStream, Floating& outVal)
	{
		outStream << outVal.var;

		return outStream;
	}

	istream& operator>>(istream& inStream, Floating& inVal)
	{
		inStream >> inVal.var;

		return inStream;
	}
}
