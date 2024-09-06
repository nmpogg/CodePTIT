#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a < b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> v(n), b(m);
		unordered_set<int> se;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			se.insert(b[i]);
		}
		for(auto it : se){
			cout <<it << " ";
		}
		for(int i = 0; i < n; i++){
			if(se.find(v[i]) != se.end()){
				cout << v[i] << " ";
				v[i] = 0;
			}
		}
		sort(v.begin(), v.end(), cmp);
		for(int x : v){
		//	if(x != 0) cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
