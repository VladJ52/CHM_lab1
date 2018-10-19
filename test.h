#pragma once
#include <math.h>

using namespace std;

double f1(double x, double u0); // точное решение

double f3(double x, double vi); // численное решение

double RKtest(double x, double vi, double h); // RK-test

double f2(double x, double vi); // ф-ия на вывод

double step_control(double h, double e, double vi, double v2i);

double RKfirst(double x, double vi, double h); // RK-first

double f4(double x, double vi);