/*
 * EnhancedCurrency1.h
 *
 *  Created on: 2018年6月26日
 *      Author: Administrator
 */

#ifndef ENHANCEDCURRENCY1_H_
#define ENHANCEDCURRENCY1_H_

#include "currency.h"

namespace std
{

class EnhancedCurrency1: public currency
{
public:
	EnhancedCurrency1(signType sign = plu, unsigned long dollars = 0,
			unsigned int cents = 0);
	virtual ~EnhancedCurrency1();

	EnhancedCurrency1 operator-(const EnhancedCurrency1&x);
	EnhancedCurrency1 operator%(double x);
	EnhancedCurrency1 operator*(double x);
	EnhancedCurrency1 operator/(double x);

	friend istream& operator>>(istream& input, EnhancedCurrency1& x)
	{
		input >> x.amount;
		return input;
	}

	void operator=(int x);
	void operator=(double x);
};

} /* namespace std */

#endif /* ENHANCEDCURRENCY1_H_ */
