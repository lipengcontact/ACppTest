/*
 * IllegalParameterValue.cpp
 *
 *  Created on: 2018年6月27日
 *      Author: Administrator
 */

#include "IllegalParameterValue.h"

namespace std
{



IllegalParameterValue::IllegalParameterValue(const char* mes)
{
	message = mes;
}

IllegalParameterValue::~IllegalParameterValue()
{
	// TODO Auto-generated destructor stub
}

void IllegalParameterValue::outPutMessage() const
{
	cout<<message<<endl;
}

} /* namespace std */
