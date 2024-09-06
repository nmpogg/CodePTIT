#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool check(int a[], int n, int x) {
    int l = 0;
    for (int r = 0; r < n; r++) {
        while (a[r] - a[l] > x) {
            l++;
        }
        if (a[r] - a[l] == x) return 1;
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (auto &x : a) {
            cin >> x;
        }
        sort(a, a + n);
        if (check(a, n, x)) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}

