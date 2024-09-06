#include <stdio.h>
#include <string.h>

int main()
{
    int m;
    scanf("%d", &m);
    int i, j;

    for (i = m; i > 0; i--)
    {
        for (j = i; j <= 2 * i - 1; j++)
        {
            printf("%c", j + 63);
        }
        printf("\n");
    }

    return 0;
}

