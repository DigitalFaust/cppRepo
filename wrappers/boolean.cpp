#include"boolean.h"

namespace faustWrap
{
	Boolean::Boolean() : MetaType()
	{
	}

	Boolean::Boolean(bool initValue) : MetaType(initValue)
	{
	}

	Boolean::Boolean(Boolean& initValue) : MetaType(initValue)
	{
	}

	Boolean& operator+(Boolean& lftTerm, Boolean& rghtTerm)
	{
		lftTerm += rghtTerm;

		return lftTerm;
	}

	Boolean& operator-(Boolean& lftTerm, Boolean& rghtTerm)
	{
		lftTerm -= rghtTerm;

		return lftTerm;
	}

	Boolean& operator*(Boolean& lftTerm, Boolean& rghtTerm)
	{
		lftTerm *= rghtTerm;

		return lftTerm;
	}

	Boolean& operator/(Boolean& lftTerm, Boolean& rghtTerm)
	{
		lftTerm /= rghtTerm;

		return rghtTerm;
	}

	ostream& operator<<(ostream& outStream, Boolean& outVal)
	{
		outStream << outVal.var;

		return outStream;
	}

	istream& operator>>(istream& inStream, Boolean& inVal)
	{
		inStream >> inVal.var;

		return inStream;
	}
}
