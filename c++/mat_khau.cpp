#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string a[n];
	for(string &x : a) cin >> x;
	long long count = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j && a[i].find(a[j]) != string::npos) count++;
		}
	}
	cout << count;
	return 0;
}
