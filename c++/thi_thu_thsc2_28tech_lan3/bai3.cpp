#include <bits/stdc++.h>
using namespace std;

int tn(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] != s[s.size()-i-1]) return 0;
	}
	return 1;
}

int main(){
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '.' || s[i] == ',') s[i] = ' ';
	}
	vector<string> ans;
	map<string, int> mp;
	stringstream ss(s);
	while(getline(ss, s, ' ')){
		if(s != "" && tn(s)) ans.push_back(s);
		mp[s]++;
	}
	for(auto it : ans){
		if(mp[it]){
			cout << it << " " << mp[it] << endl;
			mp[it] = 0;
		}
	}
}