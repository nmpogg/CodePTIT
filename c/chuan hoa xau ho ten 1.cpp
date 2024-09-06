#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int T;
    scanf("%d", &T);
    getchar();

    while (T--) {
        char s[1000];
        gets(s);

        for (int i = 0; i < strlen(s); i++) {
            s[i] = tolower(s[i]);
        }

        char *token;
        token = strtok(s, " ");
        token[0] = toupper(token[0]);
        printf("%s", token);

        token = strtok(NULL, " ");
        while (token != NULL) {
            token[0] = toupper(token[0]);
            printf(" %s", token);
            token = strtok(NULL, " ");
        }
        printf("\n");
    }

    return 0;
}

