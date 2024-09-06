#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &x : a){
			cin >> x;
		}
		for(int i = 0; i < n; i++){
			if(a[i] != 0) cout << a[i] << " ";
		}
		for(int i = 0; i < n; i++){
			if(a[i] == 0) cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
