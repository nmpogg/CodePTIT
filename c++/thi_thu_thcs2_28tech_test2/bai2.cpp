#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int ans = 0;
	for(int i = 1; i < n; i++){
		if(a[i] <= a[i-1]){
			int res = a[i-1] - a[i] + 1;
			a[i] += res;
			ans += res;
		}
	}
	cout << ans;
}