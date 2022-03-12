#include <stdio.h>
long gcd(long m, long n) {
    if (m == n)
        return n;
    else if (m > n)
        return gcd(m - n, n);
    else
        return gcd(n, m);
}
