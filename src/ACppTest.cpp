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

using namespace std;



int main()
{
	cout << "test " << endl;



	currency g,h(plu,3,50),i,j;
	g.setValue(minu,2,25);
	i.setValue(-6.45);
	j = h+g;
	h.output();
	cout<<"+";
	g.output();
	cout<<"=";
	j.output();
	cout<<endl;

	currency & t = i+=h;
	i.output();
	t.output();
	cout<<endl<<"i P:"<<&i<<endl;
	cout<<"t p:"<<&t<<endl;

	cout<<t<<endl;

	return 0;
}

