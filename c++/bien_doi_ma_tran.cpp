#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
	if(a > b) return a;
	return b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		int res = 0;
		for(int i = 0; i < n; i++){
			int sum_h = 0, sum_c = 0;
			for(int j = 0; j < n; j++){
				sum_h += a[i][j];
				sum_c += a[j][i];
			}
			res = max(res, max(sum_h, sum_c));
		}
		int count = 0;
		for(int i = 0; i < n; i++){
			int sum_h = 0, sum_c = 0;
			for(int j = 0; j < n; j++){
				sum_h += a[i][j];
			}
			if(sum_h < res) count += res - sum_h;
		}
		cout << count << endl;
	}
	return 0;
}
