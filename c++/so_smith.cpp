#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isSmithNumber(int n) {
    if (isPrime(n)) return false;
    
    int originalSum = sumOfDigits(n);
    int primeSum = 0;
    int current = 2;
    
    while (n > 1) {
        if (isPrime(current) && n % current == 0) {
            while (n % current == 0) {
                primeSum += sumOfDigits(current);
                n /= current;
            }
        }
        current++;
    }
    
    return originalSum == primeSum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isSmithNumber(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

