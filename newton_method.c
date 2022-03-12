#include <stdio.h>
double f(double x, int a, int b, int c, int d) {
    double f_ori = a * x * x * x + b * x * x + c * x + d;
    double f_deri = 3.0 * a * x * x + 2.0 * b * x + c;
    if (f_ori / f_deri < 0.001)
        return x;
    else
        return f(x - f_ori / f_deri, a, b, c, d);
}
