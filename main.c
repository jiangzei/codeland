#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char sentences[1000][1000];int n = 0;
    while(fgets(sentences[n], 1000, stdin) != NULL){
        n ++;
    }
    for(int i = 0;i < n;i ++){
        if(strstr(sentences[i], *(argv + 1)) != NULL)
            printf("*");
        printf("%s",sentences[i]);
    }
    return 0;
}
