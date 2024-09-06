#include <stdio.h>
#include <math.h>

int isPerfectSquare(int n) {
    int x = sqrt(n);
    return x * x == n;
}

int isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int n;
    scanf("%d", &n);

    if (isFibonacci(n)) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}

