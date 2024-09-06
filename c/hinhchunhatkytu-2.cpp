#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    char chu = 'A' - 1;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (i + j <= c + 1) {
                printf("%c", i + j - 1 + chu);
            } else {
                printf("%c", c + 1 - j + chu);
            }
        }
        printf("\n");
    }
    return 0;
}

