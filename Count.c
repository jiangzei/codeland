#include <stdio.h>
#include <string.h>
int count(const char str[], char c){
    int len = (int)strlen(str);int count = 0;
    for(int i = 0;i < len - 1;i ++){
        if(str[i] == c || str[i] == c - 32 || str[i] == c + 32)
            count ++;
    }
    return count;
}
