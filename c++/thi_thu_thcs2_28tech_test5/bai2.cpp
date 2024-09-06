#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int n;
	cin >> n;
	ll a[n], b[n];
	for(ll &x : a) cin >> x;
	for(ll &x : b) cin >> x;
	ll ans = -1e9;
	for(int i= 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			ans = max(ans, min(a[i]*a[j], b[i]*b[j]));
		}
	}
	cout << ans;
}