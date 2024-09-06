#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int check = 0, max = 0;
		for(int &x : a) cin >> x;
		for(int i = 0;i < n; i++){
			for(int j = n-1; j >= 0; j--){
				if(a[j] >= a[i]){
					max = j - i + 1;
					check = 1;
					break;
				}
			}
			if(check) break;
		}
		cout << max << endl;
	}
	return 0;
} 
