#include <stdio.h>

int main() {
    int w1, h1, w2, h2, w3, h3;
    int a, b, c;
    int max, sum;

    // Nh?p d? li?u vào
    scanf("%d %d", &w1, &h1);
    scanf("%d %d", &w2, &h2);
    scanf("%d %d", &w3, &h3);

    // Xác ð?nh 3 c?nh c?a h?nh vuông
    if (w1 == w2 || w1 == w3) {
        a = h1;
    } else {
        a = w1;
    }
    if (w2 == w1 || w2 == w3) {
        b = h2;
    } else {
        b = w2;
    }
    if (w3 == w1 || w3 == w2) {
        c = h3;
    } else {
        c = w3;
    }

    // T?m ð? dài c?nh dài nh?t và t?ng ð? dài các c?nh
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    sum = a + b + c;

    // Ki?m tra xem có th? ghép thành h?nh vuông hay không
    if (2 * max == sum) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

