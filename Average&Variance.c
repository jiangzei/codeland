#include <stdio.h>
#include <math.h>
double Average(double dArray[], int nCount){
    int sum = 0;double average;
    for(int i = 0;i < nCount;i ++){
        sum += dArray[i];
    }
    average = (double)sum / (double)nCount;
    return average;
}
double Variance(double dArray[], int nCount){
    int sum = 0;double average, variance, sqr_sum = 0;
    for(int i = 0;i < nCount;i ++){
        sum += dArray[i];
    }
    average = (double)sum / (double)nCount;
    for(int j = 0;j < nCount;j ++){
        sqr_sum += pow((double)((double)dArray[j] - average), 2.0);
    }
    variance = sqr_sum / (double)nCount;
    return variance;
}
