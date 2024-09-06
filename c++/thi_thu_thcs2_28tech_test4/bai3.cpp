#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		vector<string> res;
		string ans = "";
		while(ss >> s){
			for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
			res.push_back(s);
		}
		ans += res[res.size() - 1];
		for(int i = 0; i < res.size()-1; i++) ans += res[i];
		ans += "@28tech.com.vn";
		cout << ans << endl;
	}
}