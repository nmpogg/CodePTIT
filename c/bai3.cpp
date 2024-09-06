#include <stdio.h>

int main() {
    unsigned long long t, binhphuong;
    scanf("%llu", &t);
    while (t > 0) {
        unsigned long long n;
        scanf("%llu", &n);
        binhphuong = n * n;
        printf("%llu\n", binhphuong);
        t--;
    }

    return 0;
}
