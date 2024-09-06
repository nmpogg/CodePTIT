#include <bits/stdc++.h>
using namespace std;

bool dem_a(string s){
	int res = 0;
	for(char c : s){
		if(c == '@'){
			res++;
			if(res > 1) return false;
		}
	}
	return true;
}

bool KTDB(string s){
	for(char c : s){
		if(isdigit(c)) continue;
		else if(isalpha(c)) continue;
		else if(c == '@' || c == '.' || c == '_') continue;
		else return false; 
	}
	return true;
}

bool duoi(string s){
	if(s.find("@gmail.com") != string::npos) return true;
	else if(s.find("@28tech.com.vn") != string::npos) return true;
	else if(s.find("@yahoo.com") != string::npos) return true;
	else if(s.find("@hotmail.com") != string::npos) return true;
	else return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(dem_a(s) && KTDB(s) && duoi(s)) cout << "YES\n";
		else cout << "NO\n";
	}
}