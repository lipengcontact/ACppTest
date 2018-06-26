/*
 * Zline.cpp
 *
 *  Created on: 2018年6月25日
 *      Author: Administrator
 */

#include "Zline.h"

namespace std
{





Zline::Zline(unsigned int length)
{
	cout<<"构造函数:"<<length<<endl;

	this->length = length;
}

//std::Zline::Zline()
//{
//	cout<<"构造函数:"<<"no value"<<endl;
//
//		this->length = 2;
//}

Zline::Zline(const Zline& line)
{
	cout<<"拷贝函数:"<<endl;
	this->length = line.length;
}



Zline::~Zline()
{
	// TODO Auto-generated destructor stub
	cout<<"析构函数:"<<length<<endl;
}

void Zline::setLength(unsigned int length)
{
	this->length = length;
}

unsigned int Zline::getLength() const
{
	return length;
}

} /* namespace std */


