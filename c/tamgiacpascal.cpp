#include <stdio.h>

int pascal(int k, int n) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return pascal(k - 1, n - 1) + pascal(k, n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", pascal(j, i));
        }
        printf("\n");
    }

    return 0;
}

