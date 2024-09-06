#include<iostream>
using namespace std;
int a[1000][1000];
int b[1000][1000];
int c[1000][1000];
int n, m;

void input() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}

void cvi() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[j][i] = a[i][j];
        }
    }
}
void tich() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < m; l++) {
                c[i][j] += a[i][l] * b[l][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    int k = 0;
    while (t--) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                c[i][j] = 0;

        k++;
        input();
        cvi();
        cout << "Test " << k << ":\n";
        tich();
    }
}

