#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, t;
	getline(cin, s);	
	getline(cin, t);
	for(char &c : s) c = tolower(c);
	for(char &c : t) c = tolower(c);
	set<string> se1, se2;
	stringstream ss1(s), ss2(t);
	string tmp;
	vector<string> ans;
	while(ss1 >> tmp){
		se1.insert(tmp);
		if(ans.count(tmp) == 0) ans.push_back(tmp);
	}
	while(ss2 >> tmp){
		se2.insert(tmp);
	}
	set<string> se;
	int flag = 0;
	for(auto it : se1){
		if(se2.find(it) != se2.end()){
			flag = 1;
			se.insert(it);
		}
	}
	if(!flag) cout << "NOT FOUND";
	for(auto it : ans){
		if(se.find(it) != se.end()) cout << it << " ";
	}
}