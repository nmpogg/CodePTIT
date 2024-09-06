#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int l = 0, r;
		long long ans = -1e9, sum = 0;
		for(r = 0; r < n; r++){
			sum += a[r];
			while(l < r){
				sum -= a[l];
				l++;
				ans = max(ans, sum);
			}
			sum = 0;
		}
		cout << ans << endl;
	}
	return 0;
}
