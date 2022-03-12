#include <stdio.h>
void action2(int *pInt, int n){
    int max = *pInt, min = *pInt, flag_max = 0, flag_min = 0;
    for(int i = 0;i < n;i ++){
        if(*(pInt + i) > max){
            max = *(pInt + i);
            flag_max = i;
        }
        if(*(pInt + i) < min){
            min = *(pInt + i);
            flag_min = i;
        }
    }
    *(pInt + flag_max) = *(pInt + 9);*(pInt + 9) = max;
    *(pInt + flag_min) = *pInt;*pInt = min;
    for(int j = 0;j < n;j ++){
        printf("%d%c", *(pInt + j), j == n - 1?'\n':' ');
    }
}
