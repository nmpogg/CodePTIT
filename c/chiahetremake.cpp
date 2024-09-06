#include <stdio.h> 

int main() {
    int n, k;
    scanf("%d%d", &n, &k);

    int i = 2;
    int d = 0;
    while (i <= n) {
        d += n / i;
        i *= 2;
    }

    if (d >= k) {
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
}

