#include <bits/stdc++.h>
using namespace std;

int u, v, s, t, n, m;
int a[102][102];
bool flag = false;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void dfs(int i, int j){
	a[i][j] = 0;
	if(i == u && j == v){
		flag = true;
		return;
	}
	if(flag) return;
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1]){
			dfs(i1, j1);
		}
	}
}

int main(){
	cin >> n >> m;
	cin >> u >> v >> s >>t;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++) cin >> a[i][j];
	}
	dfs(s, t);
	if(flag) cout << "YES";
	else cout << "NO";
}