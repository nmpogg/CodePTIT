#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[219];
    int b[219];
    long long min1 = 10e6;
    long long min2 = 10e6;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);

        if (a[i] < min1)
            min1 = a[i];

        if (b[i] < min2)
            min2 = b[i];
    }

    printf("%lld", min1 * min2);
    return 0;
}

