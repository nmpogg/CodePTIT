#include <bits/stdc++.h>
using namespace std;

void hieuNhoHonK() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k; // Size of array (n) and the value k
        int a[n];
        
        // Input array elements
        for (int &x : a) {
            cin >> x;
        }

        // Sort the array
        sort(a, a + n);

        int cnt = 0; // Initialize the count of pairs

        // Nested loop to find pairs with a difference less than k
        for (int i = 0; i < n; i++) {
            auto it = lower_bound(a + i + 1, a + n, k + a[i]);
            int x = it - (a + i) - 1;
            cnt += x;
        }

        // Output the result for the current test case
        cout << cnt << endl;
    }

    return;
}

int main(){
	hieuNhoHonK();
} 
