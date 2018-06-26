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

	EnhancedCurrency1 cur;
	cin>>cur;
	cout<<cur<<endl;



	return 0;
}

