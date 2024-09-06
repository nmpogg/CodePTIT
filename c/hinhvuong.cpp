#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int max_val = n;
    if (n % 2 == 0) {
        max_val--;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val = max_val - i;
            if (val > max_val - j) {
                val = max_val - j;
            }
            if (val > j) {
                val = j;
            }
            if (val > i) {
                val = i;
            }
            printf("%d", val+1);
        }
        printf("\n");
    }
    
    return 0;
}

