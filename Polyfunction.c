#include <math.h>
double polyfunc(double dArray[], int item, double x){
    int n;
    double sum = 0.0;
    for(n = item - 1;n >= 0;n --){
        sum += pow(x,n) * dArray[n];
    }
    return sum;
}
