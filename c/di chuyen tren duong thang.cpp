#include <stdio.h>
#include <math.h>

long long a, b;
long long x;

void load(long long x) {
    long long sct = sqrt(x);
    long long sr = sct * 2 - 1;
    long long k = x - sct * sct;
    long long a = sr + k / sct;
    if (k % sct == 0)
        printf("%lld", a);
    else
        printf("%lld", a + 1);
    printf("\n");
}

int main() {
    while (scanf("%lld%lld", &a, &b) != -1) {
        long long x = abs(b - a);
        load(x);
    }
    return 0;
}

