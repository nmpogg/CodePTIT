#include <bits/stdc++.h>
using namespace std;

struct cmp{
	bool operator() (const string& a, const string& b){
		if(a.size() == b.size()){
			return a > b;
		}
		return a.size() > b.size();
	}
};

int checkTN(string str){
	if(str.size() < 2) return 0;
	for(int i = 0; i < str.size(); i++){
		if(str[i] != str[str.size()-i-1]) return 0;
	}
	return 1;
}

int main(){
	string s;
	map <string, int, cmp> mp;
	while(cin >> s){
		if(checkTN(s)){
			mp[s]++;
		}
	}
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
	return 0;
}
