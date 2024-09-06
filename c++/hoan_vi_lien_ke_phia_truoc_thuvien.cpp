#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			v.push_back(x);
		}
		prev_permutation(v.begin(), v.end());
		for(auto it : v) cout << it << " ";
		cout << endl;
	}
	return 0;
}
