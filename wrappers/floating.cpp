#include"floating.h"

namespace faustWrap
{
	Floating::Floating() : MetaType()
	{
	}

	Floating::Floating(float initValue) : MetaType(initValue)
	{
	}

	Floating::Floating(Floating& initValue) : MetaType(initValue)
	{
	}

	Floating& operator+(Floating& lftTerm, const Floating& rghtTerm)
	{
		lftTerm += rghtTerm;

		return lftTerm;
	}

	Floating& operator-(Floating& lftTerm, const Floating& rghtTerm)
	{
		lftTerm -= rghtTerm;

		return lftTerm;
	}

	Floating& operator*(Floating& lftTerm, const Floating& rghtTerm)
	{
		lftTerm *= rghtTerm;

		return lftTerm;
	}

	Floating& operator/(Floating& lftTerm, const Floating& rghtTerm)
	{
		lftTerm /= rghtTerm;

		return rghtTerm;
	}

	ostream& operator<<(ostream& outStream, const Floating& outVal)
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
