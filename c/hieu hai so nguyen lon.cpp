#include <stdio.h>
#include <string.h>

void daoxau(char a[]) {
    for (int i = 0; i < strlen(a) / 2; i++) {
        char tam = a[i];
        a[i] = a[strlen(a) - i - 1];
        a[strlen(a) - i - 1] = tam;
    }
}

int main() {
    int t;
    scanf("%d\n", &t);

    while (t--) {
        char x1[500], x2[500], kq[501];
        gets(x1);
        gets(x2);

        if (strcmp(x1, x2) == 0) {
            printf("0\n");
            continue;
        }

        if (strlen(x1) < strlen(x2)) {
            char tam[500];
            strcpy(tam, x1);
            strcpy(x1, x2);
            strcpy(x2, tam);
        }

        if (strlen(x1) == strlen(x2)) {
            if (strcmp(x1, x2) < 0) {
                char tam[500];
                strcpy(tam, x1);
                strcpy(x1, x2);
                strcpy(x2, tam);
            }
        }

        daoxau(x1);
        daoxau(x2);
        int dodai = strlen(x1);

        if (strlen(x1) < strlen(x2)) {
            dodai = strlen(x2);
        }

        for (int i = strlen(x1); i < dodai; i++) {
            x1[i] = '0';
        }

        for (int i = strlen(x2); i < dodai; i++) {
            x2[i] = '0';
        }

        x1[dodai] = '\0';
        x2[dodai] = '\0';

        int nho = 0;

        for (int i = 0; i < dodai; i++) {
            int tam = x1[i] - '0' - (x2[i] - '0' + nho);

            if (tam >= 0) {
                kq[i] = tam + '0';
                nho = 0;
            } else {
                kq[i] = 10 + tam + '0';
                nho = 1;
            }
        }

        while (kq[dodai - 1] == '0') {
            dodai--;
        }

        kq[dodai] = '\0';
        daoxau(kq);
        printf("%s\n", kq);
    }

    return 0;
}

