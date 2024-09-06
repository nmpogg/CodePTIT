#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    if (s == 0) {
        if (m == 1) {
            cout << "0 0";
        } else {
            cout << "-1 -1";
        }
        return 0;
    }

    if (s > 9 * m) {
        cout << "-1 -1";
        return 0;
    }

    string minNum, maxNum;

    for (int i = 0; i < m; i++) {
        int digit = min(s, 9);
        maxNum += to_string(digit);
        s -= digit;
    }

    if (s > 0) {
        cout << "-1 -1";
        return 0;
    }

    minNum = maxNum;
    reverse(minNum.begin(), minNum.end());

    if (minNum[0] == '0') {
        int i = 1;
        while (minNum[i] == '0') {
            i++;
        }
        minNum[0] = '1';
        minNum[i] = (minNum[i] - 1);
    }

    cout << minNum << " " << maxNum;

    return 0;
}

