/*
 * IllegalParameterValue.h
 *
 *  Created on: 2018年6月27日
 *      Author: Administrator
 */

#ifndef ILLEGALPARAMETERVALUE_H_
#define ILLEGALPARAMETERVALUE_H_

#include<string>
#include<iostream>
#include<cstring>

namespace std
{

class IllegalParameterValue
{
private:
	string message;
public:
	IllegalParameterValue(const char* mes);
	virtual ~IllegalParameterValue();

	void outPutMessage() const;
};

} /* namespace std */

#endif /* ILLEGALPARAMETERVALUE_H_ */
