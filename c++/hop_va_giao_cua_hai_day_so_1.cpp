#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		set<int> va, vb, hop, giao;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			va.insert(a[i]);
			hop.insert(a[i]);
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			vb.insert(b[i]);
			hop.insert(b[i]);
		}
		for(int i = 0; i < m; i++){
			if(va.find(b[i]) != va.end()) giao.insert(b[i]);
		}
		for(auto x : hop) cout << x << " ";
		cout << endl;
		for(auto x : giao) cout << x << " ";
		cout << endl;
	}
	return 0;
}
