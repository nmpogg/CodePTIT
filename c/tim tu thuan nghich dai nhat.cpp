#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int max;

int check(char b[]) {
    int l = 0;
    int r = strlen(b) - 1;

    while (l < r) {
        if (b[l] != b[r])
            return 0;
        l++;
        r--;
    }

    return 1;
}

int main() {
    char a[10005];
    char b[10005][1005];
    int n = 0;

    while (scanf("%s", a) == 1) {
        strcpy(b[n], a);
        n++;
    }

    int c[10005] = {0};

    for (int i = 0; i < n; i++) {
        c[i] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (check(b[i]) == 0) {
            c[i] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (c[i]) {
            for (int j = i + 1; j < n; j++) {
                if (strcmp(b[i], b[j]) == 0) {
                    c[i]++;
                    c[j] = 0;
                }
            }
        }
    }

    max = 0;

    for (int i = 0; i < n; i++) {
        if (c[i] && max < strlen(b[i])) {
            max = strlen(b[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (max == strlen(b[i]) && c[i]) {
            printf("%s %d\n", b[i], c[i]);
        }
    }

    return 0;
}

