#include "stdafx.h"

using namespace std;

double pow(double base, double power) {
	double a(1);
	bool tf;
	bool pos = true;
	do {
		cout << "Enter a base number:";
		cin >> base;
		tf = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (tf);
	do {
		cout << "Enter the exponent number:";
		cin >> power;
		if (power < 0) {
			cout << "Enter value equal to or higher than zero" << endl;
			pos = false;
		}
		if (power >= 0) {
			pos = true;
		}
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (pos == false);
	if (power > 0) {
		for (int t = 0; t < power; t++) {
			a *= base;
		}
		cout << base << " to the power of " << power << " is " << a << endl;
	}
	else if (power == 0) {
		cout << '1' << endl;
	}
	return a;
}

double tri(double opp, double hyp) {
	bool tf;
	do {
		cout << "Enter a value for opposite: ";
		cin >> opp;
		tf = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (tf);
	do {
		cout << "Enter a value for hypotenuse: ";
		cin >> hyp;
		tf = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (tf);
	double sin = opp / hyp;
	cout << "The sine is " << sin << endl;
	return sin;
}



int main()
{
	for (; ;) {
		double base(0);
		double power(0);
		double opp(0);
		double hyp(0);
		double ret;
		string choice;
		cout << "Choose a function. Type pow or tri: ";
		cin >> choice;
		if (choice == "pow") {
			ret = pow(base, power);
		}
		else if (choice == "tri") {
			ret = tri(opp, hyp);
		}
	}
}