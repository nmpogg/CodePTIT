#include <bits/stdc++.h>
using namespace std;

int check(string s){
	int sum = 0;
	for(int i = 0; i < s.length(); i++){
		sum += s[i] - '0';
	}
	string st = to_string(sum);
	if(sum < 9) return 0;
	if(sum == 9) return 1;
	if(check(st)) return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s)) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
