#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 1, 3, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[n];
    int count = 0;
    
    // Kh?i t?o t?t c? các ph?n t? c?a m?ng freq là 0
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }
    
    // Duy?t qua m?ng arr và tãng giá tr? c?a ph?n t? týõng ?ng trong m?ng freq lên 1
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    // Duy?t qua m?ng freq và ð?m s? lý?ng ph?n t? có s? l?n xu?t hi?n l?n hõn 1
    for (int i = 0; i < n; i++) {
        if (freq[i] > 1) {
            count++;
        }
    }
    
    printf("So luong phan tu xuat hien nhieu hon 1 lan la: %d", count);
    
    return 0;
}

