#include <stdio.h>
#include <string.h>
void fun(char *s, char c, int m, int n){
    for(int i = m;i < n;i ++){
        *(s + i) = c;
    }
    printf("%s", s);
}
