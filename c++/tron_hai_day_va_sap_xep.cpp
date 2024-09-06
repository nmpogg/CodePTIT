#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		multiset<int> se;
		for(int i = 0; i < m + n; i++){
			int x; cin >> x;
			se.insert(x);
		}
		for(auto x : se) cout << x << " ";
		cout << endl;
	}
	return 0;
}
