#include <bits/stdc++.h>
using namespace std;

int binary(int a[], int n, int x){
	int l = 0, r = n-1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x) return 1;
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int &x : a) cin >> x;
		cout << binary(a, n, x) << endl;
	}
	return 0;
}
