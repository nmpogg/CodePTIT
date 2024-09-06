#include <stdio.h>
#include <string.h>

int is_beautiful(char s[]) {
    if (s[6] == s[7] && s[7] == s[8] && s[10] == s[11])
        return 1;
    if ((s[6] == '6' || s[6] == '8') && (s[7] == '6' || s[7] == '8') && (s[8] == '6' || s[8] == '8') && (s[10] == '6' || s[10] == '8') && (s[11] == '6' || s[11] == '8'))
        return 1;
    for (int i = 6; i < 12 - 1; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (s[i] != s[j])
                return 0;
        }
    }
    return 1;
}

int is_ascending(char s[]) {
    for (int i = 6; i < 12 - 1; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (s[i] >= s[j])
                return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    
    while (t--) {
        char s[15];
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0'; // Xóa k? t? '\n' cu?i cùng trong chu?i
        
        if (is_beautiful(s) || is_ascending(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}

