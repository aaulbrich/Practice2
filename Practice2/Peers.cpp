#include "stdafx.h"

using namespace std;

double avg(int m[7])
{
	int size = sizeof(int[7]) / sizeof(int);

	double average{};
	for (int i = 0; i < size; ++i)
	{
		average += m[i];
	}
	return average / size;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n[7] = { 2,3,5,5,3,7,4 };
	double average = avg(n);
	std::cout << average << std::endl;

	return 0;
}