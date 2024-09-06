#include <bits/stdc++.h>
using namespace std;

int check(string s){
	int cnt[11] = {};
	if(s[0] == '0') return -1;
	for(int i = 0; i < s.size(); i++){
		if (s[i]<'0' ||s[i]>'9') return -1;
		cnt[s[i]-'0'] ++;
	}
	for(int i = 0; i < 10; i++){
		if(cnt[i] == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		if(check(s) == -1) cout << "INVALID" << endl;
		else if(check(s) == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
