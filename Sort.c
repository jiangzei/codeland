#include "head.h"
void sort(int nArray[], int n){
    int store, l;
    for(int b = 0;b < n - 1;b ++){
        for(l = 0;l < n - 1;l++){
            store = nArray[l];
            if(store < nArray[l + 1]){
                nArray[l] = nArray[l + 1];
                nArray[l + 1] = store;
            }
        }
        l = 0;
    }
}
