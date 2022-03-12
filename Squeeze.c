#include <stdio.h>
#include <string.h>
void squeeze(char s1[], char s2[]){
    int len1 = (int)strlen(s1) - 1, len2 = (int)strlen(s2) - 1;
    int count[len1];
    for(int l = 0;l < len1;l ++){
        count[l] = 0;
    }
    for(int i = 0;i < len1;i ++){
        for(int j = 0;j < len2;j ++){
            if(s1[i] == s2[j])
                count[i] ++;
        }
    }
    for(int k = 0;k < len1;k ++){
        if(count[k] == 0)
            printf("%c", s1[k]);
    }
    putchar('\n');
}
