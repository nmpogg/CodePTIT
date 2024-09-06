#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][n], cnt = 0;
	for(int i = 0; i < n; i++){
		int count[2] = {0};
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
			count[a[i][j]]++;
		}
		if(count[1] > count[0]){
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
