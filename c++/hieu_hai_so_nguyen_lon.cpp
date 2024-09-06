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
		if(a < b) swap(a, b);
		string sub = "";
		int mod = 0;
		for(int i = a.size()-1; i >= 0; i--){
			int k = a[i] - b[i] - mod;
			if(k < 0){
				sub += '0' + 10 + k;
				mod = 1;
			}
			else{
				sub += '0' + k;
				mod = 0;
			}
		}
		for(int i = sub.size()-1; i >= 0; i--) cout << sub[i];
		cout << endl;
	}
	return 0;
}
