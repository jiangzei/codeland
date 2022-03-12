#include <stdio.h>
int sym2(int (*a)[10], int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (*(*(a + i) + j) != *(*(a + j) + i))
                return 2;
        }
    }
    return 1;
}
