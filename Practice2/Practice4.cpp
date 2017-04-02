#include "stdafx.h"

using namespace std;

double avg(double arr[]) {
	double sum(0);
	double div;
	for (int n = 0; n < 10; n++) {
		sum += arr[n];
	}
	div = sum / 10;
	cout << div << endl;
	return div;
}

int main() {
	double aveg;
	double arr[10] = { 12, 26, 33, 46, 54, 62, 78, 86, 20, 10 };
	aveg = avg(arr);
	cout << "Press enter to continue...";
	cin >> aveg;
	return 0;
}