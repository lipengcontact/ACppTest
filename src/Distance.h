/*
 * Distance.h
 *
 *  Created on: 2018年6月26日
 *      Author: Administrator
 */

#ifndef DISTANCE_H_
#define DISTANCE_H_

#include <iostream>
namespace std
{

class Distance
{
private:
	int feet;
	int inches;
public:
	Distance();
	Distance(int feet, int inches);
	virtual ~Distance();

	void display();

	//拷贝构造函数
	Distance(const Distance& x)
	{
		cout << "拷贝" << endl;
		feet = x.feet;
		inches = x.inches;

	}

	// 重载负运算符（ - ）
	Distance operator-()
	{
		feet = -feet;
		inches = -inches;
		//Distance tem = Distance(feet, inches);cout<<"tem p:"<<&tem<<endl;

		return *this;
	}

	//
	friend istream &operator>>(istream &input, Distance &D)
	{
		input >> D.feet >> D.inches;
		return input;
	}

};

} /* namespace std */

#endif /* DISTANCE_H_ */
