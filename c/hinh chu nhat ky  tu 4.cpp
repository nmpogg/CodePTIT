#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    char ta = 'A' + a - 1;
    char tb = 'A' + b - 1;
    char c = 'A' - 1;

    for (char i = ta; i > c; i--)
    {
        for (char j = i; j < i + b; j++)
        {
            if (j < tb)
            {
                printf("%c", j);
            }
            else
            {
                printf("%c", tb);
            }
        }
        printf("\n");
    }

    return 0;
}

