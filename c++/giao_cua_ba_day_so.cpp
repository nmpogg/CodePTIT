#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		long long a1[n1], b1[n2], c1[n3];
		set<long long> a, b,c, aa, giao;
		for(int i = 0; i < n1; i++){
			cin >> a1[i];
			a.insert(a1[i]);
		}
		for(int i = 0; i < n2; i++){
			cin >> b1[i];
			b.insert(b1[i]);
		}
		for(int i = 0; i < n3; i++){
			cin >> c1[i];
			c.insert(c1[i]);
		}
		for(int i = 0; i < n2; i++){
			if(a.find(b1[i]) != a.end()){
				aa.insert(b1[i]);
			}
		}
		for(int i = 0 ; i < n3; i++){
			if(aa.find(c1[i]) != aa.end()){
				giao.insert(c1[i]);
			} 
		}
		if(giao.empty()){
			cout << "-1\n";
		}
		else{
			for(auto x : giao) cout << x << ' ';
			cout << endl;
		}
	}
	return 0;
}