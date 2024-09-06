#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    int cnt = 65;
    int c = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            a[j][c] = cnt;
            cnt++;
        }
        c++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

