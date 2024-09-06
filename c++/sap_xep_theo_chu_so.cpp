#include <bits/stdc++.h>
using namespace std;
bool check(string a, string b){
	string s1 = a + b;
	string s2 = b + a;
	return s1 < s2;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a[n];
		for(string &x : a) cin >> x;
		sort(a, a+n, check);
		for(int i = n-1; i >= 0; i--) cout << a[i];
		cout << endl;
	}
	return 0;
}
