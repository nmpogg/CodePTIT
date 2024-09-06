#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int& x : a) cin >> x;
		long long res = 0;
		for(int i = 0; i < k; i++){
			res += a[i];
		}
		long long sum = res;
		for(int i = k; i < n; i++){
			res = res - a[i-k] + a[i];
			sum = max(res, sum);
			cout << sum << " ";
		}
		cout << endl;
	}
	return 0;
}
