#include <stdio.h>

void sapxep(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
}

void giao(int a[], int n, int b[], int m) {
    for (int i = 0; i < n; i++) {
        int kt = 0;
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j])
                kt = 1;
        }
        if (kt == 1)
            printf("%d ", a[i]);
    }
}

void hieu(int a[], int n, int b[], int m) {
    for (int i = 0; i < n; i++) {
        int kt = 1;
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j])
                kt = 0;
        }
        if (kt == 1)
            printf("%d ", a[i]);
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int a[n], b[m];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                i = i - 1;
                n = n - 1;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
        for (int j = 0; j < i; j++) {
            if (b[i] == b[j]) {
                i = i - 1;
                m = m - 1;
            }
        }
    }

    sapxep(a, n);
    sapxep(b, m);

    giao(a, n, b, m);
    printf("\n");
    hieu(a, n, b, m);
    printf("\n");
    hieu(b, m, a, n);
    printf("\n");

    return 0;
}

