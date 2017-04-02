#include "stdafx.h"
#include <iostream>
#include <limits>

using namespace std;

int main()
{
	for (; ; ) {
		double base(0);
		double power(0);
		double a(1);
		cout << "Enter a base number:" << endl;
		cin >> base;
		if (cin.fail()) {
			cout << "Enter a valid number" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '/n');
		}
		else if (cin.good()) {
			cout << "Enter the exponent number:" << endl;
			cin >> power;
			if (power > 0) {
				for (int t = 0; t < power; t++) {
					a *= base;
				}
				cout << a << endl;
			}
			else if (power < 0) {
				for (int t = 0; t > power; t--) {
					a /= base;
				}
				cout << a << endl;
				cin.sync();
				cin.clear();
			}
			else if ((base || power) == 0 || cin.fail()) {
				cout << "Enter a valid number" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '/n');
			}
		}
	}
	return 0;
}
