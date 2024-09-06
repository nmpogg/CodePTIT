#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		while(a.size() < b.size()) a = "0" + a;
		while(b.size() < a.size()) b = "0" + b;
		string add = "";
		int mod = 0;
		for(int i = a.size()-1; i >= 0; i--){
			int k = a[i] - '0' + b[i] - '0';
			if(k + mod > 9){
				add += ('0' + k + mod - 10);
				mod = 1;
			}
			else{
				add += ('0' + k + mod);
				mod = 0;
			}
		}
		if(mod) add += '1';
		for(int i = add.size()-1; i >= 0; i--) cout << add[i];
		cout << endl;
	}
	return 0;
}
