#include <stdio.h>
#include <string.h>

void mahoa(const char* str) {
    int len = strlen(str);
    int count = 1;
    
    for (int i = 0; i < len; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }
    
    printf("\n");
}

int main() {
    int t;
    scanf("%d\n", &t);
    
    while (t--) {
        char str[105];
        gets(str);
        mahoa(str);
    }
    
    return 0;
}

