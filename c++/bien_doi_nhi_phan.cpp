#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> n >> m;
		int a[n][m], b[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				b[i][j] = a[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j]){
					for(int ib = 0; ib < n; ib++){
						b[ib][j] = 1;
					}
					for(int jb = 0; jb < m; jb++){
						b[i][jb] = 1;
					}
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
