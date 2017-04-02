#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int base(1); // can be 0 as well
	int exponent; // can be positive, negative or 0

				  // the question arises: what is 0 to the power of 0?

	float temp = base; // temporary variable for storing b

	if (exponent == 0)
	{
		if (base == 0)
		{
			cout << "0 to the power of 0 is undefined!";
		}
		else
		{
			cout << 1; // nonzero to the power of 0 is 1
		}
	}
	else if (exponent > 0)
	{
		for (int k = 1; k < exponent; k++)
		{
			temp *= base;
		}
		cout << temp;
	}
	else
	{
		for (int k = 1; k < -exponent; k++)
		{ // now exponent is positive
			temp *= base;
		}
		cout << 1 / temp; // negative power is simply reciprocal of the positive power
	}
	return 0;
}