#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int kytu = 65;

    for (int i = 0; i < n; i++)
    {
        int k = 2 * i;
        for (int j = 0; j < n - i; j++)
        {
            printf("%c", kytu + k);
            k += 2;
        }
        printf("\n");
    }

    return 0;
}

