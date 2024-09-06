#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string temp;
	vector<string> v;
	while(ss >> temp){
		v.push_back(temp);
	}
	for(int i = 0; i < v.size(); i++){
		v[i][0] = toupper(v[i][0]);
		if(i == v.size()-1){
			for(int j = 0; j < v[i].size(); j++){
				v[i][j] = toupper(v[i][j]);
			}
		}
		if(i < v.size()-2) cout << v[i] << " ";
		if(i == v.size()-2) cout << v[i] << ", ";
		if(i == v.size()-1) cout << v[i];
	}
	return 0;
} 
