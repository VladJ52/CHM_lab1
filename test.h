#pragma once
#include <math.h>

using namespace std;

double f1(double x, double u0); // ������ �������

double f3(double x, double vi); // ��������� �������

double RKtest(double x, double vi, double h); // RK-test

double f2(double x, double vi); // �-�� �� �����

double step_control(double h, double e, double vi, double v2i);

double RKfirst(double x, double vi, double h); // RK-first

double f4(double x, double vi);

double f5_1(double vi); // ������� ������ �������� ������ 1

double f5_2(double a, double vi); // ������� ������ �������� ������ 2

double f5_3(double a, double v1, double v2);

double RKsecond1(double vi, double h);

double RKsecond2(double a, double vi, double h);

double RKfase1(double a, double vi1, double vi2, double h);