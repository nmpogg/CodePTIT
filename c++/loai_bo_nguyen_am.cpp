#include <bits/stdc++.h>
using namespace std;

bool check(char s){
	if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'y') return false;
	return true;
}

void strlwr(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
}

int main(){
	string s;
	cin >> s;
	strlwr(s);
	for(int i = 0; i < s.length(); i++){
		if(check(s[i])) cout << "." << s[i];
	}
	return 0;
}
