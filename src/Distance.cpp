/*
 * Distance.cpp
 *
 *  Created on: 2018年6月26日
 *      Author: Administrator
 */

#include "Distance.h"

namespace std
{

Distance::Distance()
{
	// TODO Auto-generated constructor stub
	this->feet = 0;
	this->inches = 0;
}

Distance::Distance(int feet, int inches)
{
	this->feet = feet;
	this->inches = inches;
}

Distance::~Distance()
{
	// TODO Auto-generated destructor stub
}

void Distance::display()
{
	cout << "F: " << feet << " I:" << inches <<endl;
}

} /* namespace std */
