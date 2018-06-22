/*
 * currency.h
 *
 *  Created on: 2018年6月15日
 *      Author: Administrator
 */

#ifndef CURRENCY_H_
#define CURRENCY_H_

#include <iostream>
#include"stdio.h"

namespace std
{

enum signType{plu,minu};

class currency
{
	friend ostream& operator<<(ostream& outPut,const currency& cur);
private:
	long amount;
public:
	currency(signType sign = plu,unsigned long dollars = 0,unsigned long cents = 0);
	virtual ~currency();

	void setValue(signType,unsigned long,unsigned int);
	void setValue(double value);

	unsigned int getCents() const;
	unsigned long getDollars() const;
	signType getSign() const;

	currency operator+(currency a) const;
	currency& operator+=(const currency& a);



	void output() const;
};



} /* namespace std */

#endif /* CURRENCY_H_ */
