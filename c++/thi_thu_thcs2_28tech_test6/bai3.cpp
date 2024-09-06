#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	s += '@';
	int cnt = 1;
	string ans = "";
	for(int i = 1; i < s.size(); i++){
		if(s[i] == s[i-1]){
			cnt++;
		}
		else{
			ans += s[i-1];
			ans += to_string(cnt);
			cnt = 1;
		}
	}
	cout << ans;
}