#include <stdio.h>

int check(int n) {
    int a[10];
    int dem = 0;
    while (n) {
        a[dem] = n % 10;
        dem++;
        n = n / 10;
    }
    for (int i = 1; i < dem; i++) {
        if (a[i] > a[i - 1])
            return 0;
    }
    return 1;
}

int main() {
    int n;
    int a[100005];
    int dem = 0;
    while (scanf("%d", &n) != -1) {
        if (check(n)) {
            a[dem] = n;
            dem++;
        }
    }
    int b[100005];
    for (int i = 0; i < dem; i++) {
        b[i] = 1;
    }
    for (int i = 0; i < dem; i++) {
        if (b[i] == 1) {
            for (int j = i + 1; j < dem; j++) {
                if (a[i] == a[j]) {
                    b[i]++;
                    b[j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < dem; i++) {
        for (int j = i + 1; j < dem; j++) {
            if (b[i] < b[j]) {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
                int y = b[i];
                b[i] = b[j];
                b[j] = y;
            }
        }
    }
    for (int i = 0; i < dem; i++) {
        if (b[i] != 0)
            printf("%d %d\n", a[i], b[i]);
    }
    return 0;
}

