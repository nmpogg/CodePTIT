#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		int a[n+2][n+2];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		int cnt = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(a[i-1][j-1] == 0 && a[i-1][j] == 0 && a[i-1][j+1] == 0 && a[i][j-1] == 0 && a[i][j+1] == 0 && a[i+1][j-1] == 0 && a[i+1][j] == 0 && a[i+1][j+1] == 0) cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
