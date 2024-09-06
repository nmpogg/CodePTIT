#include <bits/stdc++.h>
using namespace std;

bool check(string s){
	int n = s.size();
	if(s[n-2] == '0' && s[n-1] == '0') return 1;
	else if(s[n-2] == '2' && s[n-1] == '5') return 1;
	else if(s[n-2] == '5' && s[n-1] == '0') return 1;
	else if(s[n-2] == '7' && s[n-1] == '5') return 1;
	if(s[0] == '0') return 1;
	return 0;
}

int main(){
	string s;
	cin >> s;
	if(check(s)) cout << "YES";
	else cout << "NO";
}