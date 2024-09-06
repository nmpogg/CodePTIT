#include <bits/stdc++.h>
using namespace std;

bool check_odd(string s){
	for(int i = 0; i < s.length(); i++){
		if((s[i]- '0') % 2 != 0) return false;
	}
	return true;
}

bool check(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] != s[s.length()-i-1]) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check_odd(s) && check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
