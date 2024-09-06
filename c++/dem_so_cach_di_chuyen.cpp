#include <bits/stdc++.h>
using namespace std;

int a[21][21], n, k, ans = 0;

void Try(int i, int j, int sum) {

    if(i == n && j == n && sum == k){
        ans++; // valid path found
    }
	if(i >= 1 && i <= n){
		  Try(i + 1, j, sum + a[i+1][j]); // move down
	}
	if(j >= 1 && j <= n){
		Try(i, j + 1, sum + a[i][j+1]); // move right
	}
}

int main(){
    int t;
    cin >> t;

    while(t--){
        cin >> n >> k;
        ans = 0;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++)
                cin >> a[i][j];
        }

        Try(1, 1, a[1][1]);
        cout << ans << endl;
    }

    return 0;
}

