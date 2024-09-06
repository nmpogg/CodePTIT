#include <stdio.h>
#include <string.h>

int is_beautiful(long long n) {
    char s[20];
    sprintf(s, "%lld", n);
    int len = strlen(s);
    if (len <= 1) return 0;

    if (s[0] != s[len-1]*2 && s[len-1] != s[0]*2) {
        return 0;
    }

    for (int i = 1; i < len-1; i++) {
        if (s[i] != s[len-1-i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);
        if (is_beautiful(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

