#include <bits/stdc++.h>
using namespace std;

char trans(char s){
	if(s == 'a' || s == 'b' || s == 'c') return '2';
	if(s == 'd' || s == 'e' || s == 'f') return '3';
	if(s == 'g' || s == 'h' || s == 'i') return '4';
	if(s == 'j' || s == 'k' || s == 'l') return '5';
	if(s == 'm' || s == 'n' || s == 'o') return '6';
	if(s == 'p' || s == 'q' || s == 's' || s == 'r') return '7';
	if(s == 't' || s == 'u' || s == 'v') return '8';
	if(s == 'w' || s == 'x' || s == 'y' || s == 'z') return '9';
}

int check_tn(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] != s[s.size() - i - 1]) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
		for(int i = 0; i < s.size(); i++){
			s[i] = trans(s[i]);
		}
		if(check_tn(s)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
