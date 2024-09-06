#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	set<string> ban;
	while(getline(ss, s, ',')){
		ban.insert(s);
	}
	while(getline(cin, s)){
		stringstream ss(s);
		vector<string> res;
		bool flag = true;
		while(ss >> s){
			for(char &c : s) c = tolower(c);
			if(ban.count(s)) flag = false;
		}
		if(flag) cout << "accept\n";
		else cout << "block\n";
	}
}