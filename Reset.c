#include <stdio.h>
#include <string.h>
void reset(char *a, char *b){
    int len1 = (int)strlen(a) - 1, len2 = (int)strlen(b) - 1;
    int flag = 0, count = 0;
    if(len1 != len2) flag = 1;
    for(int i = 0;i < len1;i ++){
        for(int j = i;j < len1;j ++){
            if(*(a + i) > *(a + j)){
                char c = *(a + i);*(a + i) = *(a + j);*(a + j) = c;
            }
        }
    }
    for(int i = 0;i < len2;i ++){
        for(int j = i;j < len2;j ++){
            if(*(b + i) > *(b + j)){
                char c = *(b + i);*(b + i) = *(b + j);*(b + j) = c;
            }
        }
    }
    for(int k = 0;k < len1;k ++){
        if(*(a + k) == *(b + k))
            count ++;
    }
    if(count != len1) flag = 1;
    if(flag == 0)
        printf("Yes\n");
    else
        printf("NO\n");
}
