/*
 * EnhancedCurrency.cpp
 *
 *  Created on: 2018年6月25日
 *      Author: Administrator
 */

#include "EnhancedCurrency.h"

namespace std
{

EnhancedCurrency::EnhancedCurrency(signType sign, unsigned long dollars, unsigned long cents):currency(sign,dollars,cents)
{
	// TODO Auto-generated constructor stub

}

EnhancedCurrency::~EnhancedCurrency()
{
	// TODO Auto-generated destructor stub
}

EnhancedCurrency::EnhancedCurrency(const EnhancedCurrency& x)
{
	cout<<"EnhancedCurrency copy"<<endl;
	amount = x.amount;
}

void EnhancedCurrency::input()
{
	double value;
	cout<<"please input an double"<<endl;
	cin>>value;
	this->setValue(value);
}

EnhancedCurrency EnhancedCurrency::subtract(const EnhancedCurrency& x) const
{
	EnhancedCurrency cur;
	cur.amount = amount - x.amount;
	return cur;
}

EnhancedCurrency EnhancedCurrency::percent(double x) const
{
	EnhancedCurrency cur;
	cur.amount = (long)(amount * (x/100));
	return cur;
}

EnhancedCurrency EnhancedCurrency::multiply(double x) const
{
	EnhancedCurrency cur;
	cur.amount = (long)(amount*x);
	return cur;
}

EnhancedCurrency EnhancedCurrency::divide(double x) const
{
	EnhancedCurrency cur;
	cur.amount = (long)(amount / x);
	return cur;
}

} /* namespace std */


