#include <stdio.h>
int p(int n, int x) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return x;
    else
        return ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
}
