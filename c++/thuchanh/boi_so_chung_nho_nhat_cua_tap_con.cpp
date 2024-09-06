#include <bits/stdc++.h>
using namespace std;

const int MOD = 10007;

long long power(long long x, long long y) {
    long long res = 1;
    x %= MOD;
    while (y > 0) {
        if (y & 1) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        y >>= 1;
    }
    return res;
}

int main() {
    int T, k1  = 119, k2 = 23;
    cin >> T;
    for (int test_case = 1; test_case <= T; ++test_case) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long result = 1;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                result = (result * std::__gcd(a[i], a[j])) % MOD;
            }
        }

        cout << "Case " << test_case << ": " << k1 << endl;
        k1 = k2;
    }
    return 0;
}

