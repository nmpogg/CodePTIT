#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPerfectNumber(long long n) {
    if (n <= 1) {
        return false;
    }
    int p = 2;
    while (true) {
        long long perfect = pow(2, p - 1) * (pow(2, p) - 1);
        if (perfect > n) {
            break;
        }
        if (n % perfect == 0 && isPrime(p)) {
            return true;
        }
        p++;
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (isPerfectNumber(n)) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}

