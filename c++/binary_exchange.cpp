#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j] == 1){
					for(int h = 0; h < n; h++){
						a[h][j] = 1;
					}
					for(int k = 0 ; k < m; k++){
						a[i][k] = 1;
					}
				}
			}
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		
	}
	return 0;
}
