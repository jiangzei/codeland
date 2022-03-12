#include <stdio.h>
void DrawHistogram(int nArray[], int nCount, char ch);
void CountRangeItems(double dArray[], int nDataItems, int nArray[]){
    double sta;int k = 5;char ch = '*';
    for(int i = 0;i < nDataItems;i ++){
        sta = dArray[i];
        if(sta < 160.0)
            nArray[0] ++;
        else if (sta >= 160.0 && sta < 165.0)
            nArray[1] ++;
        else if (sta >= 165.0 && sta < 170.0)
            nArray[2] ++;
        else if (sta >= 170.0 && sta < 175.0)
            nArray[3] ++;
        else
            nArray[4] ++;
    }
    DrawHistogram(nArray, k, ch);
}
