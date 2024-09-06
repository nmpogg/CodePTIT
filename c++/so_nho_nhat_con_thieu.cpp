#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n-1];
		for(int &x : a) cin >> x;
		int count = 0;
		for(int i = 0; i < n-1; i++){
			count++;
			if(a[i] != count){
				cout << count << endl;
				break;
			}			
		}
	}
	return 0;
} 
