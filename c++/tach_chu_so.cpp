#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		int sum  = 0;
		for(int i = 0; i < s.size(); i++){
			if(isalpha(s[i])) cout << s[i];
			else sum += s[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}
