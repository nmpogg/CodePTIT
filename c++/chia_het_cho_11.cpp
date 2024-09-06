#include <bits/stdc++.h>
using namespace std;

bool check(string s){
	int sum1 = 0, sum2 = 0;
	for(int i = 0; i < s.length(); i++){
		if(i % 2 == 0) sum1 += s[i] - '0';
		else sum2 += s[i] - '0';
	}
	if(abs(sum1 - sum2) % 11 == 0) return 1;
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

