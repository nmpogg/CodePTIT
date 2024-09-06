#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 1, 3, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[n];
    int count = 0;
    
    // Kh?i t?o t?t c? c�c ph?n t? c?a m?ng freq l� 0
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }
    
    // Duy?t qua m?ng arr v� t�ng gi� tr? c?a ph?n t? t��ng ?ng trong m?ng freq l�n 1
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    // Duy?t qua m?ng freq v� �?m s? l�?ng ph?n t? c� s? l?n xu?t hi?n l?n h�n 1
    for (int i = 0; i < n; i++) {
        if (freq[i] > 1) {
            count++;
        }
    }
    
    printf("So luong phan tu xuat hien nhieu hon 1 lan la: %d", count);
    
    return 0;
}

