#include <stdio.h>

#include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    
    int divisors[3];
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors[count++] = i;
            if (n/i != i) {
                divisors[count++] = n/i;
            }
            if (count == 3) {
                break;
            }
        }
    }
    
    if (count < 3) {
        printf("THIEU");
    } else {
        // S?p x?p gi?m d?n
        for (int i = 0; i < 3; i++) {
            for (int j = i+1; j < 3; j++) {
                if (divisors[i] < divisors[j]) {
                    int temp = divisors[i];
                    divisors[i] = divisors[j];
                    divisors[j] = temp;
                }
            }
        }
        // In ra 3 ph?n t? d?u tiên
        for (int i = 0; i < 3; i++) {
            printf("%d ", divisors[i]);
        }
    }
    
    return 0;
}


