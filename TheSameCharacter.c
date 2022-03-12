#include <stdio.h>
#include <string.h>
void TSC(char *a,char *b){
    int len1 = (int)strlen(a) - 1, len2 = (int)strlen(b) - 1;
    int flag = 0;
    for(int i = 0;i < len1;i ++){
        if(*a != *(a + i))
            flag = 1;
    }
    for(int i = 0;i < len2;i ++){
        if(*b != *(b + i))
            flag = 1;
    }
    if(*a != *b) flag = 1;
    if(flag == 0)
        printf("Yes\n");
    else
        printf("NO\n");
}
