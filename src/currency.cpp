/*
 * currency.cpp
 *
 *  Created on: 2018年6月15日
 *      Author: Administrator
 */

#include "currency.h"

namespace std
{

currency::currency(signType sign, unsigned long dollars, unsigned long cents)
{
	this->sign = sign;
	this->dollars = dollars;
	this->cents = cents;
}

currency::~currency()
{
	// TODO Auto-generated destructor stub
}


void currency::setValue(signType signType, unsigned long unsignedLongInt,
		unsigned int unsignedInt)
{
	this->sign = signType;
	this->dollars = unsignedLongInt;
	this->cents = unsignedInt;
}

void std::currency::setValue(double value)
{
	signType sign;
	unsigned long dollars;
	unsigned int cents;

	if (value >= 0)
	{
		sign = plu;
	}
	else
	{
		sign = minu;
		value = -value;
	}

	dollars = (long) value;
	cents = (int) ((value - dollars + 0.001) * 100);
	this->setValue(sign, dollars, cents);

}


unsigned int currency::getCents() const
{
	return cents;
}

unsigned long currency::getDollars() const
{
	return dollars;
}

signType currency::getSign() const
{
	return sign;
}


currency currency::liAdd(currency a) const
{
	currency cur;

	long a1, a2;
	long value;
	a1 = dollars * 100 + cents;
	if (sign == minu)
		a1 = -a1;
	a2 = a.dollars * 100 + a.cents;
	if (a.sign == minu)
		a2 = -a2;

	value = a1 + a2;
	if (value < 0)
	{
		cur.sign = minu;
		value = -value;
	}
	cur.dollars = value / 100;
	cur.cents = value - cur.dollars * 100;

	return cur;
}

currency& currency::increment(const currency& a)
{
	cout << "this:" << this << endl;
	*this = liAdd(a);

	return *this;
}


void std::currency::output() const
{
	if (sign == minu)
		cout << "-";
	cout << "$" << dollars << ".";
	if (cents < 10)
		cout << "0";
	cout << cents;

	//cout<<endl;
}

} /* namespace std */

