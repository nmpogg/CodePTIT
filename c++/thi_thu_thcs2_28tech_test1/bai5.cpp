#include <bits/stdc++.h>
using namespace std;

int check(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] != s[s.size()-i-1]) return 0;
	}
	return 1;
}

map<string, int> mp;

int main(){
	string s;
	vector<string> ans;
	while(cin >> s){
		if(check(s)){
			ans.push_back(s);
			mp[s]++;
		}
	}
	for(auto it : ans){
		if(mp[it]){
			cout << it << " " << mp[it] << endl; 
			mp[it] = 0;
		}
	}
}