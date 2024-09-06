#include <stdio.h>
#include <string.h>

#define N 200

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    
    while (t--) {
        char xau[N];
        int dem = 1;
        gets(xau);
        
        for (int i = 0; i < strlen(xau) - 1; i++) {
            if (xau[i] == ' ' && xau[i + 1] != ' ') {
                dem++;
            }
        }
        
        printf("%d\n", dem);
    }
    
    return 0;
}

