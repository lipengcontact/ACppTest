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
#include <exception>
#include <vector>
#include <iterator>
#include <algorithm>

#include "currency.h"
#include "EnhancedCurrency.h"
#include "EnhancedCurrency1.h"
#include "IllegalParameterValue.h"

#include "Zline.h"
#include "Distance.h"

using namespace std;

int abc(int a, int b, int c)
{
	if (a == 0)
	{
		throw currency(plu, 12, 34);
	}
	return a + b * c;
}

template<class T>
void permutations(vector<T> vec0, vector<T> vec1)
{
	if (0 == vec0.size())
	{
		copy(vec1.begin(), vec1.end(), ostream_iterator<T>(cout, " "));
		cout << endl;
	}

	for (unsigned int i = 0; i < vec0.size(); i++)
	{
		vec1.push_back(vec0[i]);
		vec0.erase(vec0.begin() + i);

		permutations(vec0, vec1);

		vec0.insert(vec0.begin() + i, vec1.back());
		vec1.pop_back();
	}
}

int main()
{
	cout << "test " << endl;

//	IllegalParameterValue val = IllegalParameterValue("afefs");
//	val.outPutMessage();

	char arr[] =
	{ 'a', 'b', 'c', 'd', 'd', 'f' };
	vector<char> vec(arr, arr + 3);
	vector<char> vec1;

	permutations(vec, vec1);

//	copy(vec.begin(),vec.end(),ostream_iterator<int>(cout," "));
//	cout<<endl;

	cout << "continue" << endl;
	return 0;
}

