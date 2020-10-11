#include"integer.h"

namespace faustWrap
{
	Integer::Integer() : MetaType()
	{
	}

	Integer::Integer(int primInitVal) : MetaType(primInitVal)
	{
	}

	Integer::Integer(Integer& complInitVal) : MetaType(complInitVal)
	{
	}

	Integer& operator+(Integer& lftTerm, Integer& rghtTerm)
	{
		lftTerm.var = lftTerm.var + rghtTerm.var;

		return lftTerm;
	}

	Integer& operator-(Integer& lftTerm, Integer& rghtTerm)
	{
		lftTerm.var = lftTerm.var - rghtTerm.var;

		return lftTerm;
	}

	Integer& operator*(Integer& lftTerm, Integer& rghtTerm)
	{
		lftTerm.var = lftTerm.var * rghtTerm.var;

		return lftTerm;
	}

	Integer& operator/(Integer& lftTerm, Integer& rghtTerm)
	{
		lftTerm.var = lftTerm.var / rghtTerm.var;

		return lftTerm;
	}

	ostream& operator<<(ostream& outStream, Integer& outValue)
	{
		outStream << outValue.var;

		return outStream;
	}

	istream& operator>>(istream& inStream, Integer& inValue)
	{
		inStream >> inValue.var;

		return inStream;
	}
}
