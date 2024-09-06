#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int check = 0;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] == a[j]){
					cout << a[i] << endl;
					check = 1;
					break;
				}
			}
			if(check) break;
		}
		if(check = 0) cout << -1 << endl;
	}
	return 0;
} 
