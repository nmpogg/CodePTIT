#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int count, temp;
    int j, k = 2, h = 1;
    printf("Buoc 0: %d\n", a[0]);

    for(int i = 0; i < n - 1; i++) {
        j = i;

        if (a[i] > a[i + 1]){
            temp = a[i + 1];
            while (a[j] > temp && j >= 0) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = temp;
        }
        printf("Buoc %d: ", h++);
        for(int i = 0; i < k; i++)
            printf("%d ", a[i]);
        printf("\n");

        k++;
    }
    return 0;
}

