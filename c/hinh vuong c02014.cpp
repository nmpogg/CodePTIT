#include <stdio.h>

int min(int a, int b) {
    if (a < b)
        return a;
    return b;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            int min_dis = min(min(i - 1, 2 * n - i - 1), min(j - 1, 2 * n - 1 - j));
            printf("%d", n - min_dis);
        }
        printf("\n");
    }

    return 0;
}

