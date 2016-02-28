// EthiopianMultiplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void halveIt(int* x);
void doubleIt(int* x);
bool isEven(int x);

int ethiopianMulti(int a, int b)
{
	int result = 0;
	while (a >= 1)
	{
		if (!isEven(a))
		{
			result += b;
		}
		halveIt(&a);
		doubleIt(&b);
	}
	return result;
}

int main()
{
	cout << "23 x 45 = " << ethiopianMulti(23, 45) << endl;
}

