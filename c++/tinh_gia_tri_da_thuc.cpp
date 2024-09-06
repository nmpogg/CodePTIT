#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long result = 0;
        long long x_power = 1;

        for(int i = n - 1; i >= 0; i--){
            result = (result + (a[i] * x_power) % MOD) % MOD;
            x_power = (x_power * x) % MOD;
        }

        cout << result << endl;
	}
	return 0;
}
