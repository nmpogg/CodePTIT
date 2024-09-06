#include <stdio.h>

int main() {
    long long n, tong = 0;
    scanf("%lld", &n);
    
    while (n > 0) {
        tong += n % 10;
        n /= 10;
    }
    
    printf("%lld", tong);
    return 0;
}

