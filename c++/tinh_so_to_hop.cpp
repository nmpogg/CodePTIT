#include <bits/stdc++.h>
using namespace std;

const long long P = 1e9 + 7;

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

long long giaithua(int n) {
    if (n == 0) return 1;
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result = (result * i) % P;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        long long numerator = giaithua(n);
        long long denominator = (giaithua(r) * giaithua(n - r)) % P;

        // Calculate modular inverse of denominator
        long long denominator_inverse = mod_pow(denominator, P - 2, P);

        long long res = (numerator * denominator_inverse) % P;
        cout << res << endl;
    }
    return 0;
}

