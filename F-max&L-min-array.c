#include <stdio.h>
void action1(int dArray[], int n){
    int min = dArray[0], max = dArray[0], flag_min = 0, flag_max = 0;
    for(int i = 0;i < n;i ++){
        if(dArray[i] > max){
            max = dArray[i];
            flag_max = i;
        }
        if(dArray[i] < min){
            min = dArray[i];
            flag_min = i;
        }
    }
    dArray[flag_max] = dArray[9];dArray[9] = max;
    dArray[flag_min] = dArray[0];dArray[0] = min;
    for(int j = 0;j < n;j ++){
        printf("%d%c", dArray[j], j == n - 1?'\n':' ');
    }
}
