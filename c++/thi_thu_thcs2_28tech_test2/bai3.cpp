#include <bits/stdc++.h>
using namespace std;

int a[101][101];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool check(int x, int i, int j){
	for(int k = 0; k < 8; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(x <= a[i1][j1]) return false;
	}
	return true;
}

int main(){
	int n, m;
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(check(a[i][j], i, j)) ans++;
		}
	}
	cout << ans;
}