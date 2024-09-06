#include <stdio.h>

int main() {
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        unsigned long long n;
        scanf("%llu", &n);
        char hexa_num[20];
        int j = 0;

        while (n != 0) {
            int num = n % 16;
            if (num < 10) {
                hexa_num[j] = num + '0';
            } else {
                hexa_num[j] = num + 55; 
            }
            n /= 16;
            j++;
        }

        for (int k = j - 1; k >= 0; k--) {
            printf("%c", hexa_num[k]);
        }
        printf("H");
        printf("\n");
    }

    return 0;
}

