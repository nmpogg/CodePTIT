#include <bits/stdc++.h>
using namespace std;

int check_sx(string s){
	if(s[5] >= s[6] || s[6] >= s[7] || s[7] >= s[9] || s[9] >= s[10]) return 0;
	return 1;
}

int check_bn(string s){
	if(s[9] != s[10]) return 0;
	for(int i = 5; i < 8; i++){
		if(s[i] != s[9]) return 0;
	}
	return 1;
}

int check_bn2(string s){
	if(s[5] != s[6] || s[6] != s[7]) return 0;
	if(s[9] != s[10]) return 0;
	return 1;
}

int check68(string s){
	for(int i = 5; i < 11; i++){
		if(i == 8) i++;
		if(s[i] != '6' && s[i] != '8') return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check_sx(s) || check_bn(s) || check_bn2(s) || check68(s)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
