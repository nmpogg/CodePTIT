#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin ,s);
		int res = 0, value = 0;
		for(int i = 0; i <= s.size(); i++){
			if(isdigit(s[i])){
				value = value * 10 + (s[i] - '0');
			}
			else{
				res = max(res, value);
				value = 0;
			}
		}
		cout << res << endl;
	}
	return 0;
}
