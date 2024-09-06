#include <stdio.h>
#include <math.h>

float dientich(int a, int b, int c) {
    float p = (a + b + c) / 2.0;
    return sqrt(p * (p-a) * (p-b) * (p-c));
}

void sapxep(int a[][3], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < 3; j++) {
            float area1 = dientich(a[j][0], a[j][1], a[j][2]);
            float area2 = dientich(a[j+1][0], a[j+1][1], a[j+1][2]);
            if (area1 > area2) {
                
                int temp[3];
                for (int k = 0; k < 3; k++) {
                    temp[k] = a[j][k];
                    a[j][k] = a[j+1][k];
                    a[j+1][k] = temp[k];
                }
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    int a[t][3];

    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }

    sapxep(a, t);

    for (int i = 0; i < t; i++) {
        printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
    }

    return 0;
}

