#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int cnt = 0;
		for (int  i = 0; i < s.size(); i++) {
			if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '0') {
				i+=2;
			}
			else cnt++;
		}
		cout << cnt  << "\n";
	}

	return 0;
}

