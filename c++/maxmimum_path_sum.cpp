#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n+5][m+5];
    memset(a, 0, sizeof(a));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) {
            a[i][j] = a[i][j] + max(a[i][j-1], max(a[i - 1][j - 1], a[i-1][j]));
        }
    }
    
    cout << a[n][m] << endl;

    return 0;
}
