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
	this->setValue(sign, dollars, cents);
}

currency::~currency()
{
	// TODO Auto-generated destructor stub
}

void currency::setValue(signType sign, unsigned long dollars,
		unsigned int cents)
{
	if (cents > 99)
		throw("cents can't more than 99");
	long value;
	value = dollars * 100 + cents;
	if (sign == minu)
		value = -value;

	amount = value;
}

void std::currency::setValue(double value)
{
	if (value < 0)
		amount = (long) (value - 0.001) * 100;
	else
		amount = (long) (value + 0.001) * 100;

}

unsigned int currency::getCents() const
{
	long value = amount;
	long dollars;
	int cents;

	if (value < 0)
		value = -value;
	dollars = (long) value / 100;
	cents = (int) (value - dollars * 100);
	return cents;
}

unsigned long currency::getDollars() const
{
	long value = amount;
	long dollars;

	if (value < 0)
		value = -value;
	dollars = (long) value / 100;
	return dollars;
}

signType currency::getSign() const
{
	signType sign = plu;
	if (amount < 0)
		sign = minu;
	return sign;
}

currency currency::liAdd(currency a) const
{
	currency cur;

	long value;
	value = this->amount + a.amount;
	cur.amount = value;

	return cur;
}

currency& currency::increment(const currency& a)
{

	*this = liAdd(a);
	return *this;
}

void std::currency::output() const
{
	long value = amount;
	long dollars;
	int cents;
	signType sign;

	if (value < 0)
	{
		value = -value;
		sign = minu;
	}
	dollars = (long) value / 100;
	cents = (int) (value - dollars * 100);

	if (sign == minu)
		cout << "-";
	cout << "$" << dollars << ".";
	if (cents < 10)
		cout << "0";
	cout << cents;

	//cout<<endl;
}

} /* namespace std */

