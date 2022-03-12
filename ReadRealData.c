#include <stdio.h>
int ReadRealData(double dArray[],int nCount){
    int i = 0, count = 0;
    printf("请输入不超过预计数量nCount的实数存储到数组中：\n");
    while(scanf("%lf", &dArray[i]) == 1){
        count ++;
        i ++;
    }
    printf("预计录入成功的实数的数量nCount = %d\n",nCount);
    return count;
}
