/*
 * Zline.h
 *
 *  Created on: 2018年6月25日
 *      Author: Administrator
 */

#ifndef ZLINE_H_
#define ZLINE_H_

#include<iostream>

namespace std
{

class Zline
{
private:
	unsigned int length;
public:
	Zline(unsigned int length=0);//构造函数
	//Zline();
	virtual ~Zline();
	Zline(const Zline& line);//拷贝函数

	unsigned int getLength() const;
	void setLength(unsigned int length);
};

} /* namespace std */

#endif /* ZLINE_H_ */
