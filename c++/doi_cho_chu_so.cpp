#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, idx;
		int cnt = 0;
		cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		for(int i = 0; i < n; ++i){
			idx = i;
			for(int j = i + 1; j < n; ++j) if(a[idx] > a[j]) idx = j;
			if(idx != i) cnt++;
			swap(a[i], a[idx]);
		}
		cout << cnt << endl;
	}
	return 0;
}