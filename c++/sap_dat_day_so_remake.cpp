#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		set <long long> se;
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		
		for(int i = 0; i < n; i++){
			if(se.find(i) != se.end()){
				a[i] = i;
			}
			else a[i] = -1;
		}
		for(long long x : a) cout << x << " ";
		cout << endl;
	}
	return 0;
}
