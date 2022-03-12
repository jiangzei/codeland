#include <stdio.h>
int Search(int nArray[], int n, int x){
    int min = 0, mid, max = n - 1;
    while(min <= max){
        mid = min + (max - min) / 2;
        if(nArray[mid] < x){
            min = mid + 1;
        }
        else if (nArray[mid] > x){
            max = mid - 1;
        }
        else
            return mid;
    }
    return -1;
}
