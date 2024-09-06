#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a[100005] = {0};
		for(int i = 0; i < s.length(); i++){
			a[s[i]]++;
		}
		for(int i = 0; i < s.length(); i++){
			if(a[s[i]] == 1) cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
