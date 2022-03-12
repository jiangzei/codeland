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
        printf("个数:%d//",sign);
        if(i == 0)
            printf("区间(-∞，160)\n");
        if(i == 1)
            printf("区间[160，165)\n");
        if(i == 2)
            printf("区间[165，170)\n");
        if(i == 3)
            printf("区间[170，175)\n");
        if(i == 4)
            printf("区间[175，+∞)\n");
        for(int p = 0;p < 50;p ++){
            ae[p] = '\0';
        }
    }
}
