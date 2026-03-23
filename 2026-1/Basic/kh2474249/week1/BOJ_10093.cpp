#include <stdio.h>

int main() {
    long long a, b, c;

    scanf("%lld %lld", &a, &b);

    long long min = a < b ? a : b;
    long long max = a > b ? a : b;

    c = max - min - 1;
    
    if (max - min == 0) {
        c = 0;
    }

    printf("%lld\n", c);

    for (long long i = min + 1; i < max; i++) {
        printf("%lld ", i);
    }
}