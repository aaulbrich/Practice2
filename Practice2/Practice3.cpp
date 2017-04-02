#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	for (; ;) {
		char uinput;
		cin >> uinput;
		switch (uinput) {
		case 'y': cout << "You chose y or Y" << endl; break;
		case 'Y': cout << "You chose y or Y" << endl; break;
		case 'n': cout << "You chose n or N" << endl; break;
		case 'N': cout << "You chose n or N" << endl; break;
		default: cout << "You didn't choose a valid option" << endl;
		}
	}
}