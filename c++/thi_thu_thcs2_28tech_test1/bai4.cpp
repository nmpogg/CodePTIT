#include <bits/stdc++.h>
using namespace std;

map<string, int> mp1, mp2;

int main(){
	string s1, s2;
	getline(cin, s1);
	for(int i = 0; i < s1.size(); i++) s1[i] = tolower(s1[i]);
	getline(cin, s2);
	for(char &c : s2) c = tolower(c);
	stringstream ss1(s1), ss2(s2);
	vector<string> a;
	while(ss1 >> s1){
		a.push_back(s1);
		mp1[s1] = 1;
	}
	while(ss2 >> s2){
		mp2[s2] = 1;;
	}
	int flag = 0;
	for(auto it : a){
		if(mp1[it] && mp2[it]){
			flag = 1;
			cout << it << " ";
			mp1[it] = 0;
		}
	}
	if(!flag) cout << "NOT FOUND";
}