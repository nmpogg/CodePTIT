#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		map <int, int> mp;
		int check = 0;
		for(int i = 0; i < n; i++){
			mp[a[i]]++;
			if(mp[a[i]] == 2){
				cout << a[i] << endl;
				check = 1;
				break;
			}
		}
		if(!check) cout << -1 << endl;
	}
	return 0;
} 
