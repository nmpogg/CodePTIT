#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int leg = s.size();
		set <char> se;
		for(int i = 0; i < leg; i++){
			s[i] = tolower(s[i]);
			se.insert(s[i]);
		}
		int k;
		cin >> k;
		if(26 - se.size() > k) cout << 0 << endl;
		else cout << 1 << endl;
	}
	return 0;
}
