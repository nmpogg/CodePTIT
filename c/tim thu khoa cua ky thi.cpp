#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int ma;
    char ten[100];
    char ngaySinh[11];
    float diemMon1;
    float diemMon2;
    float diemMon3;
    float tongDiem;
} ThiSinh;

int main() {
    int n;
    scanf("%d", &n);

    ThiSinh* danhSach = malloc(n * sizeof(ThiSinh));


    for (int i = 0; i < n; i++) {
        danhSach[i].ma = i + 1;

        scanf(" %[^\n]", danhSach[i].ten);

        scanf(" %[^\n]", danhSach[i].ngaySinh);

        scanf("%f%f%f", &danhSach[i].diemMon1, &danhSach[i].diemMon2, &danhSach[i].diemMon3);

        danhSach[i].tongDiem = danhSach[i].diemMon1 + danhSach[i].diemMon2 + danhSach[i].diemMon3;
    }

    float diemMax = 0;
    for (int i = 0; i < n; i++) {
        if (danhSach[i].tongDiem > diemMax) {
            diemMax = danhSach[i].tongDiem;
        }
    }

    for (int i = 0; i < n; i++) {
        if (danhSach[i].tongDiem == diemMax) {
            printf("%d %s %s %.1f\n", danhSach[i].ma, danhSach[i].ten, danhSach[i].ngaySinh, danhSach[i].tongDiem);
        }
    }

    free(danhSach);

    return 0;
}

