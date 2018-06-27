//============================================================================
// Name        : ACppTest.cpp
// Author      : LP
// Version     :
// Copyright   : 2020 daxiang all rights
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include<string>

#include "currency.h"
#include "EnhancedCurrency.h"
#include "EnhancedCurrency1.h"

#include "Zline.h"
#include "Distance.h"

using namespace std;


void display(Zline line)
{
	cout<<"display:"<<line.getLength()<<endl;
}

void display(EnhancedCurrency cur)
{
	cout<<"display enhanceCurrency"<<endl;
}

int main()
{
	cout << "test " << endl;

	EnhancedCurrency1 cur;cout<<"old p:"<<&cur<<endl;
	cur=12345;
	cur = 530.0290;
	cout<<cur<<endl;
	cout<<"new p:"<<&cur<<endl;




	return 0;
}

