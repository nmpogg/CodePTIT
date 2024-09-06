#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long s1 = 1, s2 = 1;
        for (int i = 3; i <= n; i++) {
            long long s3 = s1 + s2;
            s1 = s2;
            s2 = s3;
        }

        printf("%lld\n", s2);
    }

    return 0;
}

