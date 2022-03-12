#include <stdio.h>
int FindMinElement(double dArray[], int nCount){
    int n = dArray[0], record = 0;
    for(int i = 0;i < nCount - 1;i ++){
        if(n > dArray[i + 1]){
            n = dArray[i + 1];
            record = i + 1;
        }
    }
    return record;
}
int FindMaxElement(double dArray[], int nCount){
    int n = dArray[0], record = 0;
    for(int i = 0;i < nCount;i ++){
        if(n < dArray[i + 1]){
            n = dArray[i + 1];
            record = i + 1;
        }
    }
    return record;
}
