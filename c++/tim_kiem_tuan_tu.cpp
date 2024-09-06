#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int &x : a) cin >> x;
		int check = 0;
		for(int i = 0; i < n; i++){
			if(a[i] == x){
				cout << i + 1 << endl;
				check = 1;
				break;
			}
		}
		if(!check) cout << -1 << endl;
	}
	return 0;
}
