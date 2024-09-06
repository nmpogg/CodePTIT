#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(long long &x : a) cin >> x;
		sort(a, a + n);
		for(int i = 0; i < n; i++){
			if(binary_search(a, a + n, i)) a[i] = i;
			else a[i] = -1;
		}
		for(long long x : a) cout << x << " ";
		cout << endl;
	}
	return 0;
}
