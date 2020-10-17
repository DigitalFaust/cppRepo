#ifndef DECIMAL_H
#define DECIMAL_H

#include"metaType.h"
using namespace faustWrap;

namespace faustWrap
{
	template<typename T>
	class Decimal : public MetaType<T>
	{
		public:
			Decimal();
			Decimal(T initValue);
			Decimal(Decimal& initValue);
			Decimal& operator++();
			Decimal& operator--();
			Decimal& operator++(int val);
			Decimal& operator--(int val);
	};

	template<typename T>
	Decimal<T>::Decimal() : MetaType<T>()
	{
	}

	template<typename T>
	Decimal<T>::Decimal(T initValue) : MetaType<T>(initValue)
	{
	}

	template<typename T>
	Decimal<T>::Decimal(Decimal& initValue) : MetaType<T>(initValue)
	{
	}

	template<typename T>
	Decimal<T>& Decimal<T>::operator++()
	{
		this->var += 1;

		return *this;
	}
	
	template<typename T>
	Decimal<T>& Decimal<T>::operator--()
	{
		this->var -= 1;

		return *this;
	}

	template<typename T>
	Decimal<T>& Decimal<T>::operator++(int val)
	{
		this->var += 1;

		return *this;
	}

	template<typename T>
	Decimal<T>& Decimal<T>::operator--(int val)
	{
		this->var -= 1;

		return *this;
	}

}

#endif //DECIMAL_H