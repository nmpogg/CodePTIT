#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		stringstream ss1(s1);
		string temp;
		set<string> xau1;
		while(ss1 >> temp){
			xau1.insert(temp);
		}
		stringstream ss2(s2);
		while(ss2 >> temp){
			if(xau1.find(temp) != xau1.end()) xau1.erase(temp);
		}
		for(auto x : xau1) cout << x << " ";
		cout << endl;
	}
	return 0;
} 
