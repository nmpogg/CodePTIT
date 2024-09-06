#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		mp[x]++;
	}
	long long ans = 0;
	for(auto it : mp){
		ans += 1ll*it.second * (it.second - 1) / 2;
	}
	cout << ans;
}