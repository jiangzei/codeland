#include <stdio.h>
void DrawHistogram(int nArray[], int nCount, char ch){
    char ae[50] = {'\0'};int sign;char sig2 = ' ';
    for(int i = 0;i < nCount;i ++){
        sign = nArray[i];
        for(int j = 0;j < sign;j ++){
            ae[j] = ch;
        }
        for(int k = 0;k < 50;k ++){
            printf("%c",ae[k]);
        }
        for(int r = 0;r < 29 - sign;r ++){
            printf("%c",sig2);
        }
        printf("%d\n",sign);
        for(int p = 0;p < 50;p ++){
            ae[p] = '\0';
        }
    }
}
