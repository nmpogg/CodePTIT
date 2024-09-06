#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int& x : a) cin >> x;
		int max = -1;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < i; j++){
				if((a[i] - a[j]) > max) max = a[i] - a[j];
			}
		}
		cout << max << endl;
	}
	return 0;
}
