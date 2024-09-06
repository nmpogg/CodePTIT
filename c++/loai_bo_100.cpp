#include <bits/stdc++.h>
using namespace std;

void solve(string s){
	int res = 0;
	for(int i = 0; i < s.size() - 2; i++){
		if(s == "") break;
		if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '0'){
			res += 3;
			s.erase(i, 3);
			i = -1;
		}
	}
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		solve(s);		
	}
	return 0;
}
