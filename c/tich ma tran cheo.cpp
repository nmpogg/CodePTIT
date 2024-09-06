#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int z = 1; z <= t; z++) {
        int n;
        scanf("%d", &n);
        int a[n][n];

        for (int i = 0; i < n; i++) {
            int cnt = 1;
            for (int j = 0; j < n; j++) {
                if (i >= j) {
                    a[i][j] = cnt;
                    cnt++;
                } else
                    a[i][j] = 0;
            }
        }

        int b[n][n];
        for (int i = 0; i < n; i++) {
            int s = 0;
            for (int j = 0; j < n; j++) {
                int s = 0;
                for (int k = 0; k < n; k++) {
                    s = s + a[i][k] * a[j][k];
                }
                b[i][j] = s;
            }
        }

        printf("Test %d:\n", z);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

