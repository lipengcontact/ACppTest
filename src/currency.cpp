/*
 * currency.cpp
 *
 *  Created on: 2018年6月15日
 *      Author: Administrator
 */

#include "currency.h"

namespace std
{

ostream& operator<<(ostream& outPut, const currency& cur)
{
	long dollars = cur.getDollars();
	int cents = cur.getCents();
	signType sign = cur.getSign();

	if (sign == minu)
		outPut << "-";
	cout << "$" << dollars << ".";
	if (cents < 10)
		outPut << "0";
	outPut << cents;

	return outPut;
}

currency::currency(signType sign, unsigned long dollars, unsigned long cents)
{
	cout<<"currency 构造函数"<<endl;
	this->setValue(sign, dollars, cents);
}

currency::currency()
{
	cout<<"构造:"<<"no value"<<endl;
	this->setValue(plu,0,0);
}

currency::~currency()
{
	// TODO Auto-generated destructor stub
}

std::currency::currency(const currency& x)
{
	cout<<"currency copy"<<endl;
	amount = x.amount;
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
		amount = (long) ((value - 0.001) * 100);
	else
		amount = (long) ((value + 0.001) * 100);

}

unsigned int currency::getCents() const
{
	long value = amount;
	long dollars = getDollars();
	int cents;

	if (value < 0)
		value = -value;
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



currency currency::operator +(currency a) const
{
	currency cur;

	long value;
	value = this->amount + a.amount;
	cur.amount = value;

	return cur;
}

currency& currency::operator+=(const currency& a)
{

	//*this = liAdd(a);
	this->amount += a.amount;
	return *this;
}

void std::currency::output() const
{
	long dollars = getDollars();
	int cents = getCents();
	signType sign = getSign();

	if (sign == minu)
		cout << "-";
	cout << "$" << dollars << ".";
	if (cents < 10)
		cout << "0";
	cout << cents;

	//cout<<endl;
}

//void currency::setAmount(long amount)
//{
//	this->amount = amount;
//}
//
//long currency::getAmount() const
//{
//	return amount;
//}

} /* namespace std */


