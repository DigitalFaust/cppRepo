#ifndef METATYPE_H
#define METATYPE_H

namespace faustWrap
{
	template<typename T>
	class MetaType
	{
		public:
			MetaType();
			MetaType(T initValue);
			MetaType(MetaType& initValue);
			MetaType& operator=(MetaType& rghtSide);
			MetaType& operator+=(MetaType& rghtSide);
			MetaType& operator-=(MetaType& rghtSide);
			MetaType& operator*=(MetaType& rghtSide);
			MetaType& operator/=(MetaType& rghtSide);			
			MetaType& operator++();
			MetaType& operator--();
			MetaType& operator++(int val);
			MetaType& operator--(int val);
			bool operator==(MetaType& rghtSide);
			bool operator>(MetaType& rghtSide);
			bool operator<(MetaType& rghtSide);
			bool operator>=(MetaType& rghtSide);
			bool operator<=(MetaType& rghtSide);
			bool operator!=(MetaType& rghtSide);
		protected:
			T var;
	};

	template<typename T>
	MetaType<T>::MetaType()
	{
		this->var = 0;
	}

	template<typename T>
	MetaType<T>::MetaType(T initValue)
	{
		this->var = initValue;
	}

	template<typename T>
	MetaType<T>::MetaType(MetaType& initValue) : MetaType(initValue.var)
	{
	}

	template<typename T>
	MetaType<T>& MetaType<T>::operator=(MetaType<T>& rghtSide)
	{
		var = rghtSide.var;

		return *this;
	}

	template<typename T>
	MetaType<T>& MetaType<T>::operator+=(MetaType<T>& rghtSide)
	{
		var += rghtSide.var;

		return *this;
	}

	template<typename T>
	MetaType<T>& MetaType<T>::operator-=(MetaType<T>& rghtSide)
	{
		var -= rghtSide.var;

		return *this;
	}

	template<typename T>
	MetaType<T>& MetaType<T>::operator*=(MetaType<T>& rghtSide)
	{
		var *= rghtSide.var;

		return *this;
	}

	template<typename T>
	MetaType<T>& MetaType<T>::operator/=(MetaType<T>& rghtSide)
	{
		var /= rghtSide.var;

		return *this;
	}

	template<typename T>
	MetaType<T>& MetaType<T>::operator++()
	{
		var += 1;

		return *this;
	}
	
	template<typename T>
	MetaType<T>& MetaType<T>::operator--()
	{
		var -= 1;

		return *this;
	}

	template<typename T>
	MetaType<T>& MetaType<T>::operator++(int val)
	{
		var += 1;

		return *this;
	}

	template<typename T>
	MetaType<T>& MetaType<T>::operator--(int val)
	{
		var -= 1;

		return *this;
	}

	template<typename T>
	bool MetaType<T>::operator==(MetaType<T>& rghtSide)
	{
		return var == rghtSide.var;
	}

	template<typename T>
	bool MetaType<T>::operator>(MetaType<T>& rghtSide)
	{
		return var > rghtSide.var;
	}

	template<typename T>
	bool MetaType<T>::operator<(MetaType<T>& rghtSide)
	{
		return var > rghtSide.var;
	}

	template<typename T>
	bool MetaType<T>::operator<=(MetaType<T>& rghtSide)
	{
		return var <= rghtSide.var;
	}

	template<typename T>
	bool MetaType<T>::operator>=(MetaType<T>& rghtSide)
	{
		return var >= rghtSide.var;
	}

	template<typename T>
	bool MetaType<T>::operator!=(MetaType<T>& rghtSide)
	{
		return  var != rghtSide.var;
	}

}

#endif //METATYPE_H