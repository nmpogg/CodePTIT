#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		map <int, int> mp;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			mp[x]++;
		}
		set<int> se;
		for(auto it : mp){
			se.insert(it.second);
		}
		for(auto it = se.rbegin(); it != se.rend(); it++){
			for(auto it2 : mp){
				if(it2.second == *it){
					while(it2.second--){
						cout << it2.first << " ";
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}
