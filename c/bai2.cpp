#include <stdio.h>

int main() {
    unsigned long t;
    scanf("%lu", &t);

    while (t--) {
        unsigned long n, gapdoi2;
        scanf("%lu", &n);
        gapdoi2 = n * 2;
        printf("%lu\n", gapdoi2);
    }

    return 0;
}


