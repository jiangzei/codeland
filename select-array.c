#include <stdio.h>
void select1(double a[], double b[], int n, double x){
    int count = 0;
    for(int i = 0;i < n;i ++){
        if(a[i] >= x){
            b[count] = a[i];
            count ++;
        }
    }
    for(int j = 0;j < count;j ++){
        printf("%.3lf%c", b[j], j == count - 1?'\n':' ');
    }
}
