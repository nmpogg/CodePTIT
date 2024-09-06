#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        pair<int, int> arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i; 
        }

        sort(arr, arr + n, [x](pair<int, int> a, pair<int, int> b) {
            int abs_diff_a = abs(x - a.first);
            int abs_diff_b = abs(x - b.first);
            if (abs_diff_a == abs_diff_b) {
                return a.second < b.second; 
            }
            return abs_diff_a < abs_diff_b;
        });

        for (int i = 0; i < n; i++) {
            cout << arr[i].first << " ";
        }
        cout << endl;
    }
    return 0;
}

