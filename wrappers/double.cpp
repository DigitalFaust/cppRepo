#include"double.h"

namespace faustWrap
{
	Double::Double() : MetaType()
	{
	}

	Double::Double(float initValue) : MetaType(initValue)
	{
	}

	Double::Double(Double& initValue) : MetaType(initValue)
	{
	}

	Double& operator+(Double& lftTerm, Double& rghtTerm)
	{
		lftTerm += rghtTerm;

		return lftTerm;
	}

	Double& operator-(Double& lftTerm, Double& rghtTerm)
	{
		lftTerm -= rghtTerm;

		return lftTerm;
	}

	Double& operator*(Double& lftTerm, Double& rghtTerm)
	{
		lftTerm *= rghtTerm;

		return lftTerm;
	}

	Double& operator/(Double& lftTerm, Double& rghtTerm)
	{
		lftTerm /= rghtTerm;

		return rghtTerm;
	}

	ostream& operator<<(ostream& outStream, Double& outVal)
	{
		outStream << outVal.var;

		return outStream;
	}

	istream& operator>>(istream& inStream, Double& inVal)
	{
		inStream >> inVal.var;

		return inStream;
	}
}
