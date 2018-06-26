/*
 * EnhancedCurrency.h
 *
 *  Created on: 2018年6月25日
 *      Author: Administrator
 */

#ifndef ENHANCEDCURRENCY_H_
#define ENHANCEDCURRENCY_H_

#include "currency.h"

namespace std
{

class EnhancedCurrency: public currency
{
public:
	EnhancedCurrency(signType sign=plu, unsigned long dollars=0, unsigned long cents=0);
	virtual ~EnhancedCurrency();
	EnhancedCurrency(const EnhancedCurrency& x);

	void input();
	EnhancedCurrency subtract(const EnhancedCurrency& x) const;
	EnhancedCurrency percent(double x) const;
	EnhancedCurrency multiply(double x) const;
	EnhancedCurrency divide(double x) const;
};

} /* namespace std */

#endif /* ENHANCEDCURRENCY_H_ */
