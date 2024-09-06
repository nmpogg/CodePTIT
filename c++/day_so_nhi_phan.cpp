#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a1[n], a2[n];
		for(int& x : a1) cin >> x;
		for(int& x : a2) cin >> x;
		int res = 0;
		for(int i = 0; i < n; i++){
			int sum1 = 0, sum2 = 0;
			int j;
			for(j = i; j < n; j++){
				sum1 += a1[j];
				sum2 += a2[j];
				if(sum1 == sum2){
					res = max(res, j-i+1);				
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}
