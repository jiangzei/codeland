#include <stdio.h>
void BlockExchange(int nArray[], int n, int m){
    int fa[m + 1], la[m + 1], o = 0;
    for(int p = 0;p < m;p ++){
        fa[p] = nArray[p];
    }
    for(int q = n - 1;q >n - 1 - m;q --){
        la[o] = nArray[q];
        o ++;
    }
    for(int e = m - 1;e >= 0;e --){
        printf("%d ",la[e]);
    }
    for(int t = m;t < n - m;t ++){
        printf("%d ",nArray[t]);
    }
    for(int r = 0;r < m;r ++){
        printf("%d%c",fa[r],r == (m - 1)?'\n':' ');
    }
}
