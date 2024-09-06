#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			a[i] *= a[i];
		}
		bool flag = false;
		for(int i = 0; i < n-2; i++){
			for(int j = i+1; j < n-1; j++){
				long long tmp = a[i] + a[j];
				for(int k = j+1; k < n; k++){
					if(a[k] == tmp){
						cout << "YES\n";
						flag = true;
						break;
					}
				}
				if(flag) break;
			}
			if(flag) break;
		}
		if(!flag) cout << "NO\n";
	}
	return 0;
}