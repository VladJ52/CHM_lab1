#include "test.h"

double f1(double x, double u0)
{
	return exp((-0.5)*x)*u0;
}

double f3(double x, double vi)
{
	return (-0.5)*vi;
}

double RKtest(double x, double vi, double h)
{
	double k1, k2, k3, k4;
	k1 = f3(x, vi);
	k2 = f3(x + h / 2, vi + h / 2 * k1);
	k3 = f3(x + h / 2, vi + h / 2 * k2);
	k4 = f3(x + h, vi + h * k3);
	return vi + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}

double f2(double x, double vi)
{
	return vi;
}

double step_control(double h, double e, double vi, double v2i)
{
	double s = (vi - v2i) / 15;
	if (fabs(s) > e)
		return h / 2;
	if (fabs(s) < (e / 32))
		return 2 * h;
	return h;
}

double RKfirst(double x, double vi, double h)
{
	double k1, k2, k3, k4;
	k1 = f4(x, vi);
	k2 = f4(x + h / 2, vi + h / 2 * k1);
	k3 = f4(x + h / 2, vi + h / 2 * k2);
	k4 = f4(x + h, vi + h * k3);
	return vi + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}

double f4(double x, double vi)
{
	return (1 / (1 + x * x*x*x))*vi*vi + vi - vi * vi*vi*sin(10 * x);
}

double f5_1(double vi)
{
	return vi;
}

double f5_2(double a, double vi)
{
	return (-a)*sin(vi);
}

double RKsecond1(double vi, double h)
{
	double k1, k2, k3, k4;
	k1 = f5_1(vi);
	k2 = f5_1(vi + h / 2 * k1);
	k3 = f5_1(vi + h / 2 * k2);
	k4 = f5_1(vi + h * k3);
	return vi + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}

double RKsecond2(double a, double vi, double h)
{
	double k1, k2, k3, k4;
	k1 = f5_2(a, vi);
	k2 = f5_2(a, vi + h / 2 * k1);
	k3 = f5_2(a, vi + h / 2 * k2);
	k4 = f5_2(a, vi + h * k3);
	return vi + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}
double f5_3(double a, double v1, double v2)
{
	return f5_1(v1) / f5_2(a, v2);
}
double RKfase1(double a, double vi1, double vi2, double h)
{
	double k1, k2, k3, k4;
	k1 = f5_3(a, vi1, vi2);
	k2 = f5_3(a, vi1 + h / 2 * k1, vi2 + h / 2 * k1);
	k3 = f5_3(a, vi1 + h / 2 * k2, vi2 + h / 2 * k2);
	k4 = f5_3(a, vi1 + h * k3, vi2 + h * k3);
	return vi1 + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4), vi2 + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}