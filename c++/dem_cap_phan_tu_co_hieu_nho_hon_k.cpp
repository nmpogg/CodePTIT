#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		long long a[n];
		for(long long& x : a) cin >> x;
		sort(a, a+n);
		long long count = 0;
		for(int i = 0; i < n-1; i++){
			auto it = lower_bound(a+i+1, a+n, a[i]+k);
			count += (it - (a + i) - 1);
		}
		cout << count << endl;
	}
	return 0;
}
