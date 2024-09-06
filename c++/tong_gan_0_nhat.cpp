#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum_min = 1e9;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int res = a[i] + a[j];
                if (abs(res) < abs(sum_min)) {
                    sum_min = res;
                }
            }
        }
        cout << sum_min << endl;
    }
    return 0;
}

