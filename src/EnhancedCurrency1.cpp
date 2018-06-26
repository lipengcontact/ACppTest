/*
 * EnhancedCurrency1.cpp
 *
 *  Created on: 2018年6月26日
 *      Author: Administrator
 */

#include "EnhancedCurrency1.h"

namespace std
{

EnhancedCurrency1::EnhancedCurrency1(signType sign, unsigned long dollars,
		unsigned int cents) :
		currency(sign, dollars, cents)
{
}

EnhancedCurrency1::~EnhancedCurrency1()
{
	// TODO Auto-generated destructor stub
}

EnhancedCurrency1 EnhancedCurrency1::operator -(const EnhancedCurrency1& x)
{
	EnhancedCurrency1 cur;
	cur.amount = amount - x.amount;
	return cur;
}

EnhancedCurrency1 EnhancedCurrency1::operator %(double x)
{
	EnhancedCurrency1 cur;
	cur.amount = (long) (amount * (x / 100));
	return cur;
}

EnhancedCurrency1 EnhancedCurrency1::operator *(double x)
{
	EnhancedCurrency1 cur;
	cur.amount = (long) (amount * x);
	return cur;
}

EnhancedCurrency1 EnhancedCurrency1::operator /(double x)
{
	EnhancedCurrency1 cur;
	cur.amount = (long) (amount / x);
	return cur;
}

} /* namespace std */
