#include "test_func.h"
#include <iostream>

using namespace std;
const double MAX_COUNT = 20;

int main()
{
	double h, u0 = 1, k1, k2, k3, k4; // шаг, точное решение, числ реш, координата, доп коэфы.
	double *v;
	v = new double [MAX_COUNT];
	for (int i = 0; i < MAX_COUNT; i++)
		v[i] = 0;
	v[0] = u0;
	cout << "Vvedite shag" << endl;
	cin >> h;
	cout << endl;
	for (int i = 1; i < MAX_COUNT; i++)
	{
		k1 = myfunc(v[i - 1]);
		k2 = myfunc(v[i - 1] + (h / 2)*k1);
		k3 = myfunc(v[i - 1] + (h / 2)*k2);
		k4 = myfunc(v[i - 1] + h*k3);
		v[i] = v[i-1] + (h/6)*myfunc(k1+2*k2+2*k3+k4);

	}

	for (int i = 0; i < MAX_COUNT; i++)
	{
		cout << "v[" << i << "] = " << v[i] << "   ";
		cout << endl;
	}
	cout << "Global Error = " << abs(u0 - v[19]);
	return 0;
}