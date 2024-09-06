#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<char, int> mp;
		for(char x : s){
			mp[x]++;
		}
		long long res = s.size(); // cac xau con co 1 ki tu
		for(auto it : mp){
			res += it.second * (it.second - 1) / 2; // cu 2 ki tu giong nhau tao dc 1 xau con, n ki tu chon 2 trong n co nC2
		}
		cout << res << endl;
	}
	return 0;
}
