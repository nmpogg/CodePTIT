#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long a[n+1][n+1], chinh[n+1][n+1] = {0}, phu[n+1][n+1] = {0};
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	if(n == 1){
		cout << a[1][1];
		return 0;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == 1 || j == 1){
				chinh[i][j] = a[i][j];
			}
			else{
				chinh[i][j] = a[i][j] + chinh[i-1][j-1];
			}
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = n; j >= 1; j--){
			if(i == 1 || j == n){
				phu[i][j] = a[i][j];
			}
			else{
				phu[i][j] = phu[i-1][j+1] + a[i][j];
			}
		}
	}
	long long res = -1e18;
	for(int i = n; i >= 1; i--){
		for(int j = n; j >= 1; j--){
			int temp = min(i, j);
			int hang = i - temp, cot = j - temp;
			for(int k = 0; k < min(i, j); k++){
				res = max(res, chinh[i][j] - chinh[hang+k][cot+k] - (phu[i][cot+k+1] - phu[hang+k][j+1]));
			}
		}
	}
	cout << res;
	return 0;
}
