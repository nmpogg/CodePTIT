#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int swapped = 0;
        for (int j = 0; j < n-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }

        printf("Buoc %d: ", i+1);
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }

    return 0;
}

